#include "RayCoreVisitor.hpp"
#include "RayCoreErrorHandler-inl.hpp"



antlrcpp::Any RayCoreVisitor::visitStart(RayParser::StartContext *context) {
  if(!context->children.empty()){
    for(auto &i : context->children)
      visit(i);
  }
  if(errors.empty())
    return true;
  else
  {
    return false;
  }
}

antlrcpp::Any RayCoreVisitor::visitDeclaration(
    RayParser::DeclarationContext *context) {
      for(auto i : context->children){
        visit(i);
      }
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitVariableDeclaration(
    RayParser::VariableDeclarationContext *context) {
    if(isGlobal()){

    }else{
      
    }
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitNativedVar(
    RayParser::NativedVarContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitFunctionDeclaration(
    RayParser::FunctionDeclarationContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitNativedDeclaration(
    RayParser::NativedDeclarationContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitGetDeclaration(
    RayParser::GetDeclarationContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitGetLine(RayParser::GetLineContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitGetBlock(
    RayParser::GetBlockContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitPutDeclaration(
    RayParser::PutDeclarationContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitPutBlock(
    RayParser::PutBlockContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitStatement(
    RayParser::StatementContext *context) {
      for(auto &i : context->children)
        visit(i);
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitFunctionStatement(
    RayParser::FunctionStatementContext *context) {
   auto _type =  visit(context->typeAppendix());
   std::string name = context->Identifier()->getText();
   if(_type.isNull()){
    this->invaildTypeError(context->typeAppendix()->getStart());
   }else if(isDefined(name)){
     redefinitionError(context->Identifier()->getSymbol());
   }else{
     Ray::Type type = _type.as<Ray::Type>();
     std::vector<llvm::Type*> argsTypes;
     std::vector<Ray::Type> argsRayTypes;

     for(auto i : context->arg()){
       antlrcpp::Any _argType =  visit(i);
       if(_argType.isNull()){
         invaildTypeError(i->getStart());
         return nullptr;
       }else{
         Ray::Type argType = _argType.as<Ray::Type>();
         argsTypes.push_back(argType.type);
         argsRayTypes.push_back(argType);
       }
     }

    llvm::FunctionType *funcType = llvm::FunctionType::get(type.type, argsTypes , false);
    llvm::Function * function = llvm::Function::Create(
        funcType, 
        llvm::Function::PrivateLinkage,
        module->getDataLayout().getProgramAddressSpace(),
        name,
        module.get()
      );
    
    llvm::BasicBlock *entry = llvm::BasicBlock::Create(*(this->context), "entry", function);
    this->funcBlock = entry;
    
    visit(context->functionBlock());
   }
  return nullptr;
}

antlrcpp::Any RayCoreVisitor::visitArg(RayParser::ArgContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitTypeStatement(
    RayParser::TypeStatementContext *context) {
    auto identifier = context->Identifier();
    std::string name = identifier->getText();

    
    if(!isDefined(name)){
        auto _type = visit(context->typeAppendix());
        if(_type.isNull()){
          invaildTypeError(context->typeAppendix()->getStart());
          return nullptr;
        }else{

          return typeMap_t{name, _type.as<Ray::Type>()};
        }
    }else{
      redefinitionError(context->Identifier()->getSymbol()); 
      return antlrcpp::Any{nullptr};
    }
  

  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitFunctionSuffix(
    RayParser::FunctionSuffixContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitExportStatement(
    RayParser::ExportStatementContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitIfExpression(
    RayParser::IfExpressionContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitWhileExpression(
    RayParser::WhileExpressionContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitMatchExpression(
    RayParser::MatchExpressionContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitForExpression(
    RayParser::ForExpressionContext *context) {
  enterForWhileBlock();

  exitForWhileBlock();
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitBreakExpression(
    RayParser::BreakExpressionContext *context) {
  if(!isInForWhileBlock()){
    position_t pos{
        .line = context->start->getLine(),
        .character = context->start->getCharPositionInLine()
    };
    auto msg = "unexpected 'break' out of 'for' and 'while' blocks.";
    parserError(pos, msg, this->UNEXPECTED_BREAK);
    RayCoreErrorListener::underLineError(this->tokens,context->getStart());
    return nullptr;
  }else{
    
  }
  
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitContinueExpression(
    RayParser::ContinueExpressionContext *context) {
  
  if(!isInForWhileBlock()){
    position_t pos{
        .line = context->start->getLine(),
        .character = context->start->getCharPositionInLine()
    };
    auto msg = "unexpected 'continue' out of 'for' and 'while' blocks.";
    parserError(pos, msg, this->UNEXPECTED_CONTINUE);
    RayCoreErrorListener::underLineError(this->tokens,context->getStart());
    return nullptr;
  }else{
    
  }
  
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitReturnExpression(
    RayParser::ReturnExpressionContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitFunctionLine(
    RayParser::FunctionLineContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitFunctionBlock(
    RayParser::FunctionBlockContext *context) {
  if(!this->funcBlock){
    this->unexpectedBlockError(context->getStart());
    return nullptr;
  }   
  llvm::IRBuilder<> builder(this->funcBlock);
  for(auto &functionLine :context->children){
    auto line = visit(functionLine);
  }

  this->funcBlock = nullptr;
  return true;
}

antlrcpp::Any RayCoreVisitor::visitExpression(
    RayParser::ExpressionContext *context) {
  
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitFunctionCall(
    RayParser::FunctionCallContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitTypeAppendix(RayParser::TypeAppendixContext *context){
  std::string identifier = context->getText();
  Ray::Type type;

  type = Ray::getBasicType(identifier, this->irBuilder );
  if(type.type != nullptr){
    return type;
  }
  return nullptr;
}

void RayCoreVisitor::invaildTypeError(antlr4::Token *token){
     position_t pos{
       .line = token->getLine(),
       .character = token->getCharPositionInLine()
     };
     std::string msg = "invaild type '";
     msg += 
     msg += "'.";
     parserError(pos, msg, this->INVALID_TYPE);
     RayCoreErrorListener::underLineError(this->tokens, token);
}

void RayCoreVisitor::redefinitionError(antlr4::Token *token){
    std::string msg = "redefinition of identifier";
    msg += "'";
    msg += token->getText();
    msg += "'.";
    position_t pos = {
        token->getLine(),
        token->getCharPositionInLine()
    };
    parserError(pos, msg, this->REDEFINE_TYPE);
    RayCoreErrorListener::underLineError(this->tokens,token);
}

void RayCoreVisitor::unexpectedBlockError(antlr4::Token *token){
   std::string msg = "unexpected block ";
    msg += "'";
    msg += token->getText();
    msg += "'.";
    position_t pos = {
        token->getLine(),
        token->getCharPositionInLine()
    };
    parserError(pos, msg, this->UNEXPECTED_BLOCK);
    RayCoreErrorListener::underLineError(this->tokens,token);
}