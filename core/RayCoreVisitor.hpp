#include "RayVisitor.h"
#include "../utils/gettype-inl.h"
#include <unordered_map>

class RayCoreVisitor : public RayVisitor{
public:   
    struct position_t{
        size_t line;
        size_t character;        
    };

    struct typeMap_t{
        std::string name;
        Ray::Type type;
    };
    
    using error_code = enum{
        UNEXPECTED_BREAK,
        UNEXPECTED_CONTINUE,
        REDEFINE_VARIABLE,
        REDEFINE_FUNCTION,
        REDEFINE_TYPE
    };
   

    using Type = Ray::Type;
    using Variable = Ray::Variable;
    
    RayCoreVisitor(
            std::string moduleName,
            const antlr4::CommonTokenStream &tokens,
            std::unique_ptr<llvm::Module> module
        ):
        moduleName(moduleName),
        RayVisitor(),
        forWhileCounts(size_t{}),
        module(std::move(module)),
        tokens(tokens),
        isFunction(size_t{})
    {
        this->irBuilder = std::make_unique<llvm::IRBuilder<>>(this->module->getContext());
        context = & this->module->getContext();
    }

    ~RayCoreVisitor(){

    }

    std::unique_ptr<llvm::Module> &getModule(){
        return this->module;
    }

    bool success(){
        return errors.empty();
    }

    std::vector<error_code> &getErrors(){
        return errors;
    }

  /**
   * Visit parse trees produced by RayParser.
   */
    virtual antlrcpp::Any visitStart(RayParser::StartContext *context)override;

    virtual antlrcpp::Any visitDeclaration(RayParser::DeclarationContext *context)override;

    virtual antlrcpp::Any visitVariableDeclaration(RayParser::VariableDeclarationContext *context)override;

    virtual antlrcpp::Any visitNativedVar(RayParser::NativedVarContext *context)override;

    virtual antlrcpp::Any visitFunctionDeclaration(RayParser::FunctionDeclarationContext *context)override;

    virtual antlrcpp::Any visitNativedDeclaration(RayParser::NativedDeclarationContext *context)override;

    virtual antlrcpp::Any visitGetDeclaration(RayParser::GetDeclarationContext *context)override;

    virtual antlrcpp::Any visitGetLine(RayParser::GetLineContext *context)override;

    virtual antlrcpp::Any visitGetBlock(RayParser::GetBlockContext *context)override;

    virtual antlrcpp::Any visitPutDeclaration(RayParser::PutDeclarationContext *context)override;

    virtual antlrcpp::Any visitPutBlock(RayParser::PutBlockContext *context)override;

    virtual antlrcpp::Any visitStatement(RayParser::StatementContext *context)override;

    virtual antlrcpp::Any visitFunctionStatement(RayParser::FunctionStatementContext *context)override;

    virtual antlrcpp::Any visitArg(RayParser::ArgContext *context)override;

    virtual antlrcpp::Any visitTypeStatement(RayParser::TypeStatementContext *context)override;

    virtual antlrcpp::Any visitFunctionSuffix(RayParser::FunctionSuffixContext *context)override;

    virtual antlrcpp::Any visitExportStatement(RayParser::ExportStatementContext *context)override;

    virtual antlrcpp::Any visitIfExpression(RayParser::IfExpressionContext *context)override;

    virtual antlrcpp::Any visitWhileExpression(RayParser::WhileExpressionContext *context)override;

    virtual antlrcpp::Any visitMatchExpression(RayParser::MatchExpressionContext *context)override;

    virtual antlrcpp::Any visitForExpression(RayParser::ForExpressionContext *context)override;

    virtual antlrcpp::Any visitBreakExpression(RayParser::BreakExpressionContext *context)override;

    virtual antlrcpp::Any visitContinueExpression(RayParser::ContinueExpressionContext *context)override;

    virtual antlrcpp::Any visitReturnExpression(RayParser::ReturnExpressionContext *context)override;

    virtual antlrcpp::Any visitFunctionLine(RayParser::FunctionLineContext *context)override;

