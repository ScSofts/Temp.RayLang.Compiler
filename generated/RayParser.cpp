
// Generated from Ray.g4 by ANTLR 4.9


#include "RayListener.h"
#include "RayVisitor.h"

#include "RayParser.h"


using namespace antlrcpp;
using namespace antlr4;

RayParser::RayParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

RayParser::~RayParser() {
  delete _interpreter;
}

std::string RayParser::getGrammarFileName() const {
  return "Ray.g4";
}

const std::vector<std::string>& RayParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& RayParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

RayParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::StartContext::EOF() {
  return getToken(RayParser::EOF, 0);
}

std::vector<RayParser::DeclarationContext *> RayParser::StartContext::declaration() {
  return getRuleContexts<RayParser::DeclarationContext>();
}

RayParser::DeclarationContext* RayParser::StartContext::declaration(size_t i) {
  return getRuleContext<RayParser::DeclarationContext>(i);
}

std::vector<RayParser::StatementContext *> RayParser::StartContext::statement() {
  return getRuleContexts<RayParser::StatementContext>();
}

RayParser::StatementContext* RayParser::StartContext::statement(size_t i) {
  return getRuleContext<RayParser::StatementContext>(i);
}

std::vector<RayParser::ExpressionContext *> RayParser::StartContext::expression() {
  return getRuleContexts<RayParser::ExpressionContext>();
}

RayParser::ExpressionContext* RayParser::StartContext::expression(size_t i) {
  return getRuleContext<RayParser::ExpressionContext>(i);
}


size_t RayParser::StartContext::getRuleIndex() const {
  return RayParser::RuleStart;
}

void RayParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void RayParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}


antlrcpp::Any RayParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

RayParser::StartContext* RayParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, RayParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(61);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          setState(58);
          declaration();
          break;
        }

        case 2: {
          setState(59);
          statement();
          break;
        }

        case 3: {
          setState(60);
          expression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(65);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(66);
    match(RayParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

RayParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::VariableDeclarationContext* RayParser::DeclarationContext::variableDeclaration() {
  return getRuleContext<RayParser::VariableDeclarationContext>(0);
}

RayParser::NativedVarContext* RayParser::DeclarationContext::nativedVar() {
  return getRuleContext<RayParser::NativedVarContext>(0);
}

RayParser::FunctionDeclarationContext* RayParser::DeclarationContext::functionDeclaration() {
  return getRuleContext<RayParser::FunctionDeclarationContext>(0);
}

RayParser::GetDeclarationContext* RayParser::DeclarationContext::getDeclaration() {
  return getRuleContext<RayParser::GetDeclarationContext>(0);
}

RayParser::PutDeclarationContext* RayParser::DeclarationContext::putDeclaration() {
  return getRuleContext<RayParser::PutDeclarationContext>(0);
}


size_t RayParser::DeclarationContext::getRuleIndex() const {
  return RayParser::RuleDeclaration;
}

void RayParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void RayParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any RayParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RayParser::DeclarationContext* RayParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, RayParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(68);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(69);
      nativedVar();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(70);
      functionDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(71);
      getDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(72);
      putDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

RayParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::VariableDeclarationContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

tree::TerminalNode* RayParser::VariableDeclarationContext::Colon() {
  return getToken(RayParser::Colon, 0);
}

RayParser::TypeAppendixContext* RayParser::VariableDeclarationContext::typeAppendix() {
  return getRuleContext<RayParser::TypeAppendixContext>(0);
}

tree::TerminalNode* RayParser::VariableDeclarationContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}

tree::TerminalNode* RayParser::VariableDeclarationContext::Var() {
  return getToken(RayParser::Var, 0);
}

tree::TerminalNode* RayParser::VariableDeclarationContext::Const() {
  return getToken(RayParser::Const, 0);
}

RayParser::ExportStatementContext* RayParser::VariableDeclarationContext::exportStatement() {
  return getRuleContext<RayParser::ExportStatementContext>(0);
}

RayParser::ExpressionContext* RayParser::VariableDeclarationContext::expression() {
  return getRuleContext<RayParser::ExpressionContext>(0);
}


size_t RayParser::VariableDeclarationContext::getRuleIndex() const {
  return RayParser::RuleVariableDeclaration;
}

void RayParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void RayParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


antlrcpp::Any RayParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RayParser::VariableDeclarationContext* RayParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, RayParser::RuleVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::At) {
      setState(75);
      exportStatement();
    }
    setState(78);
    _la = _input->LA(1);
    if (!(_la == RayParser::Var

    || _la == RayParser::Const)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(79);
    match(RayParser::Identifier);
    setState(80);
    match(RayParser::Colon);
    setState(81);
    typeAppendix();
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::T__0) {
      setState(82);
      match(RayParser::T__0);
      setState(83);
      expression(0);
    }
    setState(86);
    match(RayParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NativedVarContext ------------------------------------------------------------------

RayParser::NativedVarContext::NativedVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::NativedDeclarationContext* RayParser::NativedVarContext::nativedDeclaration() {
  return getRuleContext<RayParser::NativedDeclarationContext>(0);
}

tree::TerminalNode* RayParser::NativedVarContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

tree::TerminalNode* RayParser::NativedVarContext::Colon() {
  return getToken(RayParser::Colon, 0);
}

RayParser::TypeAppendixContext* RayParser::NativedVarContext::typeAppendix() {
  return getRuleContext<RayParser::TypeAppendixContext>(0);
}

tree::TerminalNode* RayParser::NativedVarContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}

tree::TerminalNode* RayParser::NativedVarContext::Var() {
  return getToken(RayParser::Var, 0);
}

tree::TerminalNode* RayParser::NativedVarContext::Const() {
  return getToken(RayParser::Const, 0);
}


size_t RayParser::NativedVarContext::getRuleIndex() const {
  return RayParser::RuleNativedVar;
}

void RayParser::NativedVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNativedVar(this);
}

void RayParser::NativedVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNativedVar(this);
}


antlrcpp::Any RayParser::NativedVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitNativedVar(this);
  else
    return visitor->visitChildren(this);
}

RayParser::NativedVarContext* RayParser::nativedVar() {
  NativedVarContext *_localctx = _tracker.createInstance<NativedVarContext>(_ctx, getState());
  enterRule(_localctx, 6, RayParser::RuleNativedVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    nativedDeclaration();
    setState(89);
    _la = _input->LA(1);
    if (!(_la == RayParser::Var

    || _la == RayParser::Const)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(90);
    match(RayParser::Identifier);
    setState(91);
    match(RayParser::Colon);
    setState(92);
    typeAppendix();
    setState(93);
    match(RayParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

RayParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::FunctionDeclarationContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

tree::TerminalNode* RayParser::FunctionDeclarationContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

tree::TerminalNode* RayParser::FunctionDeclarationContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

tree::TerminalNode* RayParser::FunctionDeclarationContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}

RayParser::FunctionSuffixContext* RayParser::FunctionDeclarationContext::functionSuffix() {
  return getRuleContext<RayParser::FunctionSuffixContext>(0);
}

RayParser::NativedDeclarationContext* RayParser::FunctionDeclarationContext::nativedDeclaration() {
  return getRuleContext<RayParser::NativedDeclarationContext>(0);
}

std::vector<RayParser::ArgContext *> RayParser::FunctionDeclarationContext::arg() {
  return getRuleContexts<RayParser::ArgContext>();
}

RayParser::ArgContext* RayParser::FunctionDeclarationContext::arg(size_t i) {
  return getRuleContext<RayParser::ArgContext>(i);
}

tree::TerminalNode* RayParser::FunctionDeclarationContext::Colon() {
  return getToken(RayParser::Colon, 0);
}

RayParser::TypeAppendixContext* RayParser::FunctionDeclarationContext::typeAppendix() {
  return getRuleContext<RayParser::TypeAppendixContext>(0);
}

std::vector<tree::TerminalNode *> RayParser::FunctionDeclarationContext::Comma() {
  return getTokens(RayParser::Comma);
}

tree::TerminalNode* RayParser::FunctionDeclarationContext::Comma(size_t i) {
  return getToken(RayParser::Comma, i);
}


size_t RayParser::FunctionDeclarationContext::getRuleIndex() const {
  return RayParser::RuleFunctionDeclaration;
}

void RayParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void RayParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any RayParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RayParser::FunctionDeclarationContext* RayParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, RayParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(95);
      functionSuffix();
      break;
    }

    case 2: {
      setState(96);
      nativedDeclaration();
      break;
    }

    default:
      break;
    }
    setState(99);
    _la = _input->LA(1);
    if (!(_la == RayParser::T__1

    || _la == RayParser::T__2)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(100);
    match(RayParser::Identifier);
    setState(101);
    match(RayParser::PairLeft);
    setState(110);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Identifier) {
      setState(102);
      arg();
      setState(107);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RayParser::Comma) {
        setState(103);
        match(RayParser::Comma);
        setState(104);
        arg();
        setState(109);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(112);
    match(RayParser::PairRight);
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Colon) {
      setState(113);
      match(RayParser::Colon);
      setState(114);
      typeAppendix();
    }
    setState(117);
    match(RayParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NativedDeclarationContext ------------------------------------------------------------------

RayParser::NativedDeclarationContext::NativedDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::NativedDeclarationContext::At() {
  return getToken(RayParser::At, 0);
}

tree::TerminalNode* RayParser::NativedDeclarationContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

std::vector<tree::TerminalNode *> RayParser::NativedDeclarationContext::StringLiteral() {
  return getTokens(RayParser::StringLiteral);
}

tree::TerminalNode* RayParser::NativedDeclarationContext::StringLiteral(size_t i) {
  return getToken(RayParser::StringLiteral, i);
}

tree::TerminalNode* RayParser::NativedDeclarationContext::Comma() {
  return getToken(RayParser::Comma, 0);
}

tree::TerminalNode* RayParser::NativedDeclarationContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}


size_t RayParser::NativedDeclarationContext::getRuleIndex() const {
  return RayParser::RuleNativedDeclaration;
}

void RayParser::NativedDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNativedDeclaration(this);
}

void RayParser::NativedDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNativedDeclaration(this);
}


antlrcpp::Any RayParser::NativedDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitNativedDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RayParser::NativedDeclarationContext* RayParser::nativedDeclaration() {
  NativedDeclarationContext *_localctx = _tracker.createInstance<NativedDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, RayParser::RuleNativedDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(RayParser::At);
    setState(120);
    match(RayParser::T__3);
    setState(121);
    match(RayParser::PairLeft);
    setState(122);
    match(RayParser::StringLiteral);
    setState(123);
    match(RayParser::Comma);
    setState(124);
    match(RayParser::StringLiteral);
    setState(125);
    match(RayParser::PairRight);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetDeclarationContext ------------------------------------------------------------------

RayParser::GetDeclarationContext::GetDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::GetDeclarationContext::At() {
  return getToken(RayParser::At, 0);
}

tree::TerminalNode* RayParser::GetDeclarationContext::Import() {
  return getToken(RayParser::Import, 0);
}

std::vector<tree::TerminalNode *> RayParser::GetDeclarationContext::Identifier() {
  return getTokens(RayParser::Identifier);
}

tree::TerminalNode* RayParser::GetDeclarationContext::Identifier(size_t i) {
  return getToken(RayParser::Identifier, i);
}

tree::TerminalNode* RayParser::GetDeclarationContext::Alias() {
  return getToken(RayParser::Alias, 0);
}

tree::TerminalNode* RayParser::GetDeclarationContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}

