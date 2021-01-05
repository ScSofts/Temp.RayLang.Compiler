
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


//----------------- MemberIdentifierContext ------------------------------------------------------------------

RayParser::MemberIdentifierContext::MemberIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RayParser::MemberIdentifierContext::Identifier() {
  return getTokens(RayParser::Identifier);
}

tree::TerminalNode* RayParser::MemberIdentifierContext::Identifier(size_t i) {
  return getToken(RayParser::Identifier, i);
}

std::vector<tree::TerminalNode *> RayParser::MemberIdentifierContext::Dot() {
  return getTokens(RayParser::Dot);
}

tree::TerminalNode* RayParser::MemberIdentifierContext::Dot(size_t i) {
  return getToken(RayParser::Dot, i);
}

std::vector<tree::TerminalNode *> RayParser::MemberIdentifierContext::ListLeft() {
  return getTokens(RayParser::ListLeft);
}

tree::TerminalNode* RayParser::MemberIdentifierContext::ListLeft(size_t i) {
  return getToken(RayParser::ListLeft, i);
}

std::vector<tree::TerminalNode *> RayParser::MemberIdentifierContext::ListRight() {
  return getTokens(RayParser::ListRight);
}

tree::TerminalNode* RayParser::MemberIdentifierContext::ListRight(size_t i) {
  return getToken(RayParser::ListRight, i);
}

std::vector<RayParser::MemberIdentifierContext *> RayParser::MemberIdentifierContext::memberIdentifier() {
  return getRuleContexts<RayParser::MemberIdentifierContext>();
}

RayParser::MemberIdentifierContext* RayParser::MemberIdentifierContext::memberIdentifier(size_t i) {
  return getRuleContext<RayParser::MemberIdentifierContext>(i);
}

std::vector<tree::TerminalNode *> RayParser::MemberIdentifierContext::Constants() {
  return getTokens(RayParser::Constants);
}

tree::TerminalNode* RayParser::MemberIdentifierContext::Constants(size_t i) {
  return getToken(RayParser::Constants, i);
}


size_t RayParser::MemberIdentifierContext::getRuleIndex() const {
  return RayParser::RuleMemberIdentifier;
}

void RayParser::MemberIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberIdentifier(this);
}

void RayParser::MemberIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberIdentifier(this);
}


antlrcpp::Any RayParser::MemberIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitMemberIdentifier(this);
  else
    return visitor->visitChildren(this);
}

RayParser::MemberIdentifierContext* RayParser::memberIdentifier() {
  MemberIdentifierContext *_localctx = _tracker.createInstance<MemberIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 0, RayParser::RuleMemberIdentifier);

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
    setState(52);
    match(RayParser::Identifier);
    setState(57);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(53);
        match(RayParser::Dot);
        setState(54);
        match(RayParser::Identifier); 
      }
      setState(59);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(68);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(60);
        match(RayParser::ListLeft);
        setState(63);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case RayParser::Identifier: {
            setState(61);
            memberIdentifier();
            break;
          }

          case RayParser::Constants: {
            setState(62);
            match(RayParser::Constants);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(65);
        match(RayParser::ListRight); 
      }
      setState(70);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartContext ------------------------------------------------------------------

RayParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RayParser::DeclarationContext *> RayParser::StartContext::declaration() {
  return getRuleContexts<RayParser::DeclarationContext>();
}

RayParser::DeclarationContext* RayParser::StartContext::declaration(size_t i) {
  return getRuleContext<RayParser::DeclarationContext>(i);
}

std::vector<RayParser::ImplementContext *> RayParser::StartContext::implement() {
  return getRuleContexts<RayParser::ImplementContext>();
}

RayParser::ImplementContext* RayParser::StartContext::implement(size_t i) {
  return getRuleContext<RayParser::ImplementContext>(i);
}

std::vector<RayParser::ImportStatementContext *> RayParser::StartContext::importStatement() {
  return getRuleContexts<RayParser::ImportStatementContext>();
}

RayParser::ImportStatementContext* RayParser::StartContext::importStatement(size_t i) {
  return getRuleContext<RayParser::ImportStatementContext>(i);
}

std::vector<RayParser::ExportStatementContext *> RayParser::StartContext::exportStatement() {
  return getRuleContexts<RayParser::ExportStatementContext>();
}

RayParser::ExportStatementContext* RayParser::StartContext::exportStatement(size_t i) {
  return getRuleContext<RayParser::ExportStatementContext>(i);
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
  enterRule(_localctx, 2, RayParser::RuleStart);

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
    setState(77);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(75);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(71);
          declaration();
          break;
        }

        case 2: {
          setState(72);
          implement();
          break;
        }

        case 3: {
          setState(73);
          importStatement();
          break;
        }

        case 4: {
          setState(74);
          exportStatement();
          break;
        }

        default:
          break;
        } 
      }
      setState(79);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
   
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

RayParser::FunctionDeclarationContext* RayParser::DeclarationContext::functionDeclaration() {
  return getRuleContext<RayParser::FunctionDeclarationContext>(0);
}

RayParser::VariableDeclarationContext* RayParser::DeclarationContext::variableDeclaration() {
  return getRuleContext<RayParser::VariableDeclarationContext>(0);
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
  enterRule(_localctx, 4, RayParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RayParser::Function: {
        enterOuterAlt(_localctx, 1);
        setState(80);
        functionDeclaration();
        break;
      }

      case RayParser::Var: {
        enterOuterAlt(_localctx, 2);
        setState(81);
        variableDeclaration();
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

//----------------- ImplementContext ------------------------------------------------------------------

RayParser::ImplementContext::ImplementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::FunctionImplementContext* RayParser::ImplementContext::functionImplement() {
  return getRuleContext<RayParser::FunctionImplementContext>(0);
}


size_t RayParser::ImplementContext::getRuleIndex() const {
  return RayParser::RuleImplement;
}

void RayParser::ImplementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImplement(this);
}

void RayParser::ImplementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImplement(this);
}


antlrcpp::Any RayParser::ImplementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitImplement(this);
  else
    return visitor->visitChildren(this);
}

