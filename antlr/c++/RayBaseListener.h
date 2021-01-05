
// Generated from Ray.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "RayListener.h"


/**
 * This class provides an empty implementation of RayListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RayBaseListener : public RayListener {
public:

  virtual void enterMemberIdentifier(RayParser::MemberIdentifierContext * /*ctx*/) override { }
  virtual void exitMemberIdentifier(RayParser::MemberIdentifierContext * /*ctx*/) override { }

  virtual void enterStart(RayParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(RayParser::StartContext * /*ctx*/) override { }

  virtual void enterDeclaration(RayParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(RayParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterImplement(RayParser::ImplementContext * /*ctx*/) override { }
  virtual void exitImplement(RayParser::ImplementContext * /*ctx*/) override { }

  virtual void enterStatement(RayParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(RayParser::StatementContext * /*ctx*/) override { }

  virtual void enterExpression(RayParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(RayParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterArg(RayParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(RayParser::ArgContext * /*ctx*/) override { }

  virtual void enterArgs(RayParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(RayParser::ArgsContext * /*ctx*/) override { }

  virtual void enterDeclarationsBlock(RayParser::DeclarationsBlockContext * /*ctx*/) override { }
  virtual void exitDeclarationsBlock(RayParser::DeclarationsBlockContext * /*ctx*/) override { }

  virtual void enterFunctionBlock(RayParser::FunctionBlockContext * /*ctx*/) override { }
  virtual void exitFunctionBlock(RayParser::FunctionBlockContext * /*ctx*/) override { }

  virtual void enterExpressions(RayParser::ExpressionsContext * /*ctx*/) override { }
  virtual void exitExpressions(RayParser::ExpressionsContext * /*ctx*/) override { }

  virtual void enterFunction(RayParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(RayParser::FunctionContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(RayParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(RayParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionImplement(RayParser::FunctionImplementContext * /*ctx*/) override { }
  virtual void exitFunctionImplement(RayParser::FunctionImplementContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(RayParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(RayParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterVariableInitializationAndDeclaration(RayParser::VariableInitializationAndDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableInitializationAndDeclaration(RayParser::VariableInitializationAndDeclarationContext * /*ctx*/) override { }

  virtual void enterReturnExpression(RayParser::ReturnExpressionContext * /*ctx*/) override { }
  virtual void exitReturnExpression(RayParser::ReturnExpressionContext * /*ctx*/) override { }

  virtual void enterSetValueStatement(RayParser::SetValueStatementContext * /*ctx*/) override { }
  virtual void exitSetValueStatement(RayParser::SetValueStatementContext * /*ctx*/) override { }

  virtual void enterBathImport(RayParser::BathImportContext * /*ctx*/) override { }
  virtual void exitBathImport(RayParser::BathImportContext * /*ctx*/) override { }

  virtual void enterImportStatement(RayParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(RayParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterExportStatement(RayParser::ExportStatementContext * /*ctx*/) override { }
  virtual void exitExportStatement(RayParser::ExportStatementContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpression(RayParser::FunctionCallExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpression(RayParser::FunctionCallExpressionContext * /*ctx*/) override { }

  virtual void enterCall_args(RayParser::Call_argsContext * /*ctx*/) override { }
  virtual void exitCall_args(RayParser::Call_argsContext * /*ctx*/) override { }

  virtual void enterIfStatement(RayParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(RayParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterSwitchBlock(RayParser::SwitchBlockContext * /*ctx*/) override { }
  virtual void exitSwitchBlock(RayParser::SwitchBlockContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(RayParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(RayParser::SwitchStatementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