RayParser::GetBlockContext* RayParser::GetDeclarationContext::getBlock() {
  return getRuleContext<RayParser::GetBlockContext>(0);
}

std::vector<tree::TerminalNode *> RayParser::GetDeclarationContext::Dot() {
  return getTokens(RayParser::Dot);
}

tree::TerminalNode* RayParser::GetDeclarationContext::Dot(size_t i) {
  return getToken(RayParser::Dot, i);
}


size_t RayParser::GetDeclarationContext::getRuleIndex() const {
  return RayParser::RuleGetDeclaration;
}

void RayParser::GetDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetDeclaration(this);
}

void RayParser::GetDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetDeclaration(this);
}


antlrcpp::Any RayParser::GetDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitGetDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RayParser::GetDeclarationContext* RayParser::getDeclaration() {
  GetDeclarationContext *_localctx = _tracker.createInstance<GetDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, RayParser::RuleGetDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(RayParser::At);
    setState(128);
    match(RayParser::Import);
    setState(129);
    match(RayParser::Identifier);
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RayParser::Dot) {
      setState(130);
      match(RayParser::Dot);
      setState(131);
      match(RayParser::Identifier);
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(137);
    match(RayParser::Alias);
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RayParser::BlockLeft: {
        setState(138);
        getBlock();
        break;
      }

      case RayParser::Identifier: {
        setState(139);
        match(RayParser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(142);
    match(RayParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetLineContext ------------------------------------------------------------------

RayParser::GetLineContext::GetLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RayParser::GetLineContext::Identifier() {
  return getTokens(RayParser::Identifier);
}

tree::TerminalNode* RayParser::GetLineContext::Identifier(size_t i) {
  return getToken(RayParser::Identifier, i);
}

tree::TerminalNode* RayParser::GetLineContext::Alias() {
  return getToken(RayParser::Alias, 0);
}


size_t RayParser::GetLineContext::getRuleIndex() const {
  return RayParser::RuleGetLine;
}

void RayParser::GetLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetLine(this);
}

void RayParser::GetLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetLine(this);
}


antlrcpp::Any RayParser::GetLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitGetLine(this);
  else
    return visitor->visitChildren(this);
}

RayParser::GetLineContext* RayParser::getLine() {
  GetLineContext *_localctx = _tracker.createInstance<GetLineContext>(_ctx, getState());
  enterRule(_localctx, 14, RayParser::RuleGetLine);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(RayParser::Identifier);
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Alias) {
      setState(145);
      match(RayParser::Alias);
      setState(146);
      match(RayParser::Identifier);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetBlockContext ------------------------------------------------------------------

RayParser::GetBlockContext::GetBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::GetBlockContext::BlockLeft() {
  return getToken(RayParser::BlockLeft, 0);
}

tree::TerminalNode* RayParser::GetBlockContext::BlockRight() {
  return getToken(RayParser::BlockRight, 0);
}

std::vector<RayParser::GetLineContext *> RayParser::GetBlockContext::getLine() {
  return getRuleContexts<RayParser::GetLineContext>();
}

RayParser::GetLineContext* RayParser::GetBlockContext::getLine(size_t i) {
  return getRuleContext<RayParser::GetLineContext>(i);
}

std::vector<tree::TerminalNode *> RayParser::GetBlockContext::Comma() {
  return getTokens(RayParser::Comma);
}

tree::TerminalNode* RayParser::GetBlockContext::Comma(size_t i) {
  return getToken(RayParser::Comma, i);
}


size_t RayParser::GetBlockContext::getRuleIndex() const {
  return RayParser::RuleGetBlock;
}

void RayParser::GetBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetBlock(this);
}

void RayParser::GetBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetBlock(this);
}


antlrcpp::Any RayParser::GetBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitGetBlock(this);
  else
    return visitor->visitChildren(this);
}

RayParser::GetBlockContext* RayParser::getBlock() {
  GetBlockContext *_localctx = _tracker.createInstance<GetBlockContext>(_ctx, getState());
  enterRule(_localctx, 16, RayParser::RuleGetBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(RayParser::BlockLeft);
    setState(151);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Identifier) {
      setState(150);
      getLine();
    }
    setState(157);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RayParser::Comma) {
      setState(153);
      match(RayParser::Comma);
      setState(154);
      getLine();
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(160);
    match(RayParser::BlockRight);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PutDeclarationContext ------------------------------------------------------------------

RayParser::PutDeclarationContext::PutDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::PutDeclarationContext::At() {
  return getToken(RayParser::At, 0);
}

tree::TerminalNode* RayParser::PutDeclarationContext::Export() {
  return getToken(RayParser::Export, 0);
}

RayParser::PutBlockContext* RayParser::PutDeclarationContext::putBlock() {
  return getRuleContext<RayParser::PutBlockContext>(0);
}

tree::TerminalNode* RayParser::PutDeclarationContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}


size_t RayParser::PutDeclarationContext::getRuleIndex() const {
  return RayParser::RulePutDeclaration;
}

void RayParser::PutDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPutDeclaration(this);
}

void RayParser::PutDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPutDeclaration(this);
}


antlrcpp::Any RayParser::PutDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitPutDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RayParser::PutDeclarationContext* RayParser::putDeclaration() {
  PutDeclarationContext *_localctx = _tracker.createInstance<PutDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, RayParser::RulePutDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(RayParser::At);
    setState(163);
    match(RayParser::Export);
    setState(164);
    putBlock();
    setState(166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Semicolon) {
      setState(165);
      match(RayParser::Semicolon);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PutBlockContext ------------------------------------------------------------------

RayParser::PutBlockContext::PutBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::PutBlockContext::BlockLeft() {
  return getToken(RayParser::BlockLeft, 0);
}

tree::TerminalNode* RayParser::PutBlockContext::BlockRight() {
  return getToken(RayParser::BlockRight, 0);
}

std::vector<RayParser::VariableDeclarationContext *> RayParser::PutBlockContext::variableDeclaration() {
  return getRuleContexts<RayParser::VariableDeclarationContext>();
}

RayParser::VariableDeclarationContext* RayParser::PutBlockContext::variableDeclaration(size_t i) {
  return getRuleContext<RayParser::VariableDeclarationContext>(i);
}

std::vector<RayParser::FunctionDeclarationContext *> RayParser::PutBlockContext::functionDeclaration() {
  return getRuleContexts<RayParser::FunctionDeclarationContext>();
}

RayParser::FunctionDeclarationContext* RayParser::PutBlockContext::functionDeclaration(size_t i) {
  return getRuleContext<RayParser::FunctionDeclarationContext>(i);
}

std::vector<RayParser::StatementContext *> RayParser::PutBlockContext::statement() {
  return getRuleContexts<RayParser::StatementContext>();
}

RayParser::StatementContext* RayParser::PutBlockContext::statement(size_t i) {
  return getRuleContext<RayParser::StatementContext>(i);
}


size_t RayParser::PutBlockContext::getRuleIndex() const {
  return RayParser::RulePutBlock;
}

void RayParser::PutBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPutBlock(this);
}

void RayParser::PutBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPutBlock(this);
}


antlrcpp::Any RayParser::PutBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitPutBlock(this);
  else
    return visitor->visitChildren(this);
}

RayParser::PutBlockContext* RayParser::putBlock() {
  PutBlockContext *_localctx = _tracker.createInstance<PutBlockContext>(_ctx, getState());
  enterRule(_localctx, 20, RayParser::RulePutBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(RayParser::BlockLeft);
    setState(174);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << RayParser::T__1)
      | (1ULL << RayParser::T__2)
      | (1ULL << RayParser::T__4)
      | (1ULL << RayParser::At)
      | (1ULL << RayParser::Var)
      | (1ULL << RayParser::Const))) != 0)) {
      setState(172);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(169);
        variableDeclaration();
        break;
      }

      case 2: {
        setState(170);
        functionDeclaration();
        break;
      }

      case 3: {
        setState(171);
        statement();
        break;
      }

      default:
        break;
      }
      setState(176);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(177);
    match(RayParser::BlockRight);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

RayParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::FunctionStatementContext* RayParser::StatementContext::functionStatement() {
  return getRuleContext<RayParser::FunctionStatementContext>(0);
}

RayParser::TypeStatementContext* RayParser::StatementContext::typeStatement() {
  return getRuleContext<RayParser::TypeStatementContext>(0);
}


size_t RayParser::StatementContext::getRuleIndex() const {
  return RayParser::RuleStatement;
}

void RayParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void RayParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any RayParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

RayParser::StatementContext* RayParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, RayParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(181);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RayParser::T__1:
      case RayParser::T__2:
      case RayParser::At: {
        enterOuterAlt(_localctx, 1);
        setState(179);
        functionStatement();
        break;
      }

      case RayParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(180);
        typeStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionStatementContext ------------------------------------------------------------------

RayParser::FunctionStatementContext::FunctionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::FunctionStatementContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

tree::TerminalNode* RayParser::FunctionStatementContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

tree::TerminalNode* RayParser::FunctionStatementContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

RayParser::FunctionBlockContext* RayParser::FunctionStatementContext::functionBlock() {
  return getRuleContext<RayParser::FunctionBlockContext>(0);
}

RayParser::FunctionSuffixContext* RayParser::FunctionStatementContext::functionSuffix() {
  return getRuleContext<RayParser::FunctionSuffixContext>(0);
}

std::vector<RayParser::ArgContext *> RayParser::FunctionStatementContext::arg() {
  return getRuleContexts<RayParser::ArgContext>();
}

RayParser::ArgContext* RayParser::FunctionStatementContext::arg(size_t i) {
  return getRuleContext<RayParser::ArgContext>(i);
}

tree::TerminalNode* RayParser::FunctionStatementContext::Colon() {
  return getToken(RayParser::Colon, 0);
}

RayParser::TypeAppendixContext* RayParser::FunctionStatementContext::typeAppendix() {
  return getRuleContext<RayParser::TypeAppendixContext>(0);
}

std::vector<tree::TerminalNode *> RayParser::FunctionStatementContext::Comma() {
  return getTokens(RayParser::Comma);
}

tree::TerminalNode* RayParser::FunctionStatementContext::Comma(size_t i) {
  return getToken(RayParser::Comma, i);
}


size_t RayParser::FunctionStatementContext::getRuleIndex() const {
  return RayParser::RuleFunctionStatement;
}

void RayParser::FunctionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionStatement(this);
}

void RayParser::FunctionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionStatement(this);
}


antlrcpp::Any RayParser::FunctionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitFunctionStatement(this);
  else
    return visitor->visitChildren(this);
}

