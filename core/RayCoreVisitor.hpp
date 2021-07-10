#include "RayVisitor.h"
#include <llvm/IR/IRBuilder.h>

class RayCoreVisitor : public RayVisitor{
public:   
    struct position_t{
        size_t line;
        size_t character;        
    };
    
    RayCoreVisitor(std::string moduleName):
        moduleName(moduleName),
        RayVisitor(),
        forWhileCounts(size_t{})
    {
    }

    ~RayCoreVisitor(){

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


protected: 
   void enterForWhileBlock(){
       forWhileCounts++;
   }
   
   void exitForWhileBlock(){
       forWhileCounts --;
   }

   bool isInForWhileBlock(){
       return forWhileCounts == 0;
   }


protected:
    using error_code = enum{
        UNEXPECTED_BREAK,
        UNEXPECTED_CONTINUE,
    };
    std::string moduleName;
    size_t forWhileCounts = 0;
    std::vector<error_code> errors;
};