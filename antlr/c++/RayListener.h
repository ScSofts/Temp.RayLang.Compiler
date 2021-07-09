
// Generated from Ray.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "RayParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RayParser.
 */
class  RayListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStart(RayParser::StartContext *ctx) = 0;
  virtual void exitStart(RayParser::StartContext *ctx) = 0;

  virtual void enterDeclaration(RayParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(RayParser::DeclarationContext *ctx) = 0;

  virtual void enterVariableDeclaration(RayParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(RayParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterNativedVar(RayParser::NativedVarContext *ctx) = 0;
  virtual void exitNativedVar(RayParser::NativedVarContext *ctx) = 0;

  virtual void enterFunctionDeclaration(RayParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(RayParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterNativedDeclaration(RayParser::NativedDeclarationContext *ctx) = 0;
  virtual void exitNativedDeclaration(RayParser::NativedDeclarationContext *ctx) = 0;

  virtual void enterGetDeclaration(RayParser::GetDeclarationContext *ctx) = 0;
  virtual void exitGetDeclaration(RayParser::GetDeclarationContext *ctx) = 0;

  virtual void enterGetLine(RayParser::GetLineContext *ctx) = 0;
  virtual void exitGetLine(RayParser::GetLineContext *ctx) = 0;

  virtual void enterGetBlock(RayParser::GetBlockContext *ctx) = 0;
  virtual void exitGetBlock(RayParser::GetBlockContext *ctx) = 0;

  virtual void enterPutDeclaration(RayParser::PutDeclarationContext *ctx) = 0;
  virtual void exitPutDeclaration(RayParser::PutDeclarationContext *ctx) = 0;

  virtual void enterPutBlock(RayParser::PutBlockContext *ctx) = 0;
  virtual void exitPutBlock(RayParser::PutBlockContext *ctx) = 0;

  virtual void enterStatement(RayParser::StatementContext *ctx) = 0;
  virtual void exitStatement(RayParser::StatementContext *ctx) = 0;

  virtual void enterFunctionStatement(RayParser::FunctionStatementContext *ctx) = 0;
  virtual void exitFunctionStatement(RayParser::FunctionStatementContext *ctx) = 0;

  virtual void enterArg(RayParser::ArgContext *ctx) = 0;
  virtual void exitArg(RayParser::ArgContext *ctx) = 0;

  virtual void enterTypeStatement(RayParser::TypeStatementContext *ctx) = 0;
  virtual void exitTypeStatement(RayParser::TypeStatementContext *ctx) = 0;

  virtual void enterFunctionSuffix(RayParser::FunctionSuffixContext *ctx) = 0;
  virtual void exitFunctionSuffix(RayParser::FunctionSuffixContext *ctx) = 0;

  virtual void enterExportStatement(RayParser::ExportStatementContext *ctx) = 0;
  virtual void exitExportStatement(RayParser::ExportStatementContext *ctx) = 0;

  virtual void enterIfExpression(RayParser::IfExpressionContext *ctx) = 0;
  virtual void exitIfExpression(RayParser::IfExpressionContext *ctx) = 0;

  virtual void enterWhileExpression(RayParser::WhileExpressionContext *ctx) = 0;
  virtual void exitWhileExpression(RayParser::WhileExpressionContext *ctx) = 0;

  virtual void enterMatchExpression(RayParser::MatchExpressionContext *ctx) = 0;
  virtual void exitMatchExpression(RayParser::MatchExpressionContext *ctx) = 0;

  virtual void enterForExpression(RayParser::ForExpressionContext *ctx) = 0;
  virtual void exitForExpression(RayParser::ForExpressionContext *ctx) = 0;

  virtual void enterBreakExpression(RayParser::BreakExpressionContext *ctx) = 0;
  virtual void exitBreakExpression(RayParser::BreakExpressionContext *ctx) = 0;

  virtual void enterContinueExpression(RayParser::ContinueExpressionContext *ctx) = 0;
  virtual void exitContinueExpression(RayParser::ContinueExpressionContext *ctx) = 0;

  virtual void enterReturnExpression(RayParser::ReturnExpressionContext *ctx) = 0;
  virtual void exitReturnExpression(RayParser::ReturnExpressionContext *ctx) = 0;

  virtual void enterFunctionLine(RayParser::FunctionLineContext *ctx) = 0;
  virtual void exitFunctionLine(RayParser::FunctionLineContext *ctx) = 0;

  virtual void enterFunctionBlock(RayParser::FunctionBlockContext *ctx) = 0;
  virtual void exitFunctionBlock(RayParser::FunctionBlockContext *ctx) = 0;

  virtual void enterExpression(RayParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(RayParser::ExpressionContext *ctx) = 0;

  virtual void enterFunctionCall(RayParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(RayParser::FunctionCallContext *ctx) = 0;


};