RayParser::FunctionStatementContext* RayParser::functionStatement() {
  FunctionStatementContext *_localctx = _tracker.createInstance<FunctionStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, RayParser::RuleFunctionStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::At) {
      setState(183);
      functionSuffix();
    }
    setState(186);
    _la = _input->LA(1);
    if (!(_la == RayParser::T__1

    || _la == RayParser::T__2)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(187);
    match(RayParser::Identifier);
    setState(188);
    match(RayParser::PairLeft);
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Identifier) {
      setState(189);
      arg();
      setState(194);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RayParser::Comma) {
        setState(190);
        match(RayParser::Comma);
        setState(191);
        arg();
        setState(196);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(199);
    match(RayParser::PairRight);
    setState(202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Colon) {
      setState(200);
      match(RayParser::Colon);
      setState(201);
      typeAppendix();
    }
    setState(204);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgContext ------------------------------------------------------------------

RayParser::ArgContext::ArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::ArgContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

tree::TerminalNode* RayParser::ArgContext::Colon() {
  return getToken(RayParser::Colon, 0);
}

RayParser::TypeAppendixContext* RayParser::ArgContext::typeAppendix() {
  return getRuleContext<RayParser::TypeAppendixContext>(0);
}


size_t RayParser::ArgContext::getRuleIndex() const {
  return RayParser::RuleArg;
}

void RayParser::ArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg(this);
}

void RayParser::ArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg(this);
}


antlrcpp::Any RayParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}

RayParser::ArgContext* RayParser::arg() {
  ArgContext *_localctx = _tracker.createInstance<ArgContext>(_ctx, getState());
  enterRule(_localctx, 26, RayParser::RuleArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(RayParser::Identifier);
    setState(207);
    match(RayParser::Colon);
    setState(208);
    typeAppendix();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeStatementContext ------------------------------------------------------------------

RayParser::TypeStatementContext::TypeStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::TypeStatementContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

RayParser::TypeAppendixContext* RayParser::TypeStatementContext::typeAppendix() {
  return getRuleContext<RayParser::TypeAppendixContext>(0);
}

tree::TerminalNode* RayParser::TypeStatementContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}


size_t RayParser::TypeStatementContext::getRuleIndex() const {
  return RayParser::RuleTypeStatement;
}

void RayParser::TypeStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeStatement(this);
}

void RayParser::TypeStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeStatement(this);
}


antlrcpp::Any RayParser::TypeStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitTypeStatement(this);
  else
    return visitor->visitChildren(this);
}

RayParser::TypeStatementContext* RayParser::typeStatement() {
  TypeStatementContext *_localctx = _tracker.createInstance<TypeStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, RayParser::RuleTypeStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    match(RayParser::T__4);
    setState(211);
    match(RayParser::Identifier);
    setState(212);
    match(RayParser::T__0);
    setState(213);
    typeAppendix();
    setState(214);
    match(RayParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionSuffixContext ------------------------------------------------------------------

RayParser::FunctionSuffixContext::FunctionSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::ExportStatementContext* RayParser::FunctionSuffixContext::exportStatement() {
  return getRuleContext<RayParser::ExportStatementContext>(0);
}

std::vector<tree::TerminalNode *> RayParser::FunctionSuffixContext::At() {
  return getTokens(RayParser::At);
}

tree::TerminalNode* RayParser::FunctionSuffixContext::At(size_t i) {
  return getToken(RayParser::At, i);
}

std::vector<tree::TerminalNode *> RayParser::FunctionSuffixContext::Identifier() {
  return getTokens(RayParser::Identifier);
}

tree::TerminalNode* RayParser::FunctionSuffixContext::Identifier(size_t i) {
  return getToken(RayParser::Identifier, i);
}


size_t RayParser::FunctionSuffixContext::getRuleIndex() const {
  return RayParser::RuleFunctionSuffix;
}

void RayParser::FunctionSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSuffix(this);
}

void RayParser::FunctionSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSuffix(this);
}


antlrcpp::Any RayParser::FunctionSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitFunctionSuffix(this);
  else
    return visitor->visitChildren(this);
}

RayParser::FunctionSuffixContext* RayParser::functionSuffix() {
  FunctionSuffixContext *_localctx = _tracker.createInstance<FunctionSuffixContext>(_ctx, getState());
  enterRule(_localctx, 30, RayParser::RuleFunctionSuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(223);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(216);
      exportStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(219); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(217);
        match(RayParser::At);
        setState(218);
        match(RayParser::Identifier);
        setState(221); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == RayParser::At);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExportStatementContext ------------------------------------------------------------------

RayParser::ExportStatementContext::ExportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::ExportStatementContext::At() {
  return getToken(RayParser::At, 0);
}

tree::TerminalNode* RayParser::ExportStatementContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

tree::TerminalNode* RayParser::ExportStatementContext::StringLiteral() {
  return getToken(RayParser::StringLiteral, 0);
}

tree::TerminalNode* RayParser::ExportStatementContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}


size_t RayParser::ExportStatementContext::getRuleIndex() const {
  return RayParser::RuleExportStatement;
}

void RayParser::ExportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExportStatement(this);
}

void RayParser::ExportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExportStatement(this);
}


antlrcpp::Any RayParser::ExportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitExportStatement(this);
  else
    return visitor->visitChildren(this);
}

RayParser::ExportStatementContext* RayParser::exportStatement() {
  ExportStatementContext *_localctx = _tracker.createInstance<ExportStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, RayParser::RuleExportStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(RayParser::At);
    setState(226);
    match(RayParser::T__5);
    setState(227);
    match(RayParser::PairLeft);
    setState(228);
    match(RayParser::StringLiteral);
    setState(229);
    match(RayParser::PairRight);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfExpressionContext ------------------------------------------------------------------

RayParser::IfExpressionContext::IfExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RayParser::IfExpressionContext::If() {
  return getTokens(RayParser::If);
}

tree::TerminalNode* RayParser::IfExpressionContext::If(size_t i) {
  return getToken(RayParser::If, i);
}

std::vector<tree::TerminalNode *> RayParser::IfExpressionContext::PairLeft() {
  return getTokens(RayParser::PairLeft);
}

tree::TerminalNode* RayParser::IfExpressionContext::PairLeft(size_t i) {
  return getToken(RayParser::PairLeft, i);
}

std::vector<RayParser::ExpressionContext *> RayParser::IfExpressionContext::expression() {
  return getRuleContexts<RayParser::ExpressionContext>();
}

RayParser::ExpressionContext* RayParser::IfExpressionContext::expression(size_t i) {
  return getRuleContext<RayParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RayParser::IfExpressionContext::PairRight() {
  return getTokens(RayParser::PairRight);
}

tree::TerminalNode* RayParser::IfExpressionContext::PairRight(size_t i) {
  return getToken(RayParser::PairRight, i);
}

std::vector<tree::TerminalNode *> RayParser::IfExpressionContext::BlockLeft() {
  return getTokens(RayParser::BlockLeft);
}

tree::TerminalNode* RayParser::IfExpressionContext::BlockLeft(size_t i) {
  return getToken(RayParser::BlockLeft, i);
}

std::vector<RayParser::FunctionLineContext *> RayParser::IfExpressionContext::functionLine() {
  return getRuleContexts<RayParser::FunctionLineContext>();
}

RayParser::FunctionLineContext* RayParser::IfExpressionContext::functionLine(size_t i) {
  return getRuleContext<RayParser::FunctionLineContext>(i);
}

std::vector<tree::TerminalNode *> RayParser::IfExpressionContext::BlockRight() {
  return getTokens(RayParser::BlockRight);
}

tree::TerminalNode* RayParser::IfExpressionContext::BlockRight(size_t i) {
  return getToken(RayParser::BlockRight, i);
}

std::vector<tree::TerminalNode *> RayParser::IfExpressionContext::Else() {
  return getTokens(RayParser::Else);
}

tree::TerminalNode* RayParser::IfExpressionContext::Else(size_t i) {
  return getToken(RayParser::Else, i);
}


size_t RayParser::IfExpressionContext::getRuleIndex() const {
  return RayParser::RuleIfExpression;
}

void RayParser::IfExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfExpression(this);
}

void RayParser::IfExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfExpression(this);
}


antlrcpp::Any RayParser::IfExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitIfExpression(this);
  else
    return visitor->visitChildren(this);
}

RayParser::IfExpressionContext* RayParser::ifExpression() {
  IfExpressionContext *_localctx = _tracker.createInstance<IfExpressionContext>(_ctx, getState());
  enterRule(_localctx, 34, RayParser::RuleIfExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(RayParser::If);
    setState(232);
    match(RayParser::PairLeft);
    setState(233);
    expression(0);
    setState(234);
    match(RayParser::PairRight);
    setState(235);
    match(RayParser::BlockLeft);
    setState(236);
    functionLine();
    setState(237);
    match(RayParser::BlockRight);
    setState(250);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(239);
        match(RayParser::Else);
        setState(240);
        match(RayParser::If);
        setState(241);
        match(RayParser::PairLeft);
        setState(242);
        expression(0);
        setState(243);
        match(RayParser::PairRight);
        setState(244);
        match(RayParser::BlockLeft);
        setState(245);
        functionLine();
        setState(246);
        match(RayParser::BlockRight); 
      }
      setState(252);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
    setState(258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Else) {
      setState(253);
      match(RayParser::Else);
      setState(254);
      match(RayParser::BlockLeft);
      setState(255);
      functionLine();
      setState(256);
      match(RayParser::BlockRight);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileExpressionContext ------------------------------------------------------------------

RayParser::WhileExpressionContext::WhileExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::WhileExpressionContext::While() {
  return getToken(RayParser::While, 0);
}

tree::TerminalNode* RayParser::WhileExpressionContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

tree::TerminalNode* RayParser::WhileExpressionContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

RayParser::FunctionBlockContext* RayParser::WhileExpressionContext::functionBlock() {
  return getRuleContext<RayParser::FunctionBlockContext>(0);
}


size_t RayParser::WhileExpressionContext::getRuleIndex() const {
  return RayParser::RuleWhileExpression;
}

void RayParser::WhileExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileExpression(this);
}

void RayParser::WhileExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileExpression(this);
}


antlrcpp::Any RayParser::WhileExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitWhileExpression(this);
  else
    return visitor->visitChildren(this);
}

