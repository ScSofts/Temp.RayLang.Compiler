
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

  virtual void enterStart(RayParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(RayParser::StartContext * /*ctx*/) override { }

  virtual void enterDeclaration(RayParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(RayParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(RayParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(RayParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterNativedVar(RayParser::NativedVarContext * /*ctx*/) override { }
  virtual void exitNativedVar(RayParser::NativedVarContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(RayParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(RayParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterNativedDeclaration(RayParser::NativedDeclarationContext * /*ctx*/) override { }
  virtual void exitNativedDeclaration(RayParser::NativedDeclarationContext * /*ctx*/) override { }

  virtual void enterGetDeclaration(RayParser::GetDeclarationContext * /*ctx*/) override { }
  virtual void exitGetDeclaration(RayParser::GetDeclarationContext * /*ctx*/) override { }

  virtual void enterGetLine(RayParser::GetLineContext * /*ctx*/) override { }
  virtual void exitGetLine(RayParser::GetLineContext * /*ctx*/) override { }

  virtual void enterGetBlock(RayParser::GetBlockContext * /*ctx*/) override { }
  virtual void exitGetBlock(RayParser::GetBlockContext * /*ctx*/) override { }

  virtual void enterPutDeclaration(RayParser::PutDeclarationContext * /*ctx*/) override { }
  virtual void exitPutDeclaration(RayParser::PutDeclarationContext * /*ctx*/) override { }

  virtual void enterPutBlock(RayParser::PutBlockContext * /*ctx*/) override { }
  virtual void exitPutBlock(RayParser::PutBlockContext * /*ctx*/) override { }

  virtual void enterStatement(RayParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(RayParser::StatementContext * /*ctx*/) override { }

  virtual void enterFunctionStatement(RayParser::FunctionStatementContext * /*ctx*/) override { }
  virtual void exitFunctionStatement(RayParser::FunctionStatementContext * /*ctx*/) override { }

  virtual void enterArg(RayParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(RayParser::ArgContext * /*ctx*/) override { }

  virtual void enterTypeStatement(RayParser::TypeStatementContext * /*ctx*/) override { }
  virtual void exitTypeStatement(RayParser::TypeStatementContext * /*ctx*/) override { }

  virtual void enterFunctionSuffix(RayParser::FunctionSuffixContext * /*ctx*/) override { }
  virtual void exitFunctionSuffix(RayParser::FunctionSuffixContext * /*ctx*/) override { }

  virtual void enterExportStatement(RayParser::ExportStatementContext * /*ctx*/) override { }
  virtual void exitExportStatement(RayParser::ExportStatementContext * /*ctx*/) override { }

  virtual void enterIfExpression(RayParser::IfExpressionContext * /*ctx*/) override { }
  virtual void exitIfExpression(RayParser::IfExpressionContext * /*ctx*/) override { }

  virtual void enterWhileExpression(RayParser::WhileExpressionContext * /*ctx*/) override { }
  virtual void exitWhileExpression(RayParser::WhileExpressionContext * /*ctx*/) override { }

  virtual void enterMatchExpression(RayParser::MatchExpressionContext * /*ctx*/) override { }
  virtual void exitMatchExpression(RayParser::MatchExpressionContext * /*ctx*/) override { }

  virtual void enterForExpression(RayParser::ForExpressionContext * /*ctx*/) override { }
  virtual void exitForExpression(RayParser::ForExpressionContext * /*ctx*/) override { }

  virtual void enterBreakExpression(RayParser::BreakExpressionContext * /*ctx*/) override { }
  virtual void exitBreakExpression(RayParser::BreakExpressionContext * /*ctx*/) override { }

  virtual void enterContinueExpression(RayParser::ContinueExpressionContext * /*ctx*/) override { }
  virtual void exitContinueExpression(RayParser::ContinueExpressionContext * /*ctx*/) override { }

  virtual void enterReturnExpression(RayParser::ReturnExpressionContext * /*ctx*/) override { }
  virtual void exitReturnExpression(RayParser::ReturnExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionLine(RayParser::FunctionLineContext * /*ctx*/) override { }
  virtual void exitFunctionLine(RayParser::FunctionLineContext * /*ctx*/) override { }

  virtual void enterFunctionBlock(RayParser::FunctionBlockContext * /*ctx*/) override { }
  virtual void exitFunctionBlock(RayParser::FunctionBlockContext * /*ctx*/) override { }

  virtual void enterExpression(RayParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(RayParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionCall(RayParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(RayParser::FunctionCallContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