RayParser::ImplementContext* RayParser::implement() {
  ImplementContext *_localctx = _tracker.createInstance<ImplementContext>(_ctx, getState());
  enterRule(_localctx, 6, RayParser::RuleImplement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    functionImplement();
   
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

RayParser::SetValueStatementContext* RayParser::StatementContext::setValueStatement() {
  return getRuleContext<RayParser::SetValueStatementContext>(0);
}

tree::TerminalNode* RayParser::StatementContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}

RayParser::IfStatementContext* RayParser::StatementContext::ifStatement() {
  return getRuleContext<RayParser::IfStatementContext>(0);
}

RayParser::SwitchStatementContext* RayParser::StatementContext::switchStatement() {
  return getRuleContext<RayParser::SwitchStatementContext>(0);
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
  enterRule(_localctx, 8, RayParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RayParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(86);
        setValueStatement();
        setState(87);
        match(RayParser::Semicolon);
        break;
      }

      case RayParser::If: {
        enterOuterAlt(_localctx, 2);
        setState(89);
        ifStatement();
        break;
      }

      case RayParser::Switch: {
        enterOuterAlt(_localctx, 3);
        setState(90);
        switchStatement();
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

//----------------- ExpressionContext ------------------------------------------------------------------

RayParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::FunctionCallExpressionContext* RayParser::ExpressionContext::functionCallExpression() {
  return getRuleContext<RayParser::FunctionCallExpressionContext>(0);
}

tree::TerminalNode* RayParser::ExpressionContext::Not() {
  return getToken(RayParser::Not, 0);
}

std::vector<RayParser::ExpressionContext *> RayParser::ExpressionContext::expression() {
  return getRuleContexts<RayParser::ExpressionContext>();
}

RayParser::ExpressionContext* RayParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<RayParser::ExpressionContext>(i);
}

tree::TerminalNode* RayParser::ExpressionContext::Constants() {
  return getToken(RayParser::Constants, 0);
}

RayParser::MemberIdentifierContext* RayParser::ExpressionContext::memberIdentifier() {
  return getRuleContext<RayParser::MemberIdentifierContext>(0);
}

tree::TerminalNode* RayParser::ExpressionContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Pow() {
  return getToken(RayParser::Pow, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Or() {
  return getToken(RayParser::Or, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::More() {
  return getToken(RayParser::More, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Less() {
  return getToken(RayParser::Less, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::Equal() {
  return getToken(RayParser::Equal, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::NotEqual() {
  return getToken(RayParser::NotEqual, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::MoreEqual() {
  return getToken(RayParser::MoreEqual, 0);
}

tree::TerminalNode* RayParser::ExpressionContext::LessEqual() {
  return getToken(RayParser::LessEqual, 0);
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
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, RayParser::RuleExpression, precedence);

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
    setState(103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(94);
      functionCallExpression();
      break;
    }

    case 2: {
      setState(95);
      match(RayParser::Not);
      setState(96);
      expression(4);
      break;
    }

    case 3: {
      setState(97);
      match(RayParser::Constants);
      break;
    }

    case 4: {
      setState(98);
      memberIdentifier();
      break;
    }

    case 5: {
      setState(99);
      match(RayParser::PairLeft);
      setState(100);
      expression(0);
      setState(101);
      match(RayParser::PairRight);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(119);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(117);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(105);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(106);
          _la = _input->LA(1);
          if (!(_la == RayParser::T__0

          || _la == RayParser::T__1)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(107);
          expression(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(108);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(109);
          _la = _input->LA(1);
          if (!(_la == RayParser::T__2

          || _la == RayParser::T__3)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(110);
          expression(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(111);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(112);
          _la = _input->LA(1);
          if (!(_la == RayParser::Pow

          || _la == RayParser::Or)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(113);
          expression(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(114);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(115);
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
          setState(116);
          expression(6);
          break;
        }

        default:
          break;
        } 
      }
      setState(121);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
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

tree::TerminalNode* RayParser::ArgContext::Types() {
  return getToken(RayParser::Types, 0);
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
  enterRule(_localctx, 12, RayParser::RuleArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(RayParser::Identifier);
    setState(123);
    match(RayParser::Colon);
    setState(124);
    match(RayParser::Types);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

RayParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RayParser::ArgContext *> RayParser::ArgsContext::arg() {
  return getRuleContexts<RayParser::ArgContext>();
}

RayParser::ArgContext* RayParser::ArgsContext::arg(size_t i) {
  return getRuleContext<RayParser::ArgContext>(i);
}

std::vector<tree::TerminalNode *> RayParser::ArgsContext::Comma() {
  return getTokens(RayParser::Comma);
}

tree::TerminalNode* RayParser::ArgsContext::Comma(size_t i) {
  return getToken(RayParser::Comma, i);
}


size_t RayParser::ArgsContext::getRuleIndex() const {
  return RayParser::RuleArgs;
}

void RayParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void RayParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}


antlrcpp::Any RayParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

RayParser::ArgsContext* RayParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 14, RayParser::RuleArgs);
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
    setState(126);
    arg();
    setState(131);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RayParser::Comma) {
      setState(127);
      match(RayParser::Comma);
      setState(128);
      arg();
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsBlockContext ------------------------------------------------------------------

RayParser::DeclarationsBlockContext::DeclarationsBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::DeclarationsBlockContext::BlockLeft() {
  return getToken(RayParser::BlockLeft, 0);
}

tree::TerminalNode* RayParser::DeclarationsBlockContext::BlockRight() {
  return getToken(RayParser::BlockRight, 0);
}

std::vector<RayParser::DeclarationContext *> RayParser::DeclarationsBlockContext::declaration() {
  return getRuleContexts<RayParser::DeclarationContext>();
}

RayParser::DeclarationContext* RayParser::DeclarationsBlockContext::declaration(size_t i) {
  return getRuleContext<RayParser::DeclarationContext>(i);
}


size_t RayParser::DeclarationsBlockContext::getRuleIndex() const {
  return RayParser::RuleDeclarationsBlock;
}

void RayParser::DeclarationsBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationsBlock(this);
}

void RayParser::DeclarationsBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationsBlock(this);
}


antlrcpp::Any RayParser::DeclarationsBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitDeclarationsBlock(this);
  else
    return visitor->visitChildren(this);
}

RayParser::DeclarationsBlockContext* RayParser::declarationsBlock() {
  DeclarationsBlockContext *_localctx = _tracker.createInstance<DeclarationsBlockContext>(_ctx, getState());
  enterRule(_localctx, 16, RayParser::RuleDeclarationsBlock);

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
    setState(134);
    match(RayParser::BlockLeft);
    setState(138);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(135);
        declaration(); 
      }
      setState(140);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(141);
    match(RayParser::BlockRight);
   
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

std::vector<RayParser::ReturnExpressionContext *> RayParser::FunctionBlockContext::returnExpression() {
  return getRuleContexts<RayParser::ReturnExpressionContext>();
}

RayParser::ReturnExpressionContext* RayParser::FunctionBlockContext::returnExpression(size_t i) {
  return getRuleContext<RayParser::ReturnExpressionContext>(i);
}

std::vector<RayParser::VariableInitializationAndDeclarationContext *> RayParser::FunctionBlockContext::variableInitializationAndDeclaration() {
  return getRuleContexts<RayParser::VariableInitializationAndDeclarationContext>();
}

RayParser::VariableInitializationAndDeclarationContext* RayParser::FunctionBlockContext::variableInitializationAndDeclaration(size_t i) {
  return getRuleContext<RayParser::VariableInitializationAndDeclarationContext>(i);
}

std::vector<RayParser::StatementContext *> RayParser::FunctionBlockContext::statement() {
  return getRuleContexts<RayParser::StatementContext>();
}

RayParser::StatementContext* RayParser::FunctionBlockContext::statement(size_t i) {
  return getRuleContext<RayParser::StatementContext>(i);
}

std::vector<RayParser::ExpressionsContext *> RayParser::FunctionBlockContext::expressions() {
  return getRuleContexts<RayParser::ExpressionsContext>();
}

RayParser::ExpressionsContext* RayParser::FunctionBlockContext::expressions(size_t i) {
  return getRuleContext<RayParser::ExpressionsContext>(i);
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
  enterRule(_localctx, 18, RayParser::RuleFunctionBlock);

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
    setState(143);
    match(RayParser::BlockLeft);
    setState(150);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(148);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          setState(144);
          returnExpression();
          break;
        }

        case 2: {
          setState(145);
          variableInitializationAndDeclaration();
          break;
        }

        case 3: {
          setState(146);
          statement();
          break;
        }

        case 4: {
          setState(147);
          expressions();
          break;
        }

        default:
          break;
        } 
      }
      setState(152);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
    setState(153);
    match(RayParser::BlockRight);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionsContext ------------------------------------------------------------------

RayParser::ExpressionsContext::ExpressionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RayParser::ExpressionContext *> RayParser::ExpressionsContext::expression() {
  return getRuleContexts<RayParser::ExpressionContext>();
}

RayParser::ExpressionContext* RayParser::ExpressionsContext::expression(size_t i) {
  return getRuleContext<RayParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RayParser::ExpressionsContext::Semicolon() {
  return getTokens(RayParser::Semicolon);
}

tree::TerminalNode* RayParser::ExpressionsContext::Semicolon(size_t i) {
  return getToken(RayParser::Semicolon, i);
}


size_t RayParser::ExpressionsContext::getRuleIndex() const {
  return RayParser::RuleExpressions;
}

void RayParser::ExpressionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressions(this);
}

void RayParser::ExpressionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressions(this);
}


antlrcpp::Any RayParser::ExpressionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitExpressions(this);
  else
    return visitor->visitChildren(this);
}

RayParser::ExpressionsContext* RayParser::expressions() {
  ExpressionsContext *_localctx = _tracker.createInstance<ExpressionsContext>(_ctx, getState());
  enterRule(_localctx, 20, RayParser::RuleExpressions);

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
    setState(155);
    expression(0);
    setState(156);
    match(RayParser::Semicolon);
    setState(162);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(157);
        expression(0);
        setState(158);
        match(RayParser::Semicolon); 
      }
      setState(164);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

RayParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::FunctionContext::Function() {
  return getToken(RayParser::Function, 0);
}

tree::TerminalNode* RayParser::FunctionContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

tree::TerminalNode* RayParser::FunctionContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

tree::TerminalNode* RayParser::FunctionContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

tree::TerminalNode* RayParser::FunctionContext::SingleArrow() {
  return getToken(RayParser::SingleArrow, 0);
}

tree::TerminalNode* RayParser::FunctionContext::Types() {
  return getToken(RayParser::Types, 0);
}

RayParser::ArgsContext* RayParser::FunctionContext::args() {
  return getRuleContext<RayParser::ArgsContext>(0);
}


size_t RayParser::FunctionContext::getRuleIndex() const {
  return RayParser::RuleFunction;
}

void RayParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void RayParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


antlrcpp::Any RayParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

RayParser::FunctionContext* RayParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 22, RayParser::RuleFunction);
  size_t _la = 0;

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(165);
      match(RayParser::Function);
      setState(166);
      match(RayParser::Identifier);
      setState(167);
      match(RayParser::PairLeft);
      setState(169);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RayParser::Identifier) {
        setState(168);
        args();
      }
      setState(171);
      match(RayParser::PairRight);
      setState(172);
      match(RayParser::SingleArrow);
      setState(173);
      match(RayParser::Types);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(174);
      match(RayParser::Function);
      setState(175);
      match(RayParser::Identifier);
      setState(176);
      match(RayParser::PairLeft);
      setState(178);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RayParser::Identifier) {
        setState(177);
        args();
      }
      setState(180);
      match(RayParser::PairRight);
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

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

RayParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::FunctionContext* RayParser::FunctionDeclarationContext::function() {
  return getRuleContext<RayParser::FunctionContext>(0);
}

tree::TerminalNode* RayParser::FunctionDeclarationContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
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
  enterRule(_localctx, 24, RayParser::RuleFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    function();
    setState(184);
    match(RayParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionImplementContext ------------------------------------------------------------------

RayParser::FunctionImplementContext::FunctionImplementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::FunctionContext* RayParser::FunctionImplementContext::function() {
  return getRuleContext<RayParser::FunctionContext>(0);
}

RayParser::FunctionBlockContext* RayParser::FunctionImplementContext::functionBlock() {
  return getRuleContext<RayParser::FunctionBlockContext>(0);
}


size_t RayParser::FunctionImplementContext::getRuleIndex() const {
  return RayParser::RuleFunctionImplement;
}

void RayParser::FunctionImplementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionImplement(this);
}

void RayParser::FunctionImplementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionImplement(this);
}


antlrcpp::Any RayParser::FunctionImplementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitFunctionImplement(this);
  else
    return visitor->visitChildren(this);
}

RayParser::FunctionImplementContext* RayParser::functionImplement() {
  FunctionImplementContext *_localctx = _tracker.createInstance<FunctionImplementContext>(_ctx, getState());
  enterRule(_localctx, 26, RayParser::RuleFunctionImplement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    function();
    setState(187);
    functionBlock();
   
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

tree::TerminalNode* RayParser::VariableDeclarationContext::Var() {
  return getToken(RayParser::Var, 0);
}

tree::TerminalNode* RayParser::VariableDeclarationContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

tree::TerminalNode* RayParser::VariableDeclarationContext::Colon() {
  return getToken(RayParser::Colon, 0);
}

tree::TerminalNode* RayParser::VariableDeclarationContext::Types() {
  return getToken(RayParser::Types, 0);
}

tree::TerminalNode* RayParser::VariableDeclarationContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
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
  enterRule(_localctx, 28, RayParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(RayParser::Var);
    setState(190);
    match(RayParser::Identifier);
    setState(191);
    match(RayParser::Colon);
    setState(192);
    match(RayParser::Types);
    setState(193);
    match(RayParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitializationAndDeclarationContext ------------------------------------------------------------------

RayParser::VariableInitializationAndDeclarationContext::VariableInitializationAndDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::VariableInitializationAndDeclarationContext::Var() {
  return getToken(RayParser::Var, 0);
}

tree::TerminalNode* RayParser::VariableInitializationAndDeclarationContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

tree::TerminalNode* RayParser::VariableInitializationAndDeclarationContext::Colon() {
  return getToken(RayParser::Colon, 0);
}

tree::TerminalNode* RayParser::VariableInitializationAndDeclarationContext::Types() {
  return getToken(RayParser::Types, 0);
}

tree::TerminalNode* RayParser::VariableInitializationAndDeclarationContext::SetEqual() {
  return getToken(RayParser::SetEqual, 0);
}

RayParser::ExpressionContext* RayParser::VariableInitializationAndDeclarationContext::expression() {
  return getRuleContext<RayParser::ExpressionContext>(0);
}

tree::TerminalNode* RayParser::VariableInitializationAndDeclarationContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}


size_t RayParser::VariableInitializationAndDeclarationContext::getRuleIndex() const {
  return RayParser::RuleVariableInitializationAndDeclaration;
}

void RayParser::VariableInitializationAndDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableInitializationAndDeclaration(this);
}

void RayParser::VariableInitializationAndDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableInitializationAndDeclaration(this);
}


antlrcpp::Any RayParser::VariableInitializationAndDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitVariableInitializationAndDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RayParser::VariableInitializationAndDeclarationContext* RayParser::variableInitializationAndDeclaration() {
  VariableInitializationAndDeclarationContext *_localctx = _tracker.createInstance<VariableInitializationAndDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 30, RayParser::RuleVariableInitializationAndDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(195);
      match(RayParser::Var);
      setState(196);
      match(RayParser::Identifier);
      setState(197);
      match(RayParser::Colon);
      setState(198);
      match(RayParser::Types);
      setState(199);
      match(RayParser::SetEqual);
      setState(200);
      expression(0);
      setState(201);
      match(RayParser::Semicolon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(203);
      match(RayParser::Var);
      setState(204);
      match(RayParser::Identifier);
      setState(205);
      match(RayParser::SetEqual);
      setState(206);
      expression(0);
      setState(207);
      match(RayParser::Semicolon);
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
  enterRule(_localctx, 32, RayParser::RuleReturnExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(211);
      match(RayParser::Return);
      setState(212);
      match(RayParser::Semicolon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(213);
      match(RayParser::Return);
      setState(214);
      expression(0);
      setState(215);
      match(RayParser::Semicolon);
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

//----------------- SetValueStatementContext ------------------------------------------------------------------

RayParser::SetValueStatementContext::SetValueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::MemberIdentifierContext* RayParser::SetValueStatementContext::memberIdentifier() {
  return getRuleContext<RayParser::MemberIdentifierContext>(0);
}

tree::TerminalNode* RayParser::SetValueStatementContext::SetEqual() {
  return getToken(RayParser::SetEqual, 0);
}

RayParser::ExpressionContext* RayParser::SetValueStatementContext::expression() {
  return getRuleContext<RayParser::ExpressionContext>(0);
}


size_t RayParser::SetValueStatementContext::getRuleIndex() const {
  return RayParser::RuleSetValueStatement;
}

void RayParser::SetValueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetValueStatement(this);
}

void RayParser::SetValueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetValueStatement(this);
}


antlrcpp::Any RayParser::SetValueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitSetValueStatement(this);
  else
    return visitor->visitChildren(this);
}

RayParser::SetValueStatementContext* RayParser::setValueStatement() {
  SetValueStatementContext *_localctx = _tracker.createInstance<SetValueStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, RayParser::RuleSetValueStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    memberIdentifier();
    setState(220);
    match(RayParser::SetEqual);
    setState(221);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BathImportContext ------------------------------------------------------------------

RayParser::BathImportContext::BathImportContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RayParser::BathImportContext::Identifier() {
  return getTokens(RayParser::Identifier);
}

tree::TerminalNode* RayParser::BathImportContext::Identifier(size_t i) {
  return getToken(RayParser::Identifier, i);
}

std::vector<tree::TerminalNode *> RayParser::BathImportContext::Comma() {
  return getTokens(RayParser::Comma);
}

tree::TerminalNode* RayParser::BathImportContext::Comma(size_t i) {
  return getToken(RayParser::Comma, i);
}


size_t RayParser::BathImportContext::getRuleIndex() const {
  return RayParser::RuleBathImport;
}

void RayParser::BathImportContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBathImport(this);
}

void RayParser::BathImportContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBathImport(this);
}


antlrcpp::Any RayParser::BathImportContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitBathImport(this);
  else
    return visitor->visitChildren(this);
}

RayParser::BathImportContext* RayParser::bathImport() {
  BathImportContext *_localctx = _tracker.createInstance<BathImportContext>(_ctx, getState());
  enterRule(_localctx, 36, RayParser::RuleBathImport);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(232);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(223);
      match(RayParser::Identifier);
      setState(228);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
      while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1 + 1) {
          setState(224);
          match(RayParser::Comma);
          setState(225);
          match(RayParser::Identifier); 
        }
        setState(230);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(231);
      match(RayParser::Identifier);
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

//----------------- ImportStatementContext ------------------------------------------------------------------

RayParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::ImportStatementContext::Import() {
  return getToken(RayParser::Import, 0);
}

std::vector<tree::TerminalNode *> RayParser::ImportStatementContext::Identifier() {
  return getTokens(RayParser::Identifier);
}

tree::TerminalNode* RayParser::ImportStatementContext::Identifier(size_t i) {
  return getToken(RayParser::Identifier, i);
}

tree::TerminalNode* RayParser::ImportStatementContext::BlockLeft() {
  return getToken(RayParser::BlockLeft, 0);
}

tree::TerminalNode* RayParser::ImportStatementContext::BlockRight() {
  return getToken(RayParser::BlockRight, 0);
}

tree::TerminalNode* RayParser::ImportStatementContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
}

tree::TerminalNode* RayParser::ImportStatementContext::Alias() {
  return getToken(RayParser::Alias, 0);
}

RayParser::BathImportContext* RayParser::ImportStatementContext::bathImport() {
  return getRuleContext<RayParser::BathImportContext>(0);
}


size_t RayParser::ImportStatementContext::getRuleIndex() const {
  return RayParser::RuleImportStatement;
}

void RayParser::ImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStatement(this);
}

void RayParser::ImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStatement(this);
}


antlrcpp::Any RayParser::ImportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitImportStatement(this);
  else
    return visitor->visitChildren(this);
}

RayParser::ImportStatementContext* RayParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, RayParser::RuleImportStatement);
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
    setState(250);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(234);
      match(RayParser::Import);
      setState(235);
      match(RayParser::Identifier);
      setState(236);
      match(RayParser::BlockLeft);
      setState(238);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RayParser::Identifier) {
        setState(237);
        bathImport();
      }
      setState(240);
      match(RayParser::BlockRight);
      setState(241);
      match(RayParser::Semicolon);
      break;
    }

    case 2: {
      setState(242);
      match(RayParser::Import);
      setState(243);
      match(RayParser::Identifier);
      setState(244);
      match(RayParser::Alias);
      setState(245);
      match(RayParser::Identifier);
      setState(246);
      match(RayParser::Semicolon);
      break;
    }

    case 3: {
      setState(247);
      match(RayParser::Import);
      setState(248);
      match(RayParser::Identifier);
      setState(249);
      match(RayParser::Semicolon);
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

tree::TerminalNode* RayParser::ExportStatementContext::Export() {
  return getToken(RayParser::Export, 0);
}

tree::TerminalNode* RayParser::ExportStatementContext::Identifier() {
  return getToken(RayParser::Identifier, 0);
}

RayParser::DeclarationsBlockContext* RayParser::ExportStatementContext::declarationsBlock() {
  return getRuleContext<RayParser::DeclarationsBlockContext>(0);
}

tree::TerminalNode* RayParser::ExportStatementContext::Semicolon() {
  return getToken(RayParser::Semicolon, 0);
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
  enterRule(_localctx, 40, RayParser::RuleExportStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(RayParser::Export);
    setState(253);
    match(RayParser::Identifier);
    setState(254);
    declarationsBlock();
    setState(255);
    match(RayParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallExpressionContext ------------------------------------------------------------------

RayParser::FunctionCallExpressionContext::FunctionCallExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RayParser::MemberIdentifierContext* RayParser::FunctionCallExpressionContext::memberIdentifier() {
  return getRuleContext<RayParser::MemberIdentifierContext>(0);
}

tree::TerminalNode* RayParser::FunctionCallExpressionContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

tree::TerminalNode* RayParser::FunctionCallExpressionContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

RayParser::Call_argsContext* RayParser::FunctionCallExpressionContext::call_args() {
  return getRuleContext<RayParser::Call_argsContext>(0);
}


size_t RayParser::FunctionCallExpressionContext::getRuleIndex() const {
  return RayParser::RuleFunctionCallExpression;
}

void RayParser::FunctionCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpression(this);
}

void RayParser::FunctionCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpression(this);
}


antlrcpp::Any RayParser::FunctionCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpression(this);
  else
    return visitor->visitChildren(this);
}

RayParser::FunctionCallExpressionContext* RayParser::functionCallExpression() {
  FunctionCallExpressionContext *_localctx = _tracker.createInstance<FunctionCallExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, RayParser::RuleFunctionCallExpression);
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
    setState(257);
    memberIdentifier();
    setState(258);
    match(RayParser::PairLeft);
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << RayParser::Not)
      | (1ULL << RayParser::PairLeft)
      | (1ULL << RayParser::Identifier)
      | (1ULL << RayParser::Constants))) != 0)) {
      setState(259);
      call_args();
    }
    setState(262);
    match(RayParser::PairRight);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_argsContext ------------------------------------------------------------------

