
// Generated from Ray.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "RayParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by RayParser.
 */
class  RayVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RayParser.
   */
    virtual antlrcpp::Any visitStart(RayParser::StartContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(RayParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(RayParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitNativedVar(RayParser::NativedVarContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(RayParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitNativedDeclaration(RayParser::NativedDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitGetDeclaration(RayParser::GetDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitGetLine(RayParser::GetLineContext *context) = 0;

    virtual antlrcpp::Any visitGetBlock(RayParser::GetBlockContext *context) = 0;

    virtual antlrcpp::Any visitPutDeclaration(RayParser::PutDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitPutBlock(RayParser::PutBlockContext *context) = 0;

    virtual antlrcpp::Any visitStatement(RayParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitFunctionStatement(RayParser::FunctionStatementContext *context) = 0;

    virtual antlrcpp::Any visitArg(RayParser::ArgContext *context) = 0;

    virtual antlrcpp::Any visitTypeStatement(RayParser::TypeStatementContext *context) = 0;

    virtual antlrcpp::Any visitFunctionSuffix(RayParser::FunctionSuffixContext *context) = 0;

    virtual antlrcpp::Any visitExportStatement(RayParser::ExportStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfExpression(RayParser::IfExpressionContext *context) = 0;

    virtual antlrcpp::Any visitWhileExpression(RayParser::WhileExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMatchExpression(RayParser::MatchExpressionContext *context) = 0;

    virtual antlrcpp::Any visitForExpression(RayParser::ForExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBreakExpression(RayParser::BreakExpressionContext *context) = 0;

    virtual antlrcpp::Any visitContinueExpression(RayParser::ContinueExpressionContext *context) = 0;

    virtual antlrcpp::Any visitReturnExpression(RayParser::ReturnExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionLine(RayParser::FunctionLineContext *context) = 0;

    virtual antlrcpp::Any visitFunctionBlock(RayParser::FunctionBlockContext *context) = 0;

    virtual antlrcpp::Any visitExpression(RayParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(RayParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitTypeAppendix(RayParser::TypeAppendixContext *context) = 0;


};

