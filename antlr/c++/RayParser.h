
// Generated from Ray.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  RayParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, Pow = 5, Not = 6, Or = 7, SetEqual = 8, 
    Dot = 9, Colon = 10, MultiLineComment = 11, SingleLineComment = 12, 
    BlockLeft = 13, BlockRight = 14, PairLeft = 15, PairRight = 16, ListLeft = 17, 
    ListRight = 18, At = 19, Semicolon = 20, Comma = 21, Less = 22, More = 23, 
    SingleArrow = 24, Arrow = 25, Equal = 26, NotEqual = 27, LessEqual = 28, 
    MoreEqual = 29, Return = 30, SingleQuotation = 31, MultiQuotation = 32, 
    Import = 33, Export = 34, Alias = 35, Function = 36, Var = 37, If = 38, 
    For = 39, Switch = 40, Else = 41, Types = 42, KeyWords = 43, Identifier = 44, 
    Blanks = 45, Space = 46, Constants = 47, List = 48
  };

  enum {
    RuleMemberIdentifier = 0, RuleStart = 1, RuleDeclaration = 2, RuleImplement = 3, 
    RuleStatement = 4, RuleExpression = 5, RuleArg = 6, RuleArgs = 7, RuleDeclarationsBlock = 8, 
    RuleFunctionBlock = 9, RuleExpressions = 10, RuleFunction = 11, RuleFunctionDeclaration = 12, 
    RuleFunctionImplement = 13, RuleVariableDeclaration = 14, RuleVariableInitializationAndDeclaration = 15, 
    RuleReturnExpression = 16, RuleSetValueStatement = 17, RuleBathImport = 18, 
    RuleImportStatement = 19, RuleExportStatement = 20, RuleFunctionCallExpression = 21, 
    RuleCall_args = 22, RuleIfStatement = 23, RuleSwitchBlock = 24, RuleSwitchStatement = 25
  };

  explicit RayParser(antlr4::TokenStream *input);
  ~RayParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class MemberIdentifierContext;
  class StartContext;
  class DeclarationContext;
  class ImplementContext;
  class StatementContext;
  class ExpressionContext;
  class ArgContext;
  class ArgsContext;
  class DeclarationsBlockContext;
  class FunctionBlockContext;
  class ExpressionsContext;
  class FunctionContext;
  class FunctionDeclarationContext;
  class FunctionImplementContext;
  class VariableDeclarationContext;
  class VariableInitializationAndDeclarationContext;
  class ReturnExpressionContext;
  class SetValueStatementContext;
  class BathImportContext;
  class ImportStatementContext;
  class ExportStatementContext;
  class FunctionCallExpressionContext;
  class Call_argsContext;
  class IfStatementContext;
  class SwitchBlockContext;
  class SwitchStatementContext; 

  class  MemberIdentifierContext : public antlr4::ParserRuleContext {
  public:
    MemberIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ListLeft();
    antlr4::tree::TerminalNode* ListLeft(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ListRight();
    antlr4::tree::TerminalNode* ListRight(size_t i);
    std::vector<MemberIdentifierContext *> memberIdentifier();
    MemberIdentifierContext* memberIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Constants();
    antlr4::tree::TerminalNode* Constants(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberIdentifierContext* memberIdentifier();

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<ImplementContext *> implement();
    ImplementContext* implement(size_t i);
    std::vector<ImportStatementContext *> importStatement();
    ImportStatementContext* importStatement(size_t i);
    std::vector<ExportStatementContext *> exportStatement();
    ExportStatementContext* exportStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDeclarationContext *functionDeclaration();
    VariableDeclarationContext *variableDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  ImplementContext : public antlr4::ParserRuleContext {
  public:
    ImplementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionImplementContext *functionImplement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImplementContext* implement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SetValueStatementContext *setValueStatement();
    antlr4::tree::TerminalNode *Semicolon();
    IfStatementContext *ifStatement();
    SwitchStatementContext *switchStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionCallExpressionContext *functionCallExpression();
    antlr4::tree::TerminalNode *Not();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Constants();
    MemberIdentifierContext *memberIdentifier();
    antlr4::tree::TerminalNode *PairLeft();
    antlr4::tree::TerminalNode *PairRight();
    antlr4::tree::TerminalNode *Pow();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *MoreEqual();
    antlr4::tree::TerminalNode *LessEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ArgContext : public antlr4::ParserRuleContext {
  public:
    ArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Types();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgContext* arg();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgContext *> arg();
    ArgContext* arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  DeclarationsBlockContext : public antlr4::ParserRuleContext {
  public:
    DeclarationsBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlockLeft();
    antlr4::tree::TerminalNode *BlockRight();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationsBlockContext* declarationsBlock();

  class  FunctionBlockContext : public antlr4::ParserRuleContext {
  public:
    FunctionBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlockLeft();
    antlr4::tree::TerminalNode *BlockRight();
    std::vector<ReturnExpressionContext *> returnExpression();
    ReturnExpressionContext* returnExpression(size_t i);
    std::vector<VariableInitializationAndDeclarationContext *> variableInitializationAndDeclaration();
    VariableInitializationAndDeclarationContext* variableInitializationAndDeclaration(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<ExpressionsContext *> expressions();
    ExpressionsContext* expressions(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBlockContext* functionBlock();

  class  ExpressionsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Semicolon();
    antlr4::tree::TerminalNode* Semicolon(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsContext* expressions();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *PairLeft();
    antlr4::tree::TerminalNode *PairRight();
    antlr4::tree::TerminalNode *SingleArrow();
    antlr4::tree::TerminalNode *Types();
    ArgsContext *args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  FunctionImplementContext : public antlr4::ParserRuleContext {
  public:
    FunctionImplementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();
    FunctionBlockContext *functionBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionImplementContext* functionImplement();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Types();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  VariableInitializationAndDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableInitializationAndDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Types();
    antlr4::tree::TerminalNode *SetEqual();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableInitializationAndDeclarationContext* variableInitializationAndDeclaration();

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

  class  SetValueStatementContext : public antlr4::ParserRuleContext {
  public:
    SetValueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberIdentifierContext *memberIdentifier();
    antlr4::tree::TerminalNode *SetEqual();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetValueStatementContext* setValueStatement();

  class  BathImportContext : public antlr4::ParserRuleContext {
  public:
    BathImportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BathImportContext* bathImport();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Import();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *BlockLeft();
    antlr4::tree::TerminalNode *BlockRight();
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *Alias();
    BathImportContext *bathImport();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStatementContext* importStatement();

  class  ExportStatementContext : public antlr4::ParserRuleContext {
  public:
    ExportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Export();
    antlr4::tree::TerminalNode *Identifier();
    DeclarationsBlockContext *declarationsBlock();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExportStatementContext* exportStatement();

  class  FunctionCallExpressionContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberIdentifierContext *memberIdentifier();
    antlr4::tree::TerminalNode *PairLeft();
    antlr4::tree::TerminalNode *PairRight();
    Call_argsContext *call_args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallExpressionContext* functionCallExpression();

  class  Call_argsContext : public antlr4::ParserRuleContext {
  public:
    Call_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberIdentifierContext *> memberIdentifier();
    MemberIdentifierContext* memberIdentifier(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_argsContext* call_args();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> If();
    antlr4::tree::TerminalNode* If(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PairLeft();
    antlr4::tree::TerminalNode* PairLeft(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PairRight();
    antlr4::tree::TerminalNode* PairRight(size_t i);
    std::vector<FunctionBlockContext *> functionBlock();
    FunctionBlockContext* functionBlock(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Else();
    antlr4::tree::TerminalNode* Else(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  SwitchBlockContext : public antlr4::ParserRuleContext {
  public:
    SwitchBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SingleArrow();
    FunctionBlockContext *functionBlock();
    std::vector<antlr4::tree::TerminalNode *> Constants();
    antlr4::tree::TerminalNode* Constants(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchBlockContext* switchBlock();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Switch();
    antlr4::tree::TerminalNode *PairLeft();
    MemberIdentifierContext *memberIdentifier();
    antlr4::tree::TerminalNode *PairRight();
    antlr4::tree::TerminalNode *BlockLeft();
    antlr4::tree::TerminalNode *BlockRight();
    std::vector<SwitchBlockContext *> switchBlock();
    SwitchBlockContext* switchBlock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchStatementContext* switchStatement();


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