RayParser::Call_argsContext::Call_argsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RayParser::MemberIdentifierContext *> RayParser::Call_argsContext::memberIdentifier() {
  return getRuleContexts<RayParser::MemberIdentifierContext>();
}

RayParser::MemberIdentifierContext* RayParser::Call_argsContext::memberIdentifier(size_t i) {
  return getRuleContext<RayParser::MemberIdentifierContext>(i);
}

std::vector<RayParser::ExpressionContext *> RayParser::Call_argsContext::expression() {
  return getRuleContexts<RayParser::ExpressionContext>();
}

RayParser::ExpressionContext* RayParser::Call_argsContext::expression(size_t i) {
  return getRuleContext<RayParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RayParser::Call_argsContext::Comma() {
  return getTokens(RayParser::Comma);
}

tree::TerminalNode* RayParser::Call_argsContext::Comma(size_t i) {
  return getToken(RayParser::Comma, i);
}


size_t RayParser::Call_argsContext::getRuleIndex() const {
  return RayParser::RuleCall_args;
}

void RayParser::Call_argsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_args(this);
}

void RayParser::Call_argsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_args(this);
}


antlrcpp::Any RayParser::Call_argsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitCall_args(this);
  else
    return visitor->visitChildren(this);
}

RayParser::Call_argsContext* RayParser::call_args() {
  Call_argsContext *_localctx = _tracker.createInstance<Call_argsContext>(_ctx, getState());
  enterRule(_localctx, 44, RayParser::RuleCall_args);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(276);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(264);
      memberIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(265);
      expression(0);
      setState(273);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RayParser::Comma) {
        setState(266);
        match(RayParser::Comma);
        setState(269);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(267);
          memberIdentifier();
          break;
        }

        case 2: {
          setState(268);
          expression(0);
          break;
        }

        default:
          break;
        }
        setState(275);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
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