RayParser::WhileExpressionContext* RayParser::whileExpression() {
  WhileExpressionContext *_localctx = _tracker.createInstance<WhileExpressionContext>(_ctx, getState());
  enterRule(_localctx, 36, RayParser::RuleWhileExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    match(RayParser::While);
    setState(261);
    match(RayParser::PairLeft);
    setState(262);
    match(RayParser::PairRight);
    setState(263);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchExpressionContext ------------------------------------------------------------------

RayParser::MatchExpressionContext::MatchExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::MatchExpressionContext::Match() {
  return getToken(RayParser::Match, 0);
}

tree::TerminalNode* RayParser::MatchExpressionContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

RayParser::ExpressionContext* RayParser::MatchExpressionContext::expression() {
  return getRuleContext<RayParser::ExpressionContext>(0);
}

tree::TerminalNode* RayParser::MatchExpressionContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

tree::TerminalNode* RayParser::MatchExpressionContext::BlockLeft() {
  return getToken(RayParser::BlockLeft, 0);
}

tree::TerminalNode* RayParser::MatchExpressionContext::BlockRight() {
  return getToken(RayParser::BlockRight, 0);
}

std::vector<RayParser::FunctionBlockContext *> RayParser::MatchExpressionContext::functionBlock() {
  return getRuleContexts<RayParser::FunctionBlockContext>();
}

RayParser::FunctionBlockContext* RayParser::MatchExpressionContext::functionBlock(size_t i) {
  return getRuleContext<RayParser::FunctionBlockContext>(i);
}

tree::TerminalNode* RayParser::MatchExpressionContext::Else() {
  return getToken(RayParser::Else, 0);
}

std::vector<tree::TerminalNode *> RayParser::MatchExpressionContext::StringLiteral() {
  return getTokens(RayParser::StringLiteral);
}

tree::TerminalNode* RayParser::MatchExpressionContext::StringLiteral(size_t i) {
  return getToken(RayParser::StringLiteral, i);
}

std::vector<tree::TerminalNode *> RayParser::MatchExpressionContext::Integer() {
  return getTokens(RayParser::Integer);
}

tree::TerminalNode* RayParser::MatchExpressionContext::Integer(size_t i) {
  return getToken(RayParser::Integer, i);
}

std::vector<tree::TerminalNode *> RayParser::MatchExpressionContext::Float() {
  return getTokens(RayParser::Float);
}

tree::TerminalNode* RayParser::MatchExpressionContext::Float(size_t i) {
  return getToken(RayParser::Float, i);
}

std::vector<tree::TerminalNode *> RayParser::MatchExpressionContext::Comma() {
  return getTokens(RayParser::Comma);
}

tree::TerminalNode* RayParser::MatchExpressionContext::Comma(size_t i) {
  return getToken(RayParser::Comma, i);
}


size_t RayParser::MatchExpressionContext::getRuleIndex() const {
  return RayParser::RuleMatchExpression;
}

void RayParser::MatchExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchExpression(this);
}

void RayParser::MatchExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchExpression(this);
}


antlrcpp::Any RayParser::MatchExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitMatchExpression(this);
  else
    return visitor->visitChildren(this);
}

RayParser::MatchExpressionContext* RayParser::matchExpression() {
  MatchExpressionContext *_localctx = _tracker.createInstance<MatchExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, RayParser::RuleMatchExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(RayParser::Match);
    setState(266);
    match(RayParser::PairLeft);
    setState(267);
    expression(0);
    setState(268);
    match(RayParser::PairRight);
    setState(269);
    match(RayParser::BlockLeft);
    setState(282);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RayParser::T__6) {
      setState(270);
      match(RayParser::T__6);

      setState(271);
      _la = _input->LA(1);
      if (!(((((_la - 78) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 78)) & ((1ULL << (RayParser::Integer - 78))
        | (1ULL << (RayParser::Float - 78))
        | (1ULL << (RayParser::StringLiteral - 78)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RayParser::Comma) {
        setState(272);
        match(RayParser::Comma);
        setState(273);
        _la = _input->LA(1);
        if (!(((((_la - 78) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 78)) & ((1ULL << (RayParser::Integer - 78))
          | (1ULL << (RayParser::Float - 78))
          | (1ULL << (RayParser::StringLiteral - 78)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(278);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(279);
      functionBlock();
      setState(284);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(287);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Else) {
      setState(285);
      match(RayParser::Else);
      setState(286);
      functionBlock();
    }
    setState(289);
    match(RayParser::BlockRight);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForExpressionContext ------------------------------------------------------------------

RayParser::ForExpressionContext::ForExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::ForExpressionContext::For() {
  return getToken(RayParser::For, 0);
}

tree::TerminalNode* RayParser::ForExpressionContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

std::vector<tree::TerminalNode *> RayParser::ForExpressionContext::Semicolon() {
  return getTokens(RayParser::Semicolon);
}

tree::TerminalNode* RayParser::ForExpressionContext::Semicolon(size_t i) {
  return getToken(RayParser::Semicolon, i);
}

tree::TerminalNode* RayParser::ForExpressionContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

RayParser::FunctionBlockContext* RayParser::ForExpressionContext::functionBlock() {
  return getRuleContext<RayParser::FunctionBlockContext>(0);
}

RayParser::VariableDeclarationContext* RayParser::ForExpressionContext::variableDeclaration() {
  return getRuleContext<RayParser::VariableDeclarationContext>(0);
}

std::vector<RayParser::ExpressionContext *> RayParser::ForExpressionContext::expression() {
  return getRuleContexts<RayParser::ExpressionContext>();
}

RayParser::ExpressionContext* RayParser::ForExpressionContext::expression(size_t i) {
  return getRuleContext<RayParser::ExpressionContext>(i);
}


size_t RayParser::ForExpressionContext::getRuleIndex() const {
  return RayParser::RuleForExpression;
}

void RayParser::ForExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForExpression(this);
}

void RayParser::ForExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForExpression(this);
}


antlrcpp::Any RayParser::ForExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitForExpression(this);
  else
    return visitor->visitChildren(this);
}

RayParser::ForExpressionContext* RayParser::forExpression() {
  ForExpressionContext *_localctx = _tracker.createInstance<ForExpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, RayParser::RuleForExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(291);
    match(RayParser::For);
    setState(292);
    match(RayParser::PairLeft);
    setState(294);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << RayParser::At)
      | (1ULL << RayParser::Var)
      | (1ULL << RayParser::Const))) != 0)) {
      setState(293);
      variableDeclaration();
    }
    setState(296);
    match(RayParser::Semicolon);
    setState(298);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 25) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 25)) & ((1ULL << (RayParser::Not - 25))
      | (1ULL << (RayParser::Reverse - 25))
      | (1ULL << (RayParser::PairLeft - 25))
      | (1ULL << (RayParser::ListLeft - 25))
      | (1ULL << (RayParser::True - 25))
      | (1ULL << (RayParser::False - 25))
      | (1ULL << (RayParser::Null - 25))
      | (1ULL << (RayParser::Identifier - 25))
      | (1ULL << (RayParser::SelfPlus - 25))
      | (1ULL << (RayParser::SelfMinus - 25))
      | (1ULL << (RayParser::Integer - 25))
      | (1ULL << (RayParser::Float - 25))
      | (1ULL << (RayParser::StringLiteral - 25)))) != 0)) {
      setState(297);
      expression(0);
    }
    setState(300);
    match(RayParser::Semicolon);
    setState(302);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 25) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 25)) & ((1ULL << (RayParser::Not - 25))
      | (1ULL << (RayParser::Reverse - 25))
      | (1ULL << (RayParser::PairLeft - 25))
      | (1ULL << (RayParser::ListLeft - 25))
      | (1ULL << (RayParser::True - 25))
      | (1ULL << (RayParser::False - 25))
      | (1ULL << (RayParser::Null - 25))
      | (1ULL << (RayParser::Identifier - 25))
      | (1ULL << (RayParser::SelfPlus - 25))
      | (1ULL << (RayParser::SelfMinus - 25))
      | (1ULL << (RayParser::Integer - 25))
      | (1ULL << (RayParser::Float - 25))
      | (1ULL << (RayParser::StringLiteral - 25)))) != 0)) {
      setState(301);
      expression(0);
    }
    setState(304);
    match(RayParser::PairRight);
    setState(305);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakExpressionContext ------------------------------------------------------------------

RayParser::BreakExpressionContext::BreakExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RayParser::BreakExpressionContext::getRuleIndex() const {
  return RayParser::RuleBreakExpression;
}

void RayParser::BreakExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakExpression(this);
}

void RayParser::BreakExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakExpression(this);
}


antlrcpp::Any RayParser::BreakExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitBreakExpression(this);
  else
    return visitor->visitChildren(this);
}

RayParser::BreakExpressionContext* RayParser::breakExpression() {
  BreakExpressionContext *_localctx = _tracker.createInstance<BreakExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, RayParser::RuleBreakExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(RayParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueExpressionContext ------------------------------------------------------------------

RayParser::ContinueExpressionContext::ContinueExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RayParser::ContinueExpressionContext::getRuleIndex() const {
  return RayParser::RuleContinueExpression;
}

void RayParser::ContinueExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueExpression(this);
}

void RayParser::ContinueExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueExpression(this);
}


antlrcpp::Any RayParser::ContinueExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitContinueExpression(this);
  else
    return visitor->visitChildren(this);
}

RayParser::ContinueExpressionContext* RayParser::continueExpression() {
  ContinueExpressionContext *_localctx = _tracker.createInstance<ContinueExpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, RayParser::RuleContinueExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(RayParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnExpressionContext ------------------------------------------------------------------

RayParser::ReturnExpressionContext::ReturnExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::ReturnExpressionContext::Return() {
  return getToken(RayParser::Return, 0);
}

tree::TerminalNode* RayParser::ReturnExpressionContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}

RayParser::ExpressionContext* RayParser::ReturnExpressionContext::expression() {
  return getRuleContext<RayParser::ExpressionContext>(0);
}


size_t RayParser::ReturnExpressionContext::getRuleIndex() const {
  return RayParser::RuleReturnExpression;
}

void RayParser::ReturnExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnExpression(this);
}

void RayParser::ReturnExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnExpression(this);
}


antlrcpp::Any RayParser::ReturnExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitReturnExpression(this);
  else
    return visitor->visitChildren(this);
}

RayParser::ReturnExpressionContext* RayParser::returnExpression() {
  ReturnExpressionContext *_localctx = _tracker.createInstance<ReturnExpressionContext>(_ctx, getState());
  enterRule(_localctx, 46, RayParser::RuleReturnExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(RayParser::Return);
    setState(313);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 25) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 25)) & ((1ULL << (RayParser::Not - 25))
      | (1ULL << (RayParser::Reverse - 25))
      | (1ULL << (RayParser::PairLeft - 25))
      | (1ULL << (RayParser::ListLeft - 25))
      | (1ULL << (RayParser::True - 25))
      | (1ULL << (RayParser::False - 25))
      | (1ULL << (RayParser::Null - 25))
      | (1ULL << (RayParser::Identifier - 25))
      | (1ULL << (RayParser::SelfPlus - 25))
      | (1ULL << (RayParser::SelfMinus - 25))
      | (1ULL << (RayParser::Integer - 25))
      | (1ULL << (RayParser::Float - 25))
      | (1ULL << (RayParser::StringLiteral - 25)))) != 0)) {
      setState(312);
      expression(0);
    }
    setState(315);
    match(RayParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionLineContext ------------------------------------------------------------------

RayParser::FunctionLineContext::FunctionLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::DeclarationContext* RayParser::FunctionLineContext::declaration() {
  return getRuleContext<RayParser::DeclarationContext>(0);
}

RayParser::ExpressionContext* RayParser::FunctionLineContext::expression() {
  return getRuleContext<RayParser::ExpressionContext>(0);
}

tree::TerminalNode* RayParser::FunctionLineContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}