    virtual antlrcpp::Any visitFunctionBlock(RayParser::FunctionBlockContext *context)override;

    virtual antlrcpp::Any visitExpression(RayParser::ExpressionContext *context)override;

    virtual antlrcpp::Any visitFunctionCall(RayParser::FunctionCallContext *context)override;

    virtual antlrcpp::Any visitTypeAppendix(RayParser::TypeAppendixContext *context)override;

protected: 
   void enterForWhileBlock(){
       forWhileCounts++;
   }
   
   void exitForWhileBlock(){
       forWhileCounts --;
   }

   void enterFunction(){
       isFunction ++;
   }

   void exitFunction(){
       isFunction --;
   }

   bool isGlobal(){
       return isFunction <= 0;
   }

   bool isInForWhileBlock(){
       return forWhileCounts == 0;
   }

protected:

    std::string makeModuleMemberName(llvm::StringRef name)const{
        constexpr auto suffixLength =  sizeof(".ray") - 1; // ".ray\0"
        std::string _name = moduleName.substr( 0 , moduleName.length() - suffixLength) + "." + name.str();
        llvm::StringRef ref = _name;
        size_t i(0),j(0);
        if( (i = ref.rfind('/')) != llvm::StringRef::npos || (j = ref.rfind('\\') != llvm::StringRef::npos )){
            size_t select(0);
            std::cout << "find" << i << " " << j << std::endl; 
            if(i == llvm::StringRef::npos){
                select = j;
            }else if(j == llvm::StringRef::npos){
                select = i;
            }else{
                select = std::max(i, j);
            }
            return ref.substr( select + 1).str();
        }
        return ref.str();
    }

    inline void replace(char find, char replace, std::string &src)const{
        for(auto &i:src){
            if(i == find){
                i = replace;
            }
        }
    }

    inline bool isDefined(std::string id){
        return (variablesPrivate.count(id)        != 0) || 
               (variablesPublic.count(id)         != 0) ||
               (variablesImported.count(id)       != 0) ||

               (functionPrivate.count(id)         != 0) ||
               (functionPublic.count(id)          != 0) ||
               (functionImported.count(id)        != 0) ||

               (typeMapPublic.count(id)           != 0) ||
               (typeMapPrivate.count(id)          != 0) ||
               (typeMapImported.count(id)         != 0) ||

               (nativeVariablesPublic.count(id)   != 0) ||
               (nativeVariablesPrivate.count(id)  != 0) ||
               (nativeVariablesImported.count(id) != 0);
    }

    inline void parserError(position_t pos,const llvm::StringRef msg,error_code err){
        llvm::errs().changeColor(llvm::errs().RED);
        llvm::errs() << moduleName << ":" << pos.line << "," << pos.character << ": Error: " << msg.str() << '\n';
        errors.push_back(err);
        llvm::errs().changeColor(llvm::errs().WHITE);
    }

protected:


    std::string moduleName;
    size_t forWhileCounts = 0;
    std::vector<error_code> errors;
    std::unique_ptr<llvm::Module> module;
    std::unique_ptr<llvm::IRBuilder<>> irBuilder;
    llvm::LLVMContext * context;
    const antlr4::CommonTokenStream &tokens;


    std::unordered_map<std::string, Variable> variablesPrivate{};
    std::unordered_map<std::string, Variable> variablesPublic{};
    std::unordered_map<std::string, Variable> nativeVariablesPrivate{};
    std::unordered_map<std::string, Variable> nativeVariablesPublic{};
    
    std::unordered_map<std::string, Type>        typeMapPrivate{};
    std::unordered_map<std::string, Type>        typeMapPublic{};
    std::unordered_map<std::string, llvm::Function*>    functionPrivate{};
    std::unordered_map<std::string, llvm::Function*>    functionPublic{};


    std::unordered_map<std::string, Variable> variablesImported;
    std::unordered_map<std::string, Variable> nativeVariablesImported;
    std::unordered_map<std::string, Type> typeMapImported;
    std::unordered_map<std::string, llvm::Function *> functionImported;
    size_t isFunction;
};