//----------------- IfStatementContext ------------------------------------------------------------------

RayParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RayParser::IfStatementContext::If() {
  return getTokens(RayParser::If);
}

tree::TerminalNode* RayParser::IfStatementContext::If(size_t i) {
  return getToken(RayParser::If, i);
}

std::vector<tree::TerminalNode *> RayParser::IfStatementContext::PairLeft() {
  return getTokens(RayParser::PairLeft);
}

tree::TerminalNode* RayParser::IfStatementContext::PairLeft(size_t i) {
  return getToken(RayParser::PairLeft, i);
}

std::vector<RayParser::ExpressionContext *> RayParser::IfStatementContext::expression() {
  return getRuleContexts<RayParser::ExpressionContext>();
}

RayParser::ExpressionContext* RayParser::IfStatementContext::expression(size_t i) {
  return getRuleContext<RayParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RayParser::IfStatementContext::PairRight() {
  return getTokens(RayParser::PairRight);
}

tree::TerminalNode* RayParser::IfStatementContext::PairRight(size_t i) {
  return getToken(RayParser::PairRight, i);
}

std::vector<RayParser::FunctionBlockContext *> RayParser::IfStatementContext::functionBlock() {
  return getRuleContexts<RayParser::FunctionBlockContext>();
}

RayParser::FunctionBlockContext* RayParser::IfStatementContext::functionBlock(size_t i) {
  return getRuleContext<RayParser::FunctionBlockContext>(i);
}

std::vector<tree::TerminalNode *> RayParser::IfStatementContext::Else() {
  return getTokens(RayParser::Else);
}

tree::TerminalNode* RayParser::IfStatementContext::Else(size_t i) {
  return getToken(RayParser::Else, i);
}


size_t RayParser::IfStatementContext::getRuleIndex() const {
  return RayParser::RuleIfStatement;
}

void RayParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void RayParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any RayParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

RayParser::IfStatementContext* RayParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, RayParser::RuleIfStatement);
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
    setState(278);
    match(RayParser::If);
    setState(279);
    match(RayParser::PairLeft);
    setState(280);
    expression(0);
    setState(281);
    match(RayParser::PairRight);
    setState(282);
    functionBlock();
    setState(292);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(283);
        match(RayParser::Else);
        setState(284);
        match(RayParser::If);
        setState(285);
        match(RayParser::PairLeft);
        setState(286);
        expression(0);
        setState(287);
        match(RayParser::PairRight);
        setState(288);
        functionBlock(); 
      }
      setState(294);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
    setState(297);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Else) {
      setState(295);
      match(RayParser::Else);
      setState(296);
      functionBlock();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockContext ------------------------------------------------------------------

RayParser::SwitchBlockContext::SwitchBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::SwitchBlockContext::SingleArrow() {
  return getToken(RayParser::SingleArrow, 0);
}

RayParser::FunctionBlockContext* RayParser::SwitchBlockContext::functionBlock() {
  return getRuleContext<RayParser::FunctionBlockContext>(0);
}

std::vector<tree::TerminalNode *> RayParser::SwitchBlockContext::Constants() {
  return getTokens(RayParser::Constants);
}

tree::TerminalNode* RayParser::SwitchBlockContext::Constants(size_t i) {
  return getToken(RayParser::Constants, i);
}

std::vector<tree::TerminalNode *> RayParser::SwitchBlockContext::Comma() {
  return getTokens(RayParser::Comma);
}

tree::TerminalNode* RayParser::SwitchBlockContext::Comma(size_t i) {
  return getToken(RayParser::Comma, i);
}


size_t RayParser::SwitchBlockContext::getRuleIndex() const {
  return RayParser::RuleSwitchBlock;
}

void RayParser::SwitchBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBlock(this);
}