RayParser::IfExpressionContext* RayParser::FunctionLineContext::ifExpression() {
  return getRuleContext<RayParser::IfExpressionContext>(0);
}

RayParser::WhileExpressionContext* RayParser::FunctionLineContext::whileExpression() {
  return getRuleContext<RayParser::WhileExpressionContext>(0);
}

RayParser::MatchExpressionContext* RayParser::FunctionLineContext::matchExpression() {
  return getRuleContext<RayParser::MatchExpressionContext>(0);
}

RayParser::ForExpressionContext* RayParser::FunctionLineContext::forExpression() {
  return getRuleContext<RayParser::ForExpressionContext>(0);
}

RayParser::TypeStatementContext* RayParser::FunctionLineContext::typeStatement() {
  return getRuleContext<RayParser::TypeStatementContext>(0);
}

RayParser::BreakExpressionContext* RayParser::FunctionLineContext::breakExpression() {
  return getRuleContext<RayParser::BreakExpressionContext>(0);
}

RayParser::ContinueExpressionContext* RayParser::FunctionLineContext::continueExpression() {
  return getRuleContext<RayParser::ContinueExpressionContext>(0);
}

RayParser::ReturnExpressionContext* RayParser::FunctionLineContext::returnExpression() {
  return getRuleContext<RayParser::ReturnExpressionContext>(0);
}


size_t RayParser::FunctionLineContext::getRuleIndex() const {
  return RayParser::RuleFunctionLine;
}

void RayParser::FunctionLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionLine(this);
}

void RayParser::FunctionLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionLine(this);
}


antlrcpp::Any RayParser::FunctionLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitFunctionLine(this);
  else
    return visitor->visitChildren(this);
}

RayParser::FunctionLineContext* RayParser::functionLine() {
  FunctionLineContext *_localctx = _tracker.createInstance<FunctionLineContext>(_ctx, getState());
  enterRule(_localctx, 48, RayParser::RuleFunctionLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RayParser::T__1:
      case RayParser::T__2:
      case RayParser::At:
      case RayParser::Var:
      case RayParser::Const: {
        setState(317);
        declaration();
        break;
      }

      case RayParser::Not:
      case RayParser::Reverse:
      case RayParser::PairLeft:
      case RayParser::ListLeft:
      case RayParser::True:
      case RayParser::False:
      case RayParser::Null:
      case RayParser::Identifier:
      case RayParser::SelfPlus:
      case RayParser::SelfMinus:
      case RayParser::Integer:
      case RayParser::Float:
      case RayParser::StringLiteral: {
        setState(318);
        expression(0);
        setState(319);
        match(RayParser::Semicolon);
        break;
      }

      case RayParser::If: {
        setState(321);
        ifExpression();
        break;
      }

      case RayParser::While: {
        setState(322);
        whileExpression();
        break;
      }

      case RayParser::Match: {
        setState(323);
        matchExpression();
        break;
      }

      case RayParser::For: {
        setState(324);
        forExpression();
        break;
      }

      case RayParser::T__4: {
        setState(325);
        typeStatement();
        break;
      }

      case RayParser::T__7: {
        setState(326);
        breakExpression();
        break;
      }

      case RayParser::T__8: {
        setState(327);
        continueExpression();
        break;
      }

      case RayParser::Return: {
        setState(328);
        returnExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBlockContext ------------------------------------------------------------------

RayParser::FunctionBlockContext::FunctionBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::FunctionBlockContext::BlockLeft() {
  return getToken(RayParser::BlockLeft, 0);
}

tree::TerminalNode* RayParser::FunctionBlockContext::BlockRight() {
  return getToken(RayParser::BlockRight, 0);
}

std::vector<RayParser::FunctionLineContext *> RayParser::FunctionBlockContext::functionLine() {
  return getRuleContexts<RayParser::FunctionLineContext>();
}

RayParser::FunctionLineContext* RayParser::FunctionBlockContext::functionLine(size_t i) {
  return getRuleContext<RayParser::FunctionLineContext>(i);
}


size_t RayParser::FunctionBlockContext::getRuleIndex() const {
  return RayParser::RuleFunctionBlock;
}

void RayParser::FunctionBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionBlock(this);
}

void RayParser::FunctionBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionBlock(this);
}


antlrcpp::Any RayParser::FunctionBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitFunctionBlock(this);
  else
    return visitor->visitChildren(this);
}

