
// Generated from Ray.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "RayVisitor.h"


/**
 * This class provides an empty implementation of RayVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RayBaseVisitor : public RayVisitor {
public:

  virtual antlrcpp::Any visitMemberIdentifier(RayParser::MemberIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart(RayParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(RayParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImplement(RayParser::ImplementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(RayParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(RayParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg(RayParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(RayParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationsBlock(RayParser::DeclarationsBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionBlock(RayParser::FunctionBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressions(RayParser::ExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(RayParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(RayParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionImplement(RayParser::FunctionImplementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(RayParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableInitializationAndDeclaration(RayParser::VariableInitializationAndDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnExpression(RayParser::ReturnExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetValueStatement(RayParser::SetValueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBathImport(RayParser::BathImportContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportStatement(RayParser::ImportStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExportStatement(RayParser::ExportStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallExpression(RayParser::FunctionCallExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_args(RayParser::Call_argsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(RayParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchBlock(RayParser::SwitchBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchStatement(RayParser::SwitchStatementContext *ctx) override {
    return visitChildren(ctx);
  }


};