void RayParser::SwitchBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBlock(this);
}


antlrcpp::Any RayParser::SwitchBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitSwitchBlock(this);
  else
    return visitor->visitChildren(this);
}

RayParser::SwitchBlockContext* RayParser::switchBlock() {
  SwitchBlockContext *_localctx = _tracker.createInstance<SwitchBlockContext>(_ctx, getState());
  enterRule(_localctx, 48, RayParser::RuleSwitchBlock);
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
    setState(307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RayParser::Constants) {
      setState(299);
      match(RayParser::Constants);
      setState(304);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
      while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1 + 1) {
          setState(300);
          match(RayParser::Comma);
          setState(301);
          match(RayParser::Constants); 
        }
        setState(306);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
      }
    }
    setState(309);
    match(RayParser::SingleArrow);
    setState(310);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

RayParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RayParser::SwitchStatementContext::Switch() {
  return getToken(RayParser::Switch, 0);
}

tree::TerminalNode* RayParser::SwitchStatementContext::PairLeft() {
  return getToken(RayParser::PairLeft, 0);
}

RayParser::MemberIdentifierContext* RayParser::SwitchStatementContext::memberIdentifier() {
  return getRuleContext<RayParser::MemberIdentifierContext>(0);
}

tree::TerminalNode* RayParser::SwitchStatementContext::PairRight() {
  return getToken(RayParser::PairRight, 0);
}