RayParser::FunctionBlockContext* RayParser::functionBlock() {
  FunctionBlockContext *_localctx = _tracker.createInstance<FunctionBlockContext>(_ctx, getState());
  enterRule(_localctx, 50, RayParser::RuleFunctionBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(RayParser::BlockLeft);
    setState(335);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(332);
        functionLine(); 
      }
      setState(337);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
    setState(338);
    match(RayParser::BlockRight);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

RayParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::ExpressionContext::StringLiteral() {
  return getToken(RayParser::StringLiteral, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Integer() {
  return getToken(RayParser::Integer, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Float() {
  return getToken(RayParser::Float, 0);
}

std::vector<tree::TerminalNode *> RayParser::ExpressionContext::Identifier() {
  return getTokens(RayParser::Identifier);
}

tree::TerminalNode* RayParser::ExpressionContext::Identifier(size_t i) {
  return getToken(RayParser::Identifier, i);
}

tree::TerminalNode* RayParser::ExpressionContext::True() {
  return getToken(RayParser::True, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::False() {
  return getToken(RayParser::False, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Null() {
  return getToken(RayParser::Null, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

std::vector<RayParser::ExpressionContext *> RayParser::ExpressionContext::expression() {
  return getRuleContexts<RayParser::ExpressionContext>();
}

RayParser::ExpressionContext* RayParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<RayParser::ExpressionContext>(i);
}

tree::TerminalNode* RayParser::ExpressionContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

RayParser::FunctionCallContext* RayParser::ExpressionContext::functionCall() {
  return getRuleContext<RayParser::FunctionCallContext>(0);
}

tree::TerminalNode* RayParser::ExpressionContext::SelfPlus() {
  return getToken(RayParser::SelfPlus, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::SelfMinus() {
  return getToken(RayParser::SelfMinus, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Not() {
  return getToken(RayParser::Not, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Reverse() {
  return getToken(RayParser::Reverse, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::ListLeft() {
  return getToken(RayParser::ListLeft, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::ListRight() {
  return getToken(RayParser::ListRight, 0);
}

std::vector<tree::TerminalNode *> RayParser::ExpressionContext::Comma() {
  return getTokens(RayParser::Comma);
}

tree::TerminalNode* RayParser::ExpressionContext::Comma(size_t i) {
  return getToken(RayParser::Comma, i);
}

tree::TerminalNode* RayParser::ExpressionContext::MoveLeft() {
  return getToken(RayParser::MoveLeft, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::MoveRight() {
  return getToken(RayParser::MoveRight, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::More() {
  return getToken(RayParser::More, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Less() {
  return getToken(RayParser::Less, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::MoreEqual() {
  return getToken(RayParser::MoreEqual, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::LessEqual() {
  return getToken(RayParser::LessEqual, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Equal() {
  return getToken(RayParser::Equal, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::NotEqual() {
  return getToken(RayParser::NotEqual, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::And() {
  return getToken(RayParser::And, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Or() {
  return getToken(RayParser::Or, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Xor() {
  return getToken(RayParser::Xor, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Colon() {
  return getToken(RayParser::Colon, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Pow() {
  return getToken(RayParser::Pow, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Multiply() {
  return getToken(RayParser::Multiply, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Divide() {
  return getToken(RayParser::Divide, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Plus() {
  return getToken(RayParser::Plus, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Minus() {
  return getToken(RayParser::Minus, 0);
}

std::vector<tree::TerminalNode *> RayParser::ExpressionContext::Dot() {
  return getTokens(RayParser::Dot);
}

tree::TerminalNode* RayParser::ExpressionContext::Dot(size_t i) {
  return getToken(RayParser::Dot, i);
}


size_t RayParser::ExpressionContext::getRuleIndex() const {
  return RayParser::RuleExpression;
}

void RayParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void RayParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any RayParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


RayParser::ExpressionContext* RayParser::expression() {
   return expression(0);
}

RayParser::ExpressionContext* RayParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  RayParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  RayParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, RayParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(370);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(341);
      match(RayParser::StringLiteral);
      break;
    }

    case 2: {
      setState(342);
      match(RayParser::Integer);
      break;
    }

    case 3: {
      setState(343);
      match(RayParser::Float);
      break;
    }

    case 4: {
      setState(344);
      match(RayParser::Identifier);
      break;
    }

    case 5: {
      setState(345);
      _la = _input->LA(1);
      if (!(((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (RayParser::True - 66))
        | (1ULL << (RayParser::False - 66))
        | (1ULL << (RayParser::Null - 66)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 6: {
      setState(346);
      match(RayParser::PairLeft);
      setState(347);
      expression(0);
      setState(348);
      match(RayParser::PairRight);
      break;
    }

    case 7: {
      setState(350);
      functionCall();
      break;
    }

    case 8: {
      setState(351);
      _la = _input->LA(1);
      if (!(_la == RayParser::SelfPlus

      || _la == RayParser::SelfMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(352);
      expression(13);
      break;
    }

    case 9: {
      setState(353);
      _la = _input->LA(1);
      if (!(_la == RayParser::Not

      || _la == RayParser::Reverse)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(354);
      expression(3);
      break;
    }

    case 10: {
      setState(355);
      match(RayParser::Identifier);
      setState(356);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << RayParser::T__0)
        | (1ULL << RayParser::T__12)
        | (1ULL << RayParser::T__13)
        | (1ULL << RayParser::T__14)
        | (1ULL << RayParser::T__15)
        | (1ULL << RayParser::T__16)
        | (1ULL << RayParser::T__17)
        | (1ULL << RayParser::T__18)
        | (1ULL << RayParser::T__19)
        | (1ULL << RayParser::T__20))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(357);
      expression(2);
      break;
    }

    case 11: {
      setState(358);
      match(RayParser::ListLeft);
      setState(367);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 25) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 25)) & ((1ULL << (RayParser::Not - 25))
        | (1ULL << (RayParser::Reverse - 25))
        | (1ULL << (RayParser::PairLeft - 25))
        | (1ULL << (RayParser::ListLeft - 25))
        | (1ULL << (RayParser::True - 25))
        | (1ULL << (RayParser::False - 25))
        | (1ULL << (RayParser::Null - 25))
        | (1ULL << (RayParser::Identifier - 25))
        | (1ULL << (RayParser::SelfPlus - 25))
        | (1ULL << (RayParser::SelfMinus - 25))
        | (1ULL << (RayParser::Integer - 25))
        | (1ULL << (RayParser::Float - 25))
        | (1ULL << (RayParser::StringLiteral - 25)))) != 0)) {
        setState(359);
        expression(0);
        setState(364);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == RayParser::Comma) {
          setState(360);
          match(RayParser::Comma);
          setState(361);
          expression(0);
          setState(366);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(369);
      match(RayParser::ListRight);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(421);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(419);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(372);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(373);
          _la = _input->LA(1);
          if (!(_la == RayParser::MoveRight

          || _la == RayParser::MoveLeft)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(374);
          expression(13);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(375);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(376);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << RayParser::Less)
            | (1ULL << RayParser::More)
            | (1ULL << RayParser::Equal)
            | (1ULL << RayParser::NotEqual)
            | (1ULL << RayParser::LessEqual)
            | (1ULL << RayParser::MoreEqual))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(377);
          expression(12);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(378);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(379);
          _la = _input->LA(1);
          if (!(_la == RayParser::And

          || _la == RayParser::Or)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(380);
          expression(11);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(381);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(382);
          match(RayParser::Xor);
          setState(383);
          expression(9);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(384);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(385);
          _la = _input->LA(1);
          if (!(_la == RayParser::T__9

          || _la == RayParser::T__10)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(386);
          expression(9);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(387);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(388);
          match(RayParser::T__11);
          setState(389);
          expression(0);
          setState(390);
          match(RayParser::Colon);
          setState(391);
          expression(8);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(393);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(394);
          match(RayParser::Pow);
          setState(395);
          expression(6);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(396);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(397);
          _la = _input->LA(1);
          if (!(_la == RayParser::Multiply

          || _la == RayParser::Divide)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(398);
          expression(6);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(399);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(400);
          _la = _input->LA(1);
          if (!(_la == RayParser::Plus

          || _la == RayParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(401);
          expression(5);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(402);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(403);
          match(RayParser::ListLeft);
          setState(404);
          expression(0);
          setState(405);
          match(RayParser::ListRight);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(407);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(408);
          match(RayParser::Dot);
          setState(409);
          functionCall();
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(410);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(413); 
          _errHandler->sync(this);
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    setState(411);
                    match(RayParser::Dot);
                    setState(412);
                    match(RayParser::Identifier);
                    break;
                  }

            default:
              throw NoViableAltException(this);
            }
            setState(415); 
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
          } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(417);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(418);
          _la = _input->LA(1);
          if (!(_la == RayParser::SelfPlus

          || _la == RayParser::SelfMinus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(423);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

RayParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::FunctionCallContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

tree::TerminalNode* RayParser::FunctionCallContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

tree::TerminalNode* RayParser::FunctionCallContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

std::vector<RayParser::ExpressionContext *> RayParser::FunctionCallContext::expression() {
  return getRuleContexts<RayParser::ExpressionContext>();
}

RayParser::ExpressionContext* RayParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<RayParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RayParser::FunctionCallContext::Comma() {
  return getTokens(RayParser::Comma);
}

tree::TerminalNode* RayParser::FunctionCallContext::Comma(size_t i) {
  return getToken(RayParser::Comma, i);
}


size_t RayParser::FunctionCallContext::getRuleIndex() const {
  return RayParser::RuleFunctionCall;
}

void RayParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void RayParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


antlrcpp::Any RayParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

RayParser::FunctionCallContext* RayParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 54, RayParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(424);
    match(RayParser::Identifier);
    setState(425);
    match(RayParser::PairLeft);
    setState(434);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 25) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 25)) & ((1ULL << (RayParser::Not - 25))
      | (1ULL << (RayParser::Reverse - 25))
      | (1ULL << (RayParser::PairLeft - 25))
      | (1ULL << (RayParser::ListLeft - 25))
      | (1ULL << (RayParser::True - 25))
      | (1ULL << (RayParser::False - 25))
      | (1ULL << (RayParser::Null - 25))
      | (1ULL << (RayParser::Identifier - 25))
      | (1ULL << (RayParser::SelfPlus - 25))
      | (1ULL << (RayParser::SelfMinus - 25))
      | (1ULL << (RayParser::Integer - 25))
      | (1ULL << (RayParser::Float - 25))
      | (1ULL << (RayParser::StringLiteral - 25)))) != 0)) {
      setState(426);
      expression(0);
      setState(431);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
      while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1 + 1) {
          setState(427);
          match(RayParser::Comma);
          setState(428);
          expression(0); 
        }
        setState(433);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
      }
    }
    setState(436);
    match(RayParser::PairRight);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeAppendixContext ------------------------------------------------------------------

RayParser::TypeAppendixContext::TypeAppendixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::TypeAppendixContext::Types() {
  return getToken(RayParser::Types, 0);
}

tree::TerminalNode* RayParser::TypeAppendixContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

std::vector<tree::TerminalNode *> RayParser::TypeAppendixContext::ListLeft() {
  return getTokens(RayParser::ListLeft);
}

tree::TerminalNode* RayParser::TypeAppendixContext::ListLeft(size_t i) {
  return getToken(RayParser::ListLeft, i);
}

std::vector<tree::TerminalNode *> RayParser::TypeAppendixContext::ListRight() {
  return getTokens(RayParser::ListRight);
}

tree::TerminalNode* RayParser::TypeAppendixContext::ListRight(size_t i) {
  return getToken(RayParser::ListRight, i);
}


size_t RayParser::TypeAppendixContext::getRuleIndex() const {
  return RayParser::RuleTypeAppendix;
}

void RayParser::TypeAppendixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAppendix(this);
}

void RayParser::TypeAppendixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAppendix(this);
}


antlrcpp::Any RayParser::TypeAppendixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitTypeAppendix(this);
  else
    return visitor->visitChildren(this);
}

RayParser::TypeAppendixContext* RayParser::typeAppendix() {
  TypeAppendixContext *_localctx = _tracker.createInstance<TypeAppendixContext>(_ctx, getState());
  enterRule(_localctx, 56, RayParser::RuleTypeAppendix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(454);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(438);
      match(RayParser::Types);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(439);
      match(RayParser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(440);
      match(RayParser::Types);
      setState(443); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(441);
        match(RayParser::ListLeft);
        setState(442);
        match(RayParser::ListRight);
        setState(445); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == RayParser::ListLeft);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(447);
      match(RayParser::Identifier);
      setState(450); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(448);
        match(RayParser::ListLeft);
        setState(449);
        match(RayParser::ListRight);
        setState(452); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == RayParser::ListLeft);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool RayParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 26: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool RayParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 12);
    case 1: return precpred(_ctx, 11);
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 9);
    case 4: return precpred(_ctx, 8);
    case 5: return precpred(_ctx, 7);
    case 6: return precpred(_ctx, 6);
    case 7: return precpred(_ctx, 5);
    case 8: return precpred(_ctx, 4);
    case 9: return precpred(_ctx, 17);
    case 10: return precpred(_ctx, 16);
    case 11: return precpred(_ctx, 15);
    case 12: return precpred(_ctx, 14);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> RayParser::_decisionToDFA;
atn::PredictionContextCache RayParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN RayParser::_atn;
std::vector<uint16_t> RayParser::_serializedATN;

std::vector<std::string> RayParser::_ruleNames = {
  "start", "declaration", "variableDeclaration", "nativedVar", "functionDeclaration", 
  "nativedDeclaration", "getDeclaration", "getLine", "getBlock", "putDeclaration", 
  "putBlock", "statement", "functionStatement", "arg", "typeStatement", 
  "functionSuffix", "exportStatement", "ifExpression", "whileExpression", 
  "matchExpression", "forExpression", "breakExpression", "continueExpression", 
  "returnExpression", "functionLine", "functionBlock", "expression", "functionCall", 
  "typeAppendix"
};

std::vector<std::string> RayParser::_literalNames = {
  "", "'='", "'fn'", "'function'", "'native'", "'type'", "'export'", "'case'", 
  "'break'", "'continue'", "'&&'", "'||'", "'\u003F'", "'+='", "'-='", "'*='", 
  "'/='", "'^='", "'|='", "'&='", "'<<='", "'=>>'", "", "'&'", "'^'", "'!'", 
  "'|'", "'~'", "", "'.'", "':'", "", "", "'{'", "'}'", "'('", "')'", "'['", 
  "']'", "'@'", "';'", "','", "'<'", "'>'", "'>>'", "'<<'", "'->'", "'=>'", 
  "'=='", "'!='", "'<='", "'>='", "'''", "'\"'", "'get'", "'put'", "'as'", 
  "", "'var'", "'const'", "'if'", "'else'", "'match'", "'for'", "'While'", 
  "'return'", "'true'", "'false'", "'null'", "", "'+'", "'-'", "'*'", "'/'", 
  "'++'", "'--'", "'**'"
};

std::vector<std::string> RayParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "Blanks", "And", "Xor", "Not", "Or", "Reverse", "SetEqual", 
  "Dot", "Colon", "MultiLineComment", "SingleLineComment", "BlockLeft", 
  "BlockRight", "PairLeft", "PairRight", "ListLeft", "ListRight", "At", 
  "Semicolon", "Comma", "Less", "More", "MoveRight", "MoveLeft", "SingleArrow", 
  "Arrow", "Equal", "NotEqual", "LessEqual", "MoreEqual", "SingleQuotation", 
  "MultiQuotation", "Import", "Export", "Alias", "Function", "Var", "Const", 
  "If", "Else", "Match", "For", "While", "Return", "True", "False", "Null", 
  "Identifier", "Plus", "Minus", "Multiply", "Divide", "SelfPlus", "SelfMinus", 
  "Pow", "Types", "Integer", "Float", "StringLiteral"
};

dfa::Vocabulary RayParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> RayParser::_tokenNames;

RayParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x52, 0x1cb, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x40, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x43, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x4c, 0xa, 0x3, 0x3, 0x4, 0x5, 0x4, 0x4f, 0xa, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x57, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x64, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x7, 0x6, 0x6c, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x6f, 0xb, 0x6, 0x5, 
    0x6, 0x71, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x76, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0x87, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x8a, 0xb, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x8f, 0xa, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x96, 0xa, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0x9a, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0x9e, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xa1, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xa9, 0xa, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xaf, 0xa, 0xc, 0xc, 0xc, 
    0xe, 0xc, 0xb2, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0xb8, 0xa, 0xd, 0x3, 0xe, 0x5, 0xe, 0xbb, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xc3, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0xc6, 0xb, 0xe, 0x5, 0xe, 0xc8, 0xa, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xcd, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x6, 
    0x11, 0xde, 0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0xdf, 0x5, 0x11, 0xe2, 
    0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xfb, 0xa, 
    0x13, 0xc, 0x13, 0xe, 0x13, 0xfe, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x105, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x7, 0x15, 0x115, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x118, 0xb, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x11b, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x11e, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x122, 0xa, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x129, 0xa, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x12d, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x5, 0x16, 0x131, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x13c, 
    0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x14c, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x7, 0x1b, 0x150, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x153, 0xb, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x16d, 
    0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x170, 0xb, 0x1c, 0x5, 0x1c, 0x172, 
    0xa, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x175, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x6, 0x1c, 0x1a0, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x1a1, 0x3, 0x1c, 
    0x3, 0x1c, 0x7, 0x1c, 0x1a6, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x1a9, 
    0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 
    0x1d, 0x1b0, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x1b3, 0xb, 0x1d, 0x5, 
    0x1d, 0x1b5, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x6, 0x1e, 0x1be, 0xa, 0x1e, 0xd, 0x1e, 
    0xe, 0x1e, 0x1bf, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x6, 0x1e, 0x1c5, 
    0xa, 0x1e, 0xd, 0x1e, 0xe, 0x1e, 0x1c6, 0x5, 0x1e, 0x1c9, 0xa, 0x1e, 
    0x3, 0x1e, 0x5, 0x41, 0x151, 0x1b1, 0x3, 0x36, 0x1f, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x2, 0xf, 0x3, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x4, 0x5, 0x3, 
    0x2, 0x50, 0x52, 0x3, 0x2, 0x44, 0x46, 0x3, 0x2, 0x4c, 0x4d, 0x4, 0x2, 
    0x1b, 0x1b, 0x1d, 0x1d, 0x4, 0x2, 0x3, 0x3, 0xf, 0x17, 0x3, 0x2, 0x2e, 
    0x2f, 0x4, 0x2, 0x2c, 0x2d, 0x32, 0x35, 0x4, 0x2, 0x19, 0x19, 0x1c, 
    0x1c, 0x3, 0x2, 0xc, 0xd, 0x3, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x48, 0x49, 
    0x2, 0x1ff, 0x2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5a, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0xc, 0x79, 0x3, 0x2, 0x2, 0x2, 0xe, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x92, 0x3, 0x2, 0x2, 0x2, 0x12, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x16, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xba, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x22, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xe9, 0x3, 0x2, 0x2, 0x2, 0x26, 0x106, 0x3, 0x2, 0x2, 0x2, 0x28, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x125, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x137, 0x3, 0x2, 0x2, 0x2, 0x30, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x34, 0x14d, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x174, 0x3, 0x2, 0x2, 0x2, 0x38, 0x1aa, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x40, 0x5, 0x4, 0x3, 0x2, 0x3d, 
    0x40, 0x5, 0x18, 0xd, 0x2, 0x3e, 0x40, 0x5, 0x36, 0x1c, 0x2, 0x3f, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x2, 0x2, 0x3, 
    0x45, 0x3, 0x3, 0x2, 0x2, 0x2, 0x46, 0x4c, 0x5, 0x6, 0x4, 0x2, 0x47, 
    0x4c, 0x5, 0x8, 0x5, 0x2, 0x48, 0x4c, 0x5, 0xa, 0x6, 0x2, 0x49, 0x4c, 
    0x5, 0xe, 0x8, 0x2, 0x4a, 0x4c, 0x5, 0x14, 0xb, 0x2, 0x4b, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0x22, 0x12, 0x2, 
    0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x9, 0x2, 0x2, 0x2, 0x51, 0x52, 
    0x7, 0x47, 0x2, 0x2, 0x52, 0x53, 0x7, 0x20, 0x2, 0x2, 0x53, 0x56, 0x5, 
    0x3a, 0x1e, 0x2, 0x54, 0x55, 0x7, 0x3, 0x2, 0x2, 0x55, 0x57, 0x5, 0x36, 
    0x1c, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x2a, 0x2, 0x2, 
    0x59, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x5, 0xc, 0x7, 0x2, 0x5b, 
    0x5c, 0x9, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x47, 0x2, 0x2, 0x5d, 0x5e, 
    0x7, 0x20, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x3a, 0x1e, 0x2, 0x5f, 0x60, 0x7, 
    0x2a, 0x2, 0x2, 0x60, 0x9, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 0x5, 0x20, 
    0x11, 0x2, 0x62, 0x64, 0x5, 0xc, 0x7, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x9, 0x3, 0x2, 0x2, 0x66, 
    0x67, 0x7, 0x47, 0x2, 0x2, 0x67, 0x70, 0x7, 0x25, 0x2, 0x2, 0x68, 0x6d, 
    0x5, 0x1c, 0xf, 0x2, 0x69, 0x6a, 0x7, 0x2b, 0x2, 0x2, 0x6a, 0x6c, 0x5, 
    0x1c, 0xf, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x68, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x7, 0x26, 0x2, 0x2, 0x73, 0x74, 
    0x7, 0x20, 0x2, 0x2, 0x74, 0x76, 0x5, 0x3a, 0x1e, 0x2, 0x75, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x78, 0x7, 0x2a, 0x2, 0x2, 0x78, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x79, 0x7a, 0x7, 0x29, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x6, 0x2, 0x2, 
    0x7b, 0x7c, 0x7, 0x25, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x52, 0x2, 0x2, 0x7d, 
    0x7e, 0x7, 0x2b, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x52, 0x2, 0x2, 0x7f, 0x80, 
    0x7, 0x26, 0x2, 0x2, 0x80, 0xd, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 
    0x29, 0x2, 0x2, 0x82, 0x83, 0x7, 0x38, 0x2, 0x2, 0x83, 0x88, 0x7, 0x47, 
    0x2, 0x2, 0x84, 0x85, 0x7, 0x1f, 0x2, 0x2, 0x85, 0x87, 0x7, 0x47, 0x2, 
    0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x8b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8e, 
    0x7, 0x3a, 0x2, 0x2, 0x8c, 0x8f, 0x5, 0x12, 0xa, 0x2, 0x8d, 0x8f, 0x7, 
    0x47, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0x2a, 0x2, 
    0x2, 0x91, 0xf, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x7, 0x47, 0x2, 0x2, 
    0x93, 0x94, 0x7, 0x3a, 0x2, 0x2, 0x94, 0x96, 0x7, 0x47, 0x2, 0x2, 0x95, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x7, 0x23, 0x2, 0x2, 0x98, 0x9a, 0x5, 
    0x10, 0x9, 0x2, 0x99, 0x98, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x2b, 0x2, 
    0x2, 0x9c, 0x9e, 0x5, 0x10, 0x9, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x24, 0x2, 0x2, 0xa3, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x29, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x39, 
    0x2, 0x2, 0xa6, 0xa8, 0x5, 0x16, 0xc, 0x2, 0xa7, 0xa9, 0x7, 0x2a, 0x2, 
    0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0x15, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xb0, 0x7, 0x23, 0x2, 0x2, 0xab, 
    0xaf, 0x5, 0x6, 0x4, 0x2, 0xac, 0xaf, 0x5, 0xa, 0x6, 0x2, 0xad, 0xaf, 
    0x5, 0x18, 0xd, 0x2, 0xae, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0xb4, 0x7, 0x24, 0x2, 0x2, 0xb4, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb5, 
    0xb8, 0x5, 0x1a, 0xe, 0x2, 0xb6, 0xb8, 0x5, 0x1e, 0x10, 0x2, 0xb7, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xbb, 0x5, 0x20, 0x11, 0x2, 0xba, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0xbd, 0x9, 0x3, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x47, 0x2, 0x2, 
    0xbe, 0xc7, 0x7, 0x25, 0x2, 0x2, 0xbf, 0xc4, 0x5, 0x1c, 0xf, 0x2, 0xc0, 
    0xc1, 0x7, 0x2b, 0x2, 0x2, 0xc1, 0xc3, 0x5, 0x1c, 0xf, 0x2, 0xc2, 0xc0, 
    0x3, 0x2, 0x2, 0x2, 0xc3, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 
    0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xcc, 0x7, 0x26, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x20, 0x2, 0x2, 0xcb, 
    0xcd, 0x5, 0x3a, 0x1e, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x5, 
    0x34, 0x1b, 0x2, 0xcf, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x47, 
    0x2, 0x2, 0xd1, 0xd2, 0x7, 0x20, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x3a, 0x1e, 
    0x2, 0xd3, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x7, 0x2, 0x2, 
    0xd5, 0xd6, 0x7, 0x47, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x3, 0x2, 0x2, 0xd7, 
    0xd8, 0x5, 0x3a, 0x1e, 0x2, 0xd8, 0xd9, 0x7, 0x2a, 0x2, 0x2, 0xd9, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xda, 0xe2, 0x5, 0x22, 0x12, 0x2, 0xdb, 0xdc, 0x7, 
    0x29, 0x2, 0x2, 0xdc, 0xde, 0x7, 0x47, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0x3, 0x2, 0x2, 0x2, 
    0xe1, 0xda, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x29, 0x2, 0x2, 0xe4, 0xe5, 
    0x7, 0x8, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x25, 0x2, 0x2, 0xe6, 0xe7, 0x7, 
    0x52, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x26, 0x2, 0x2, 0xe8, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0xe9, 0xea, 0x7, 0x3e, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x25, 0x2, 
    0x2, 0xeb, 0xec, 0x5, 0x36, 0x1c, 0x2, 0xec, 0xed, 0x7, 0x26, 0x2, 0x2, 
    0xed, 0xee, 0x7, 0x23, 0x2, 0x2, 0xee, 0xef, 0x5, 0x32, 0x1a, 0x2, 0xef, 
    0xf0, 0x7, 0x24, 0x2, 0x2, 0xf0, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 
    0x7, 0x3f, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x3e, 0x2, 0x2, 0xf3, 0xf4, 0x7, 
    0x25, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x36, 0x1c, 0x2, 0xf5, 0xf6, 0x7, 0x26, 
    0x2, 0x2, 0xf6, 0xf7, 0x7, 0x23, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0x32, 0x1a, 
    0x2, 0xf8, 0xf9, 0x7, 0x24, 0x2, 0x2, 0xf9, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x7, 
    0x3f, 0x2, 0x2, 0x100, 0x101, 0x7, 0x23, 0x2, 0x2, 0x101, 0x102, 0x5, 
    0x32, 0x1a, 0x2, 0x102, 0x103, 0x7, 0x24, 0x2, 0x2, 0x103, 0x105, 0x3, 
    0x2, 0x2, 0x2, 0x104, 0xff, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 
    0x2, 0x2, 0x105, 0x25, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x7, 0x42, 
    0x2, 0x2, 0x107, 0x108, 0x7, 0x25, 0x2, 0x2, 0x108, 0x109, 0x7, 0x26, 
    0x2, 0x2, 0x109, 0x10a, 0x5, 0x34, 0x1b, 0x2, 0x10a, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x10c, 0x7, 0x40, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0x25, 
    0x2, 0x2, 0x10d, 0x10e, 0x5, 0x36, 0x1c, 0x2, 0x10e, 0x10f, 0x7, 0x26, 
    0x2, 0x2, 0x10f, 0x11c, 0x7, 0x23, 0x2, 0x2, 0x110, 0x111, 0x7, 0x9, 
    0x2, 0x2, 0x111, 0x116, 0x9, 0x4, 0x2, 0x2, 0x112, 0x113, 0x7, 0x2b, 
    0x2, 0x2, 0x113, 0x115, 0x9, 0x4, 0x2, 0x2, 0x114, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11b, 0x5, 0x34, 
    0x1b, 0x2, 0x11a, 0x110, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11e, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x11d, 0x121, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x11f, 0x120, 0x7, 0x3f, 0x2, 0x2, 0x120, 0x122, 0x5, 0x34, 
    0x1b, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x7, 0x24, 
    0x2, 0x2, 0x124, 0x29, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x41, 
    0x2, 0x2, 0x126, 0x128, 0x7, 0x25, 0x2, 0x2, 0x127, 0x129, 0x5, 0x6, 
    0x4, 0x2, 0x128, 0x127, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12c, 0x7, 0x2a, 
    0x2, 0x2, 0x12b, 0x12d, 0x5, 0x36, 0x1c, 0x2, 0x12c, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x130, 0x7, 0x2a, 0x2, 0x2, 0x12f, 0x131, 0x5, 0x36, 
    0x1c, 0x2, 0x130, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x7, 0x26, 
    0x2, 0x2, 0x133, 0x134, 0x5, 0x34, 0x1b, 0x2, 0x134, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x135, 0x136, 0x7, 0xa, 0x2, 0x2, 0x136, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x137, 0x138, 0x7, 0xb, 0x2, 0x2, 0x138, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x139, 0x13b, 0x7, 0x43, 0x2, 0x2, 0x13a, 0x13c, 0x5, 0x36, 0x1c, 0x2, 
    0x13b, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 
    0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x7, 0x2a, 0x2, 0x2, 
    0x13e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x14c, 0x5, 0x4, 0x3, 0x2, 0x140, 
    0x141, 0x5, 0x36, 0x1c, 0x2, 0x141, 0x142, 0x7, 0x2a, 0x2, 0x2, 0x142, 
    0x14c, 0x3, 0x2, 0x2, 0x2, 0x143, 0x14c, 0x5, 0x24, 0x13, 0x2, 0x144, 
    0x14c, 0x5, 0x26, 0x14, 0x2, 0x145, 0x14c, 0x5, 0x28, 0x15, 0x2, 0x146, 
    0x14c, 0x5, 0x2a, 0x16, 0x2, 0x147, 0x14c, 0x5, 0x1e, 0x10, 0x2, 0x148, 
    0x14c, 0x5, 0x2c, 0x17, 0x2, 0x149, 0x14c, 0x5, 0x2e, 0x18, 0x2, 0x14a, 
    0x14c, 0x5, 0x30, 0x19, 0x2, 0x14b, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x14b, 
    0x140, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x143, 0x3, 0x2, 0x2, 0x2, 0x14b, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x145, 0x3, 0x2, 0x2, 0x2, 0x14b, 
    0x146, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14b, 
    0x148, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14b, 
    0x14a, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x33, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x151, 
    0x7, 0x23, 0x2, 0x2, 0x14e, 0x150, 0x5, 0x32, 0x1a, 0x2, 0x14f, 0x14e, 
    0x3, 0x2, 0x2, 0x2, 0x150, 0x153, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x152, 0x154, 
    0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 
    0x7, 0x24, 0x2, 0x2, 0x155, 0x35, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 
    0x8, 0x1c, 0x1, 0x2, 0x157, 0x175, 0x7, 0x52, 0x2, 0x2, 0x158, 0x175, 
    0x7, 0x50, 0x2, 0x2, 0x159, 0x175, 0x7, 0x51, 0x2, 0x2, 0x15a, 0x175, 
    0x7, 0x47, 0x2, 0x2, 0x15b, 0x175, 0x9, 0x5, 0x2, 0x2, 0x15c, 0x15d, 
    0x7, 0x25, 0x2, 0x2, 0x15d, 0x15e, 0x5, 0x36, 0x1c, 0x2, 0x15e, 0x15f, 
    0x7, 0x26, 0x2, 0x2, 0x15f, 0x175, 0x3, 0x2, 0x2, 0x2, 0x160, 0x175, 
    0x5, 0x38, 0x1d, 0x2, 0x161, 0x162, 0x9, 0x6, 0x2, 0x2, 0x162, 0x175, 
    0x5, 0x36, 0x1c, 0xf, 0x163, 0x164, 0x9, 0x7, 0x2, 0x2, 0x164, 0x175, 
    0x5, 0x36, 0x1c, 0x5, 0x165, 0x166, 0x7, 0x47, 0x2, 0x2, 0x166, 0x167, 
    0x9, 0x8, 0x2, 0x2, 0x167, 0x175, 0x5, 0x36, 0x1c, 0x4, 0x168, 0x171, 
    0x7, 0x27, 0x2, 0x2, 0x169, 0x16e, 0x5, 0x36, 0x1c, 0x2, 0x16a, 0x16b, 
    0x7, 0x2b, 0x2, 0x2, 0x16b, 0x16d, 0x5, 0x36, 0x1c, 0x2, 0x16c, 0x16a, 
    0x3, 0x2, 0x2, 0x2, 0x16d, 0x170, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16c, 
    0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x172, 
    0x3, 0x2, 0x2, 0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x171, 0x169, 
    0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 
    0x3, 0x2, 0x2, 0x2, 0x173, 0x175, 0x7, 0x28, 0x2, 0x2, 0x174, 0x156, 
    0x3, 0x2, 0x2, 0x2, 0x174, 0x158, 0x3, 0x2, 0x2, 0x2, 0x174, 0x159, 
    0x3, 0x2, 0x2, 0x2, 0x174, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x174, 0x15b, 
    0x3, 0x2, 0x2, 0x2, 0x174, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x174, 0x160, 
    0x3, 0x2, 0x2, 0x2, 0x174, 0x161, 0x3, 0x2, 0x2, 0x2, 0x174, 0x163, 
    0x3, 0x2, 0x2, 0x2, 0x174, 0x165, 0x3, 0x2, 0x2, 0x2, 0x174, 0x168, 
    0x3, 0x2, 0x2, 0x2, 0x175, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 
    0xc, 0xe, 0x2, 0x2, 0x177, 0x178, 0x9, 0x9, 0x2, 0x2, 0x178, 0x1a6, 
    0x5, 0x36, 0x1c, 0xf, 0x179, 0x17a, 0xc, 0xd, 0x2, 0x2, 0x17a, 0x17b, 
    0x9, 0xa, 0x2, 0x2, 0x17b, 0x1a6, 0x5, 0x36, 0x1c, 0xe, 0x17c, 0x17d, 
    0xc, 0xc, 0x2, 0x2, 0x17d, 0x17e, 0x9, 0xb, 0x2, 0x2, 0x17e, 0x1a6, 
    0x5, 0x36, 0x1c, 0xd, 0x17f, 0x180, 0xc, 0xb, 0x2, 0x2, 0x180, 0x181, 
    0x7, 0x1a, 0x2, 0x2, 0x181, 0x1a6, 0x5, 0x36, 0x1c, 0xb, 0x182, 0x183, 
    0xc, 0xa, 0x2, 0x2, 0x183, 0x184, 0x9, 0xc, 0x2, 0x2, 0x184, 0x1a6, 
    0x5, 0x36, 0x1c, 0xb, 0x185, 0x186, 0xc, 0x9, 0x2, 0x2, 0x186, 0x187, 
    0x7, 0xe, 0x2, 0x2, 0x187, 0x188, 0x5, 0x36, 0x1c, 0x2, 0x188, 0x189, 
    0x7, 0x20, 0x2, 0x2, 0x189, 0x18a, 0x5, 0x36, 0x1c, 0xa, 0x18a, 0x1a6, 
    0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0xc, 0x8, 0x2, 0x2, 0x18c, 0x18d, 
    0x7, 0x4e, 0x2, 0x2, 0x18d, 0x1a6, 0x5, 0x36, 0x1c, 0x8, 0x18e, 0x18f, 
    0xc, 0x7, 0x2, 0x2, 0x18f, 0x190, 0x9, 0xd, 0x2, 0x2, 0x190, 0x1a6, 
    0x5, 0x36, 0x1c, 0x8, 0x191, 0x192, 0xc, 0x6, 0x2, 0x2, 0x192, 0x193, 
    0x9, 0xe, 0x2, 0x2, 0x193, 0x1a6, 0x5, 0x36, 0x1c, 0x7, 0x194, 0x195, 
    0xc, 0x13, 0x2, 0x2, 0x195, 0x196, 0x7, 0x27, 0x2, 0x2, 0x196, 0x197, 
    0x5, 0x36, 0x1c, 0x2, 0x197, 0x198, 0x7, 0x28, 0x2, 0x2, 0x198, 0x1a6, 
    0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0xc, 0x12, 0x2, 0x2, 0x19a, 0x19b, 
    0x7, 0x1f, 0x2, 0x2, 0x19b, 0x1a6, 0x5, 0x38, 0x1d, 0x2, 0x19c, 0x19f, 
    0xc, 0x11, 0x2, 0x2, 0x19d, 0x19e, 0x7, 0x1f, 0x2, 0x2, 0x19e, 0x1a0, 
    0x7, 0x47, 0x2, 0x2, 0x19f, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 
    0x3, 0x2, 0x2, 0x2, 0x1a1, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 
    0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 
    0xc, 0x10, 0x2, 0x2, 0x1a4, 0x1a6, 0x9, 0x6, 0x2, 0x2, 0x1a5, 0x176, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x179, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x17c, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x182, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x185, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x18b, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x191, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x194, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x199, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a3, 
    0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 
    0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x1a9, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x7, 
    0x47, 0x2, 0x2, 0x1ab, 0x1b4, 0x7, 0x25, 0x2, 0x2, 0x1ac, 0x1b1, 0x5, 
    0x36, 0x1c, 0x2, 0x1ad, 0x1ae, 0x7, 0x2b, 0x2, 0x2, 0x1ae, 0x1b0, 0x5, 
    0x36, 0x1c, 0x2, 0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b3, 0x3, 
    0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1af, 0x3, 
    0x2, 0x2, 0x2, 0x1b2, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b1, 0x3, 
    0x2, 0x2, 0x2, 0x1b4, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x3, 
    0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x7, 
    0x26, 0x2, 0x2, 0x1b7, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1c9, 0x7, 
    0x4f, 0x2, 0x2, 0x1b9, 0x1c9, 0x7, 0x47, 0x2, 0x2, 0x1ba, 0x1bd, 0x7, 
    0x4f, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x27, 0x2, 0x2, 0x1bc, 0x1be, 0x7, 
    0x28, 0x2, 0x2, 0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 
    0x2, 0x2, 0x2, 0x1bf, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x3, 
    0x2, 0x2, 0x2, 0x1c0, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c4, 0x7, 
    0x47, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x27, 0x2, 0x2, 0x1c3, 0x1c5, 0x7, 
    0x28, 0x2, 0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 
    0x2, 0x2, 0x2, 0x1c6, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x3, 
    0x2, 0x2, 0x2, 0x1c7, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1b8, 0x3, 
    0x2, 0x2, 0x2, 0x1c8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1ba, 0x3, 
    0x2, 0x2, 0x2, 0x1c8, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x3f, 0x41, 0x4b, 0x4e, 0x56, 0x63, 0x6d, 0x70, 0x75, 
    0x88, 0x8e, 0x95, 0x99, 0x9f, 0xa8, 0xae, 0xb0, 0xb7, 0xba, 0xc4, 0xc7, 
    0xcc, 0xdf, 0xe1, 0xfc, 0x104, 0x116, 0x11c, 0x121, 0x128, 0x12c, 0x130, 
    0x13b, 0x14b, 0x151, 0x16e, 0x171, 0x174, 0x1a1, 0x1a5, 0x1a7, 0x1b1, 
    0x1b4, 0x1bf, 0x1c6, 0x1c8, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

RayParser::Initializer RayParser::_init;
