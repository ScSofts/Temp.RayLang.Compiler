
// Generated from Ray.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "RayParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RayParser.
 */
class  RayListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMemberIdentifier(RayParser::MemberIdentifierContext *ctx) = 0;
  virtual void exitMemberIdentifier(RayParser::MemberIdentifierContext *ctx) = 0;

  virtual void enterStart(RayParser::StartContext *ctx) = 0;
  virtual void exitStart(RayParser::StartContext *ctx) = 0;

  virtual void enterDeclaration(RayParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(RayParser::DeclarationContext *ctx) = 0;

  virtual void enterImplement(RayParser::ImplementContext *ctx) = 0;
  virtual void exitImplement(RayParser::ImplementContext *ctx) = 0;

  virtual void enterStatement(RayParser::StatementContext *ctx) = 0;
  virtual void exitStatement(RayParser::StatementContext *ctx) = 0;

  virtual void enterExpression(RayParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(RayParser::ExpressionContext *ctx) = 0;

  virtual void enterArg(RayParser::ArgContext *ctx) = 0;
  virtual void exitArg(RayParser::ArgContext *ctx) = 0;

  virtual void enterArgs(RayParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(RayParser::ArgsContext *ctx) = 0;

  virtual void enterDeclarationsBlock(RayParser::DeclarationsBlockContext *ctx) = 0;
  virtual void exitDeclarationsBlock(RayParser::DeclarationsBlockContext *ctx) = 0;

  virtual void enterFunctionBlock(RayParser::FunctionBlockContext *ctx) = 0;
  virtual void exitFunctionBlock(RayParser::FunctionBlockContext *ctx) = 0;

  virtual void enterExpressions(RayParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(RayParser::ExpressionsContext *ctx) = 0;

  virtual void enterFunction(RayParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(RayParser::FunctionContext *ctx) = 0;

  virtual void enterFunctionDeclaration(RayParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(RayParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterFunctionImplement(RayParser::FunctionImplementContext *ctx) = 0;
  virtual void exitFunctionImplement(RayParser::FunctionImplementContext *ctx) = 0;

  virtual void enterVariableDeclaration(RayParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(RayParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterVariableInitializationAndDeclaration(RayParser::VariableInitializationAndDeclarationContext *ctx) = 0;
  virtual void exitVariableInitializationAndDeclaration(RayParser::VariableInitializationAndDeclarationContext *ctx) = 0;

  virtual void enterReturnExpression(RayParser::ReturnExpressionContext *ctx) = 0;
  virtual void exitReturnExpression(RayParser::ReturnExpressionContext *ctx) = 0;

  virtual void enterSetValueStatement(RayParser::SetValueStatementContext *ctx) = 0;
  virtual void exitSetValueStatement(RayParser::SetValueStatementContext *ctx) = 0;

  virtual void enterBathImport(RayParser::BathImportContext *ctx) = 0;
  virtual void exitBathImport(RayParser::BathImportContext *ctx) = 0;

  virtual void enterImportStatement(RayParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(RayParser::ImportStatementContext *ctx) = 0;

  virtual void enterExportStatement(RayParser::ExportStatementContext *ctx) = 0;
  virtual void exitExportStatement(RayParser::ExportStatementContext *ctx) = 0;

  virtual void enterFunctionCallExpression(RayParser::FunctionCallExpressionContext *ctx) = 0;
  virtual void exitFunctionCallExpression(RayParser::FunctionCallExpressionContext *ctx) = 0;

  virtual void enterCall_args(RayParser::Call_argsContext *ctx) = 0;
  virtual void exitCall_args(RayParser::Call_argsContext *ctx) = 0;

  virtual void enterIfStatement(RayParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(RayParser::IfStatementContext *ctx) = 0;

  virtual void enterSwitchBlock(RayParser::SwitchBlockContext *ctx) = 0;
  virtual void exitSwitchBlock(RayParser::SwitchBlockContext *ctx) = 0;

  virtual void enterSwitchStatement(RayParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(RayParser::SwitchStatementContext *ctx) = 0;


};

