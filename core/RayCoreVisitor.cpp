#include "RayCoreVisitor.hpp"
#include "RayCoreErrorHandler-inl.hpp"

antlrcpp::Any RayCoreVisitor::visitStart(RayParser::StartContext *context) {
  if(context->isEmpty()){
    return nullptr;
  }else{
    for (auto i : context->children) {
      visit(i);
    }
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
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitFunctionStatement(
    RayParser::FunctionStatementContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitArg(RayParser::ArgContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitTypeStatement(
    RayParser::TypeStatementContext *context) {
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
    std::cerr << moduleName << ":" << pos.line << "," << pos.character << ": Error: " << msg << std::endl;
    RayCoreErrorListener::underLineError(this->tks,context->getStart());
    errors.push_back(this->UNEXPECTED_BREAK);
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
    std::cerr << moduleName << ":" << pos.line << "," << pos.character << ": Error:" << msg << std::endl;
    RayCoreErrorListener::underLineError(this->tks,context->getStart());
    errors.push_back(this->UNEXPECTED_CONTINUE);
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
     
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitExpression(
    RayParser::ExpressionContext *context) {
  return antlrcpp::Any{};
}

antlrcpp::Any RayCoreVisitor::visitFunctionCall(
    RayParser::FunctionCallContext *context) {
  return antlrcpp::Any{};
}