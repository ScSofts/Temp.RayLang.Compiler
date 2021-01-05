
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
    virtual antlrcpp::Any visitMemberIdentifier(RayParser::MemberIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitStart(RayParser::StartContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(RayParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitImplement(RayParser::ImplementContext *context) = 0;

    virtual antlrcpp::Any visitStatement(RayParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitExpression(RayParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArg(RayParser::ArgContext *context) = 0;

    virtual antlrcpp::Any visitArgs(RayParser::ArgsContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationsBlock(RayParser::DeclarationsBlockContext *context) = 0;

    virtual antlrcpp::Any visitFunctionBlock(RayParser::FunctionBlockContext *context) = 0;

    virtual antlrcpp::Any visitExpressions(RayParser::ExpressionsContext *context) = 0;

    virtual antlrcpp::Any visitFunction(RayParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(RayParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionImplement(RayParser::FunctionImplementContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(RayParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariableInitializationAndDeclaration(RayParser::VariableInitializationAndDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitReturnExpression(RayParser::ReturnExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSetValueStatement(RayParser::SetValueStatementContext *context) = 0;

    virtual antlrcpp::Any visitBathImport(RayParser::BathImportContext *context) = 0;

    virtual antlrcpp::Any visitImportStatement(RayParser::ImportStatementContext *context) = 0;

    virtual antlrcpp::Any visitExportStatement(RayParser::ExportStatementContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpression(RayParser::FunctionCallExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCall_args(RayParser::Call_argsContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(RayParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchBlock(RayParser::SwitchBlockContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStatement(RayParser::SwitchStatementContext *context) = 0;


};

