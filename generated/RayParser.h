
// Generated from Ray.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  RayParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, Blanks = 22, And = 23, Xor = 24, Not = 25, Or = 26, Reverse = 27, 
    SetEqual = 28, Dot = 29, Colon = 30, MultiLineComment = 31, SingleLineComment = 32, 
    BlockLeft = 33, BlockRight = 34, PairLeft = 35, PairRight = 36, ListLeft = 37, 
    ListRight = 38, At = 39, Semicolon = 40, Comma = 41, Less = 42, More = 43, 
    MoveRight = 44, MoveLeft = 45, SingleArrow = 46, Arrow = 47, Equal = 48, 
    NotEqual = 49, LessEqual = 50, MoreEqual = 51, SingleQuotation = 52, 
    MultiQuotation = 53, Import = 54, Export = 55, Alias = 56, Function = 57, 
    Var = 58, Const = 59, If = 60, Else = 61, Match = 62, For = 63, While = 64, 
    Return = 65, True = 66, False = 67, Null = 68, Identifier = 69, Plus = 70, 
    Minus = 71, Multiply = 72, Divide = 73, SelfPlus = 74, SelfMinus = 75, 
    Pow = 76, Types = 77, Integer = 78, Float = 79, StringLiteral = 80
  };

  enum {
    RuleStart = 0, RuleDeclaration = 1, RuleVariableDeclaration = 2, RuleNativedVar = 3, 
    RuleFunctionDeclaration = 4, RuleNativedDeclaration = 5, RuleGetDeclaration = 6, 
    RuleGetLine = 7, RuleGetBlock = 8, RulePutDeclaration = 9, RulePutBlock = 10, 
    RuleStatement = 11, RuleFunctionStatement = 12, RuleArg = 13, RuleTypeStatement = 14, 
    RuleFunctionSuffix = 15, RuleExportStatement = 16, RuleIfExpression = 17, 
    RuleWhileExpression = 18, RuleMatchExpression = 19, RuleForExpression = 20, 
    RuleBreakExpression = 21, RuleContinueExpression = 22, RuleReturnExpression = 23, 
    RuleFunctionLine = 24, RuleFunctionBlock = 25, RuleExpression = 26, 
    RuleFunctionCall = 27
  };

  explicit RayParser(antlr4::TokenStream *input);
  ~RayParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StartContext;
  class DeclarationContext;
  class VariableDeclarationContext;
  class NativedVarContext;
  class FunctionDeclarationContext;
  class NativedDeclarationContext;
  class GetDeclarationContext;
  class GetLineContext;
  class GetBlockContext;
  class PutDeclarationContext;
  class PutBlockContext;
  class StatementContext;
  class FunctionStatementContext;
  class ArgContext;
  class TypeStatementContext;
  class FunctionSuffixContext;
  class ExportStatementContext;
  class IfExpressionContext;
  class WhileExpressionContext;
  class MatchExpressionContext;
  class ForExpressionContext;
  class BreakExpressionContext;
  class ContinueExpressionContext;
  class ReturnExpressionContext;
  class FunctionLineContext;
  class FunctionBlockContext;
  class ExpressionContext;
  class FunctionCallContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();
    NativedVarContext *nativedVar();
    FunctionDeclarationContext *functionDeclaration();
    GetDeclarationContext *getDeclaration();
    PutDeclarationContext *putDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Types();
    ExportStatementContext *exportStatement();
    antlr4::tree::TerminalNode *SetEqual();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  NativedVarContext : public antlr4::ParserRuleContext {
  public:
    NativedVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NativedDeclarationContext *nativedDeclaration();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Types();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NativedVarContext* nativedVar();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *PairLeft();
    antlr4::tree::TerminalNode *PairRight();
    antlr4::tree::TerminalNode *Semicolon();
    FunctionSuffixContext *functionSuffix();
    NativedDeclarationContext *nativedDeclaration();
    std::vector<ArgContext *> arg();
    ArgContext* arg(size_t i);
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Types();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  NativedDeclarationContext : public antlr4::ParserRuleContext {
  public:
    NativedDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *PairLeft();
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *PairRight();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NativedDeclarationContext* nativedDeclaration();

  class  GetDeclarationContext : public antlr4::ParserRuleContext {
  public:
    GetDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Import();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Alias();
    antlr4::tree::TerminalNode *Semicolon();
    GetBlockContext *getBlock();
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetDeclarationContext* getDeclaration();

  class  GetLineContext : public antlr4::ParserRuleContext {
  public:
    GetLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Alias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetLineContext* getLine();

  class  GetBlockContext : public antlr4::ParserRuleContext {
  public:
    GetBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlockLeft();
    antlr4::tree::TerminalNode *BlockRight();
    std::vector<GetLineContext *> getLine();
    GetLineContext* getLine(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetBlockContext* getBlock();

  class  PutDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PutDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Export();
    PutBlockContext *putBlock();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PutDeclarationContext* putDeclaration();

  class  PutBlockContext : public antlr4::ParserRuleContext {
  public:
    PutBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlockLeft();
    antlr4::tree::TerminalNode *BlockRight();
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);
    std::vector<FunctionDeclarationContext *> functionDeclaration();
    FunctionDeclarationContext* functionDeclaration(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PutBlockContext* putBlock();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionStatementContext *functionStatement();
    TypeStatementContext *typeStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  FunctionStatementContext : public antlr4::ParserRuleContext {
  public:
    FunctionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *PairLeft();
    antlr4::tree::TerminalNode *PairRight();
    FunctionBlockContext *functionBlock();
    FunctionSuffixContext *functionSuffix();
    std::vector<ArgContext *> arg();
    ArgContext* arg(size_t i);
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Types();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionStatementContext* functionStatement();

  class  ArgContext : public antlr4::ParserRuleContext {
  public:
    ArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Types();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgContext* arg();

  class  TypeStatementContext : public antlr4::ParserRuleContext {
  public:
    TypeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *Types();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeStatementContext* typeStatement();

  class  FunctionSuffixContext : public antlr4::ParserRuleContext {
  public:
    FunctionSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExportStatementContext *exportStatement();
    std::vector<antlr4::tree::TerminalNode *> At();
    antlr4::tree::TerminalNode* At(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionSuffixContext* functionSuffix();

  class  ExportStatementContext : public antlr4::ParserRuleContext {
  public:
    ExportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *PairLeft();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *PairRight();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExportStatementContext* exportStatement();

  class  IfExpressionContext : public antlr4::ParserRuleContext {
  public:
    IfExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> If();
    antlr4::tree::TerminalNode* If(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PairLeft();
    antlr4::tree::TerminalNode* PairLeft(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PairRight();
    antlr4::tree::TerminalNode* PairRight(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BlockLeft();
    antlr4::tree::TerminalNode* BlockLeft(size_t i);
    std::vector<FunctionLineContext *> functionLine();
    FunctionLineContext* functionLine(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BlockRight();
    antlr4::tree::TerminalNode* BlockRight(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Else();
    antlr4::tree::TerminalNode* Else(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfExpressionContext* ifExpression();

  class  WhileExpressionContext : public antlr4::ParserRuleContext {
  public:
    WhileExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *PairLeft();
    antlr4::tree::TerminalNode *PairRight();
    FunctionBlockContext *functionBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileExpressionContext* whileExpression();

  class  MatchExpressionContext : public antlr4::ParserRuleContext {
  public:
    MatchExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Match();
    antlr4::tree::TerminalNode *PairLeft();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PairRight();
    antlr4::tree::TerminalNode *BlockLeft();
    antlr4::tree::TerminalNode *BlockRight();
    std::vector<FunctionBlockContext *> functionBlock();
    FunctionBlockContext* functionBlock(size_t i);
    antlr4::tree::TerminalNode *Else();
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Integer();
    antlr4::tree::TerminalNode* Integer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Float();
    antlr4::tree::TerminalNode* Float(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MatchExpressionContext* matchExpression();

  class  ForExpressionContext : public antlr4::ParserRuleContext {
  public:
    ForExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *PairLeft();
    std::vector<antlr4::tree::TerminalNode *> Semicolon();
    antlr4::tree::TerminalNode* Semicolon(size_t i);
    antlr4::tree::TerminalNode *PairRight();
    FunctionBlockContext *functionBlock();
    VariableDeclarationContext *variableDeclaration();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForExpressionContext* forExpression();

  class  BreakExpressionContext : public antlr4::ParserRuleContext {
  public:
    BreakExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakExpressionContext* breakExpression();

  class  ContinueExpressionContext : public antlr4::ParserRuleContext {
  public:
    ContinueExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueExpressionContext* continueExpression();

  class  ReturnExpressionContext : public antlr4::ParserRuleContext {
  public:
    ReturnExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Semicolon();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnExpressionContext* returnExpression();

  class  FunctionLineContext : public antlr4::ParserRuleContext {
  public:
    FunctionLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Semicolon();
    IfExpressionContext *ifExpression();
    WhileExpressionContext *whileExpression();
    MatchExpressionContext *matchExpression();
    ForExpressionContext *forExpression();
    TypeStatementContext *typeStatement();
    BreakExpressionContext *breakExpression();
    ContinueExpressionContext *continueExpression();
    ReturnExpressionContext *returnExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionLineContext* functionLine();

  class  FunctionBlockContext : public antlr4::ParserRuleContext {
  public:
    FunctionBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlockLeft();
    antlr4::tree::TerminalNode *BlockRight();
    std::vector<FunctionLineContext *> functionLine();
    FunctionLineContext* functionLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBlockContext* functionBlock();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Integer();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *True();
    antlr4::tree::TerminalNode *False();
    antlr4::tree::TerminalNode *Null();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);
    FunctionCallContext *functionCall();
    antlr4::tree::TerminalNode *PairLeft();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PairRight();
    antlr4::tree::TerminalNode *SelfPlus();
    antlr4::tree::TerminalNode *SelfMinus();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Reverse();
    antlr4::tree::TerminalNode *MoveLeft();
    antlr4::tree::TerminalNode *MoveRight();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *MoreEqual();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Xor();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Pow();
    antlr4::tree::TerminalNode *Multiply();
    antlr4::tree::TerminalNode *Divide();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *PairLeft();
    antlr4::tree::TerminalNode *PairRight();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