tree::TerminalNode* RayParser::SwitchStatementContext::BlockLeft() {
  return getToken(RayParser::BlockLeft, 0);
}

tree::TerminalNode* RayParser::SwitchStatementContext::BlockRight() {
  return getToken(RayParser::BlockRight, 0);
}

std::vector<RayParser::SwitchBlockContext *> RayParser::SwitchStatementContext::switchBlock() {
  return getRuleContexts<RayParser::SwitchBlockContext>();
}

RayParser::SwitchBlockContext* RayParser::SwitchStatementContext::switchBlock(size_t i) {
  return getRuleContext<RayParser::SwitchBlockContext>(i);
}


size_t RayParser::SwitchStatementContext::getRuleIndex() const {
  return RayParser::RuleSwitchStatement;
}

void RayParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void RayParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RayListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}


antlrcpp::Any RayParser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RayVisitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}

RayParser::SwitchStatementContext* RayParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, RayParser::RuleSwitchStatement);

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
    setState(312);
    match(RayParser::Switch);
    setState(313);
    match(RayParser::PairLeft);
    setState(314);
    memberIdentifier();
    setState(315);
    match(RayParser::PairRight);
    setState(316);
    match(RayParser::BlockLeft);
    setState(320);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(317);
        switchBlock(); 
      }
      setState(322);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
    setState(323);
    match(RayParser::BlockRight);
   
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
    case 5: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool RayParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);

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
  "memberIdentifier", "start", "declaration", "implement", "statement", 
  "expression", "arg", "args", "declarationsBlock", "functionBlock", "expressions", 
  "function", "functionDeclaration", "functionImplement", "variableDeclaration", 
  "variableInitializationAndDeclaration", "returnExpression", "setValueStatement", 
  "bathImport", "importStatement", "exportStatement", "functionCallExpression", 
  "call_args", "ifStatement", "switchBlock", "switchStatement"
};

std::vector<std::string> RayParser::_literalNames = {
  "", "'*'", "'/'", "'+'", "'-'", "'^'", "'!'", "'|'", "'='", "'.'", "':'", 
  "", "", "'{'", "'}'", "'('", "')'", "'['", "']'", "'@'", "';'", "','", 
  "'<'", "'>'", "'->'", "'=>'", "'=='", "'!='", "'<='", "'>='", "'return'", 
  "'''", "'\"'", "'get'", "'put'", "'as'", "", "'var'", "'if'", "'for'", 
  "'switch'", "'else'", "", "", "", "", "' '"
};

std::vector<std::string> RayParser::_symbolicNames = {
  "", "", "", "", "", "Pow", "Not", "Or", "SetEqual", "Dot", "Colon", "MultiLineComment", 
  "SingleLineComment", "BlockLeft", "BlockRight", "PairLeft", "PairRight", 
  "ListLeft", "ListRight", "At", "Semicolon", "Comma", "Less", "More", "SingleArrow", 
  "Arrow", "Equal", "NotEqual", "LessEqual", "MoreEqual", "Return", "SingleQuotation", 
  "MultiQuotation", "Import", "Export", "Alias", "Function", "Var", "If", 
  "For", "Switch", "Else", "Types", "KeyWords", "Identifier", "Blanks", 
  "Space", "Constants", "List"
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
    0x3, 0x32, 0x148, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x3a, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x3d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x42, 0xa, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x45, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x48, 0xb, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x4e, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x51, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x55, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x5e, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x6a, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x7, 0x7, 0x78, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x7b, 0xb, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
    0x84, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x87, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x7, 0xa, 0x8b, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x8e, 0xb, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 
    0x97, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x9a, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xa3, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0xa6, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0xac, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xb5, 0xa, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0xb8, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xd4, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xdc, 0xa, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x7, 0x14, 0xe5, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xe8, 0xb, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0xeb, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x5, 0x15, 0xf1, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0xfd, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x107, 
    0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x5, 0x18, 0x110, 0xa, 0x18, 0x7, 0x18, 0x112, 0xa, 
    0x18, 0xc, 0x18, 0xe, 0x18, 0x115, 0xb, 0x18, 0x5, 0x18, 0x117, 0xa, 
    0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 
    0x19, 0x125, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x128, 0xb, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x5, 0x19, 0x12c, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x7, 0x1a, 0x131, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x134, 
    0xb, 0x1a, 0x5, 0x1a, 0x136, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 
    0x1b, 0x141, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x144, 0xb, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0xc, 0x3b, 0x46, 0x4f, 0x8c, 0x98, 0xa4, 
    0xe6, 0x126, 0x132, 0x142, 0x3, 0xc, 0x1c, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x2, 0x6, 0x3, 
    0x2, 0x3, 0x4, 0x3, 0x2, 0x5, 0x6, 0x4, 0x2, 0x7, 0x7, 0x9, 0x9, 0x4, 
    0x2, 0x18, 0x19, 0x1c, 0x1f, 0x2, 0x159, 0x2, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x54, 0x3, 0x2, 0x2, 0x2, 0x8, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x5d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x69, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x88, 0x3, 0x2, 0x2, 0x2, 0x14, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x18, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xbf, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x22, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x26, 0xea, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x103, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x116, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x118, 0x3, 0x2, 0x2, 0x2, 0x32, 0x135, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x13a, 0x3, 0x2, 0x2, 0x2, 0x36, 0x3b, 0x7, 0x2e, 0x2, 0x2, 0x37, 0x38, 
    0x7, 0xb, 0x2, 0x2, 0x38, 0x3a, 0x7, 0x2e, 0x2, 0x2, 0x39, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x46, 0x3, 0x2, 0x2, 
    0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x7, 0x13, 0x2, 0x2, 
    0x3f, 0x42, 0x5, 0x2, 0x2, 0x2, 0x40, 0x42, 0x7, 0x31, 0x2, 0x2, 0x41, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x7, 0x14, 0x2, 0x2, 0x44, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4e, 0x5, 0x6, 0x4, 0x2, 
    0x4a, 0x4e, 0x5, 0x8, 0x5, 0x2, 0x4b, 0x4e, 0x5, 0x28, 0x15, 0x2, 0x4c, 
    0x4e, 0x5, 0x2a, 0x16, 0x2, 0x4d, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x52, 0x55, 0x5, 0x1a, 0xe, 0x2, 
    0x53, 0x55, 0x5, 0x1e, 0x10, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x7, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 
    0x5, 0x1c, 0xf, 0x2, 0x57, 0x9, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x5, 
    0x24, 0x13, 0x2, 0x59, 0x5a, 0x7, 0x16, 0x2, 0x2, 0x5a, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0x5b, 0x5e, 0x5, 0x30, 0x19, 0x2, 0x5c, 0x5e, 0x5, 0x34, 0x1b, 
    0x2, 0x5d, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x60, 0x8, 0x7, 0x1, 0x2, 0x60, 0x6a, 0x5, 0x2c, 0x17, 0x2, 0x61, 0x62, 
    0x7, 0x8, 0x2, 0x2, 0x62, 0x6a, 0x5, 0xc, 0x7, 0x6, 0x63, 0x6a, 0x7, 
    0x31, 0x2, 0x2, 0x64, 0x6a, 0x5, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x11, 
    0x2, 0x2, 0x66, 0x67, 0x5, 0xc, 0x7, 0x2, 0x67, 0x68, 0x7, 0x12, 0x2, 
    0x2, 0x68, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x69, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x61, 0x3, 0x2, 0x2, 0x2, 0x69, 0x63, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x69, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0xc, 0xa, 0x2, 0x2, 0x6c, 0x6d, 0x9, 
    0x2, 0x2, 0x2, 0x6d, 0x78, 0x5, 0xc, 0x7, 0xb, 0x6e, 0x6f, 0xc, 0x9, 
    0x2, 0x2, 0x6f, 0x70, 0x9, 0x3, 0x2, 0x2, 0x70, 0x78, 0x5, 0xc, 0x7, 
    0xa, 0x71, 0x72, 0xc, 0x8, 0x2, 0x2, 0x72, 0x73, 0x9, 0x4, 0x2, 0x2, 
    0x73, 0x78, 0x5, 0xc, 0x7, 0x9, 0x74, 0x75, 0xc, 0x7, 0x2, 0x2, 0x75, 
    0x76, 0x9, 0x5, 0x2, 0x2, 0x76, 0x78, 0x5, 0xc, 0x7, 0x8, 0x77, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x77, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x77, 0x74, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x7d, 0x7, 0x2e, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0xc, 0x2, 0x2, 0x7e, 
    0x7f, 0x7, 0x2c, 0x2, 0x2, 0x7f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x80, 0x85, 
    0x5, 0xe, 0x8, 0x2, 0x81, 0x82, 0x7, 0x17, 0x2, 0x2, 0x82, 0x84, 0x5, 
    0xe, 0x8, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x11, 0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x8c, 0x7, 0xf, 0x2, 0x2, 0x89, 0x8b, 0x5, 0x6, 0x4, 0x2, 0x8a, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x10, 
    0x2, 0x2, 0x90, 0x13, 0x3, 0x2, 0x2, 0x2, 0x91, 0x98, 0x7, 0xf, 0x2, 
    0x2, 0x92, 0x97, 0x5, 0x22, 0x12, 0x2, 0x93, 0x97, 0x5, 0x20, 0x11, 
    0x2, 0x94, 0x97, 0x5, 0xa, 0x6, 0x2, 0x95, 0x97, 0x5, 0x16, 0xc, 0x2, 
    0x96, 0x92, 0x3, 0x2, 0x2, 0x2, 0x96, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x9c, 0x7, 0x10, 0x2, 0x2, 0x9c, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x9d, 0x9e, 0x5, 0xc, 0x7, 0x2, 0x9e, 0xa4, 0x7, 0x16, 0x2, 0x2, 
    0x9f, 0xa0, 0x5, 0xc, 0x7, 0x2, 0xa0, 0xa1, 0x7, 0x16, 0x2, 0x2, 0xa1, 
    0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xa8, 0x7, 0x26, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x2e, 0x2, 
    0x2, 0xa9, 0xab, 0x7, 0x11, 0x2, 0x2, 0xaa, 0xac, 0x5, 0x10, 0x9, 0x2, 
    0xab, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x12, 0x2, 0x2, 0xae, 0xaf, 
    0x7, 0x1a, 0x2, 0x2, 0xaf, 0xb8, 0x7, 0x2c, 0x2, 0x2, 0xb0, 0xb1, 0x7, 
    0x26, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x2e, 0x2, 0x2, 0xb2, 0xb4, 0x7, 0x11, 
    0x2, 0x2, 0xb3, 0xb5, 0x5, 0x10, 0x9, 0x2, 0xb4, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0xb6, 0xb8, 0x7, 0x12, 0x2, 0x2, 0xb7, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 
    0x5, 0x18, 0xd, 0x2, 0xba, 0xbb, 0x7, 0x16, 0x2, 0x2, 0xbb, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x18, 0xd, 0x2, 0xbd, 0xbe, 0x5, 0x14, 
    0xb, 0x2, 0xbe, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x7, 0x27, 0x2, 
    0x2, 0xc0, 0xc1, 0x7, 0x2e, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0xc, 0x2, 0x2, 
    0xc2, 0xc3, 0x7, 0x2c, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x16, 0x2, 0x2, 0xc4, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x27, 0x2, 0x2, 0xc6, 0xc7, 
    0x7, 0x2e, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0xc, 0x2, 0x2, 0xc8, 0xc9, 0x7, 
    0x2c, 0x2, 0x2, 0xc9, 0xca, 0x7, 0xa, 0x2, 0x2, 0xca, 0xcb, 0x5, 0xc, 
    0x7, 0x2, 0xcb, 0xcc, 0x7, 0x16, 0x2, 0x2, 0xcc, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xce, 0x7, 0x27, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x2e, 0x2, 0x2, 
    0xcf, 0xd0, 0x7, 0xa, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0xc, 0x7, 0x2, 0xd1, 
    0xd2, 0x7, 0x16, 0x2, 0x2, 0xd2, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x20, 0x2, 0x2, 0xd6, 0xdc, 0x7, 0x16, 
    0x2, 0x2, 0xd7, 0xd8, 0x7, 0x20, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0xc, 0x7, 
    0x2, 0xd9, 0xda, 0x7, 0x16, 0x2, 0x2, 0xda, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0xdb, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x2, 0x2, 0x2, 0xde, 0xdf, 
    0x7, 0xa, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0xc, 0x7, 0x2, 0xe0, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0xe1, 0xe6, 0x7, 0x2e, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x17, 
    0x2, 0x2, 0xe3, 0xe5, 0x7, 0x2e, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xeb, 0x7, 0x2e, 0x2, 0x2, 0xea, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xea, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0xed, 0x7, 0x23, 0x2, 0x2, 0xed, 0xee, 0x7, 0x2e, 
    0x2, 0x2, 0xee, 0xf0, 0x7, 0xf, 0x2, 0x2, 0xef, 0xf1, 0x5, 0x26, 0x14, 
    0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 
    0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x10, 0x2, 0x2, 0xf3, 
    0xfd, 0x7, 0x16, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x23, 0x2, 0x2, 0xf5, 0xf6, 
    0x7, 0x2e, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x25, 0x2, 0x2, 0xf7, 0xf8, 0x7, 
    0x2e, 0x2, 0x2, 0xf8, 0xfd, 0x7, 0x16, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0x23, 
    0x2, 0x2, 0xfa, 0xfb, 0x7, 0x2e, 0x2, 0x2, 0xfb, 0xfd, 0x7, 0x16, 0x2, 
    0x2, 0xfc, 0xec, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf4, 0x3, 0x2, 0x2, 0x2, 
    0xfc, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x29, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0xff, 0x7, 0x24, 0x2, 0x2, 0xff, 0x100, 0x7, 0x2e, 0x2, 0x2, 0x100, 
    0x101, 0x5, 0x12, 0xa, 0x2, 0x101, 0x102, 0x7, 0x16, 0x2, 0x2, 0x102, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x5, 0x2, 0x2, 0x2, 0x104, 0x106, 
    0x7, 0x11, 0x2, 0x2, 0x105, 0x107, 0x5, 0x2e, 0x18, 0x2, 0x106, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x7, 0x12, 0x2, 0x2, 0x109, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x117, 0x5, 0x2, 0x2, 0x2, 0x10b, 0x113, 
    0x5, 0xc, 0x7, 0x2, 0x10c, 0x10f, 0x7, 0x17, 0x2, 0x2, 0x10d, 0x110, 
    0x5, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x5, 0xc, 0x7, 0x2, 0x10f, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x111, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x112, 0x115, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x117, 0x3, 0x2, 0x2, 0x2, 0x115, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x116, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x117, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x7, 
    0x28, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x11, 0x2, 0x2, 0x11a, 0x11b, 0x5, 
    0xc, 0x7, 0x2, 0x11b, 0x11c, 0x7, 0x12, 0x2, 0x2, 0x11c, 0x126, 0x5, 
    0x14, 0xb, 0x2, 0x11d, 0x11e, 0x7, 0x2b, 0x2, 0x2, 0x11e, 0x11f, 0x7, 
    0x28, 0x2, 0x2, 0x11f, 0x120, 0x7, 0x11, 0x2, 0x2, 0x120, 0x121, 0x5, 
    0xc, 0x7, 0x2, 0x121, 0x122, 0x7, 0x12, 0x2, 0x2, 0x122, 0x123, 0x5, 
    0x14, 0xb, 0x2, 0x123, 0x125, 0x3, 0x2, 0x2, 0x2, 0x124, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x128, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 
    0x2, 0x2, 0x2, 0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12b, 0x3, 
    0x2, 0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x7, 
    0x2b, 0x2, 0x2, 0x12a, 0x12c, 0x5, 0x14, 0xb, 0x2, 0x12b, 0x129, 0x3, 
    0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0x132, 0x7, 0x31, 0x2, 0x2, 0x12e, 0x12f, 0x7, 0x17, 
    0x2, 0x2, 0x12f, 0x131, 0x7, 0x31, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x134, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x133, 0x136, 0x3, 0x2, 
    0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x135, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x135, 0x136, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 
    0x2, 0x2, 0x137, 0x138, 0x7, 0x1a, 0x2, 0x2, 0x138, 0x139, 0x5, 0x14, 
    0xb, 0x2, 0x139, 0x33, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x2a, 
    0x2, 0x2, 0x13b, 0x13c, 0x7, 0x11, 0x2, 0x2, 0x13c, 0x13d, 0x5, 0x2, 
    0x2, 0x2, 0x13d, 0x13e, 0x7, 0x12, 0x2, 0x2, 0x13e, 0x142, 0x7, 0xf, 
    0x2, 0x2, 0x13f, 0x141, 0x5, 0x32, 0x1a, 0x2, 0x140, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x144, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x143, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x7, 0x10, 
    0x2, 0x2, 0x146, 0x35, 0x3, 0x2, 0x2, 0x2, 0x23, 0x3b, 0x41, 0x46, 0x4d, 
    0x4f, 0x54, 0x5d, 0x69, 0x77, 0x79, 0x85, 0x8c, 0x96, 0x98, 0xa4, 0xab, 
    0xb4, 0xb7, 0xd3, 0xdb, 0xe6, 0xea, 0xf0, 0xfc, 0x106, 0x10f, 0x113, 
    0x116, 0x126, 0x12b, 0x132, 0x135, 0x142, 
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
