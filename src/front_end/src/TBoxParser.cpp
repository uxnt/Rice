
// Generated from ./TBox.g4 by ANTLR 4.7.2


#include "TBoxVisitor.h"

#include "TBoxParser.h"


using namespace antlrcpp;
using namespace tbox::language;
using namespace antlr4;

TBoxParser::TBoxParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TBoxParser::~TBoxParser() {
  delete _interpreter;
}

std::string TBoxParser::getGrammarFileName() const {
  return "TBox.g4";
}

const std::vector<std::string>& TBoxParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TBoxParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- NumContext ------------------------------------------------------------------

TBoxParser::NumContext::NumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::NumContext::BinNum() {
  return getToken(TBoxParser::BinNum, 0);
}

tree::TerminalNode* TBoxParser::NumContext::OctNum() {
  return getToken(TBoxParser::OctNum, 0);
}

tree::TerminalNode* TBoxParser::NumContext::DecNum() {
  return getToken(TBoxParser::DecNum, 0);
}

tree::TerminalNode* TBoxParser::NumContext::HexNum() {
  return getToken(TBoxParser::HexNum, 0);
}

tree::TerminalNode* TBoxParser::NumContext::FloatNum() {
  return getToken(TBoxParser::FloatNum, 0);
}


size_t TBoxParser::NumContext::getRuleIndex() const {
  return TBoxParser::RuleNum;
}


antlrcpp::Any TBoxParser::NumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitNum(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::NumContext* TBoxParser::num() {
  NumContext *_localctx = _tracker.createInstance<NumContext>(_ctx, getState());
  enterRule(_localctx, 0, TBoxParser::RuleNum);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    _la = _input->LA(1);
    if (!(((((_la - 96) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 96)) & ((1ULL << (TBoxParser::BinNum - 96))
      | (1ULL << (TBoxParser::OctNum - 96))
      | (1ULL << (TBoxParser::DecNum - 96))
      | (1ULL << (TBoxParser::HexNum - 96))
      | (1ULL << (TBoxParser::FloatNum - 96)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

TBoxParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::ConstantContext::StringConstant() {
  return getToken(TBoxParser::StringConstant, 0);
}

TBoxParser::NumContext* TBoxParser::ConstantContext::num() {
  return getRuleContext<TBoxParser::NumContext>(0);
}


size_t TBoxParser::ConstantContext::getRuleIndex() const {
  return TBoxParser::RuleConstant;
}


antlrcpp::Any TBoxParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ConstantContext* TBoxParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 2, TBoxParser::RuleConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(96);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::StringConstant: {
        enterOuterAlt(_localctx, 1);
        setState(94);
        match(TBoxParser::StringConstant);
        break;
      }

      case TBoxParser::BinNum:
      case TBoxParser::OctNum:
      case TBoxParser::DecNum:
      case TBoxParser::HexNum:
      case TBoxParser::FloatNum: {
        enterOuterAlt(_localctx, 2);
        setState(95);
        num();
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

//----------------- PrimExprContext ------------------------------------------------------------------

TBoxParser::PrimExprContext::PrimExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::ConstantContext* TBoxParser::PrimExprContext::constant() {
  return getRuleContext<TBoxParser::ConstantContext>(0);
}

tree::TerminalNode* TBoxParser::PrimExprContext::Identifier() {
  return getToken(TBoxParser::Identifier, 0);
}

tree::TerminalNode* TBoxParser::PrimExprContext::LeftParen() {
  return getToken(TBoxParser::LeftParen, 0);
}

TBoxParser::ExprContext* TBoxParser::PrimExprContext::expr() {
  return getRuleContext<TBoxParser::ExprContext>(0);
}

tree::TerminalNode* TBoxParser::PrimExprContext::RightParen() {
  return getToken(TBoxParser::RightParen, 0);
}


size_t TBoxParser::PrimExprContext::getRuleIndex() const {
  return TBoxParser::RulePrimExpr;
}


antlrcpp::Any TBoxParser::PrimExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitPrimExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::PrimExprContext* TBoxParser::primExpr() {
  PrimExprContext *_localctx = _tracker.createInstance<PrimExprContext>(_ctx, getState());
  enterRule(_localctx, 4, TBoxParser::RulePrimExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(104);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::BinNum:
      case TBoxParser::OctNum:
      case TBoxParser::DecNum:
      case TBoxParser::HexNum:
      case TBoxParser::FloatNum:
      case TBoxParser::StringConstant: {
        enterOuterAlt(_localctx, 1);
        setState(98);
        constant();
        break;
      }

      case TBoxParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(99);
        match(TBoxParser::Identifier);
        break;
      }

      case TBoxParser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(100);
        match(TBoxParser::LeftParen);
        setState(101);
        expr();
        setState(102);
        match(TBoxParser::RightParen);
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

//----------------- PostExprContext ------------------------------------------------------------------

TBoxParser::PostExprContext::PostExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::PrimExprContext* TBoxParser::PostExprContext::primExpr() {
  return getRuleContext<TBoxParser::PrimExprContext>(0);
}

std::vector<TBoxParser::PostOpContext *> TBoxParser::PostExprContext::postOp() {
  return getRuleContexts<TBoxParser::PostOpContext>();
}

TBoxParser::PostOpContext* TBoxParser::PostExprContext::postOp(size_t i) {
  return getRuleContext<TBoxParser::PostOpContext>(i);
}

std::vector<TBoxParser::IncOrDecOpContext *> TBoxParser::PostExprContext::incOrDecOp() {
  return getRuleContexts<TBoxParser::IncOrDecOpContext>();
}

TBoxParser::IncOrDecOpContext* TBoxParser::PostExprContext::incOrDecOp(size_t i) {
  return getRuleContext<TBoxParser::IncOrDecOpContext>(i);
}


size_t TBoxParser::PostExprContext::getRuleIndex() const {
  return TBoxParser::RulePostExpr;
}


antlrcpp::Any TBoxParser::PostExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitPostExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::PostExprContext* TBoxParser::postExpr() {
  PostExprContext *_localctx = _tracker.createInstance<PostExprContext>(_ctx, getState());
  enterRule(_localctx, 6, TBoxParser::RulePostExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    primExpr();
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 51) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 51)) & ((1ULL << (TBoxParser::LeftParen - 51))
      | (1ULL << (TBoxParser::LeftBracket - 51))
      | (1ULL << (TBoxParser::Dot - 51)))) != 0)) {
      setState(107);
      postOp();
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Increase

    || _la == TBoxParser::Decrease) {
      setState(113);
      incOrDecOp();
      setState(118);
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

//----------------- PostOpContext ------------------------------------------------------------------

TBoxParser::PostOpContext::PostOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::PostOpContext::LeftBracket() {
  return getToken(TBoxParser::LeftBracket, 0);
}

TBoxParser::ExprContext* TBoxParser::PostOpContext::expr() {
  return getRuleContext<TBoxParser::ExprContext>(0);
}

tree::TerminalNode* TBoxParser::PostOpContext::RightBracket() {
  return getToken(TBoxParser::RightBracket, 0);
}

tree::TerminalNode* TBoxParser::PostOpContext::LeftParen() {
  return getToken(TBoxParser::LeftParen, 0);
}

TBoxParser::ArgsContext* TBoxParser::PostOpContext::args() {
  return getRuleContext<TBoxParser::ArgsContext>(0);
}

tree::TerminalNode* TBoxParser::PostOpContext::RightParen() {
  return getToken(TBoxParser::RightParen, 0);
}

tree::TerminalNode* TBoxParser::PostOpContext::Identifier() {
  return getToken(TBoxParser::Identifier, 0);
}

tree::TerminalNode* TBoxParser::PostOpContext::Dot() {
  return getToken(TBoxParser::Dot, 0);
}


size_t TBoxParser::PostOpContext::getRuleIndex() const {
  return TBoxParser::RulePostOp;
}


antlrcpp::Any TBoxParser::PostOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitPostOp(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::PostOpContext* TBoxParser::postOp() {
  PostOpContext *_localctx = _tracker.createInstance<PostOpContext>(_ctx, getState());
  enterRule(_localctx, 8, TBoxParser::RulePostOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(119);
        match(TBoxParser::LeftBracket);
        setState(120);
        expr();
        setState(121);
        match(TBoxParser::RightBracket);
        break;
      }

      case TBoxParser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(123);
        match(TBoxParser::LeftParen);
        setState(124);
        args();
        setState(125);
        match(TBoxParser::RightParen);
        break;
      }

      case TBoxParser::Dot: {
        enterOuterAlt(_localctx, 3);
        setState(127);
        match(TBoxParser::Dot);
        setState(128);
        match(TBoxParser::Identifier);
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

//----------------- UnaryExprContext ------------------------------------------------------------------

TBoxParser::UnaryExprContext::UnaryExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::PostExprContext* TBoxParser::UnaryExprContext::postExpr() {
  return getRuleContext<TBoxParser::PostExprContext>(0);
}

TBoxParser::UnaryOpContext* TBoxParser::UnaryExprContext::unaryOp() {
  return getRuleContext<TBoxParser::UnaryOpContext>(0);
}

TBoxParser::CastExprContext* TBoxParser::UnaryExprContext::castExpr() {
  return getRuleContext<TBoxParser::CastExprContext>(0);
}

std::vector<TBoxParser::IncOrDecOpContext *> TBoxParser::UnaryExprContext::incOrDecOp() {
  return getRuleContexts<TBoxParser::IncOrDecOpContext>();
}

TBoxParser::IncOrDecOpContext* TBoxParser::UnaryExprContext::incOrDecOp(size_t i) {
  return getRuleContext<TBoxParser::IncOrDecOpContext>(i);
}


size_t TBoxParser::UnaryExprContext::getRuleIndex() const {
  return TBoxParser::RuleUnaryExpr;
}


antlrcpp::Any TBoxParser::UnaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitUnaryExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::UnaryExprContext* TBoxParser::unaryExpr() {
  UnaryExprContext *_localctx = _tracker.createInstance<UnaryExprContext>(_ctx, getState());
  enterRule(_localctx, 10, TBoxParser::RuleUnaryExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Increase

    || _la == TBoxParser::Decrease) {
      setState(131);
      incOrDecOp();
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(141);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::LeftParen:
      case TBoxParser::BinNum:
      case TBoxParser::OctNum:
      case TBoxParser::DecNum:
      case TBoxParser::HexNum:
      case TBoxParser::FloatNum:
      case TBoxParser::Identifier:
      case TBoxParser::StringConstant: {
        setState(137);
        postExpr();
        break;
      }

      case TBoxParser::Minus:
      case TBoxParser::Not:
      case TBoxParser::Tilde: {
        setState(138);
        unaryOp();
        setState(139);
        castExpr();
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

//----------------- UnaryOpContext ------------------------------------------------------------------

TBoxParser::UnaryOpContext::UnaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::UnaryOpContext::Minus() {
  return getToken(TBoxParser::Minus, 0);
}

tree::TerminalNode* TBoxParser::UnaryOpContext::Tilde() {
  return getToken(TBoxParser::Tilde, 0);
}

tree::TerminalNode* TBoxParser::UnaryOpContext::Not() {
  return getToken(TBoxParser::Not, 0);
}


size_t TBoxParser::UnaryOpContext::getRuleIndex() const {
  return TBoxParser::RuleUnaryOp;
}


antlrcpp::Any TBoxParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::UnaryOpContext* TBoxParser::unaryOp() {
  UnaryOpContext *_localctx = _tracker.createInstance<UnaryOpContext>(_ctx, getState());
  enterRule(_localctx, 12, TBoxParser::RuleUnaryOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    _la = _input->LA(1);
    if (!(((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & ((1ULL << (TBoxParser::Minus - 62))
      | (1ULL << (TBoxParser::Not - 62))
      | (1ULL << (TBoxParser::Tilde - 62)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncOrDecOpContext ------------------------------------------------------------------

TBoxParser::IncOrDecOpContext::IncOrDecOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::IncOrDecOpContext::Increase() {
  return getToken(TBoxParser::Increase, 0);
}

tree::TerminalNode* TBoxParser::IncOrDecOpContext::Decrease() {
  return getToken(TBoxParser::Decrease, 0);
}


size_t TBoxParser::IncOrDecOpContext::getRuleIndex() const {
  return TBoxParser::RuleIncOrDecOp;
}


antlrcpp::Any TBoxParser::IncOrDecOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitIncOrDecOp(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::IncOrDecOpContext* TBoxParser::incOrDecOp() {
  IncOrDecOpContext *_localctx = _tracker.createInstance<IncOrDecOpContext>(_ctx, getState());
  enterRule(_localctx, 14, TBoxParser::RuleIncOrDecOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    _la = _input->LA(1);
    if (!(_la == TBoxParser::Increase

    || _la == TBoxParser::Decrease)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExprContext ------------------------------------------------------------------

TBoxParser::CastExprContext::CastExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::UnaryExprContext* TBoxParser::CastExprContext::unaryExpr() {
  return getRuleContext<TBoxParser::UnaryExprContext>(0);
}

TBoxParser::NumContext* TBoxParser::CastExprContext::num() {
  return getRuleContext<TBoxParser::NumContext>(0);
}


size_t TBoxParser::CastExprContext::getRuleIndex() const {
  return TBoxParser::RuleCastExpr;
}


antlrcpp::Any TBoxParser::CastExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitCastExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::CastExprContext* TBoxParser::castExpr() {
  CastExprContext *_localctx = _tracker.createInstance<CastExprContext>(_ctx, getState());
  enterRule(_localctx, 16, TBoxParser::RuleCastExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(147);
      unaryExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(148);
      num();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExprContext ------------------------------------------------------------------

TBoxParser::MulExprContext::MulExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::CastExprContext *> TBoxParser::MulExprContext::castExpr() {
  return getRuleContexts<TBoxParser::CastExprContext>();
}

TBoxParser::CastExprContext* TBoxParser::MulExprContext::castExpr(size_t i) {
  return getRuleContext<TBoxParser::CastExprContext>(i);
}

std::vector<TBoxParser::MulOpContext *> TBoxParser::MulExprContext::mulOp() {
  return getRuleContexts<TBoxParser::MulOpContext>();
}

TBoxParser::MulOpContext* TBoxParser::MulExprContext::mulOp(size_t i) {
  return getRuleContext<TBoxParser::MulOpContext>(i);
}


size_t TBoxParser::MulExprContext::getRuleIndex() const {
  return TBoxParser::RuleMulExpr;
}


antlrcpp::Any TBoxParser::MulExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitMulExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::MulExprContext* TBoxParser::mulExpr() {
  MulExprContext *_localctx = _tracker.createInstance<MulExprContext>(_ctx, getState());
  enterRule(_localctx, 18, TBoxParser::RuleMulExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    castExpr();
    setState(157);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TBoxParser::Star - 64))
      | (1ULL << (TBoxParser::Div - 64))
      | (1ULL << (TBoxParser::Mod - 64)))) != 0)) {
      setState(152);
      mulOp();
      setState(153);
      castExpr();
      setState(159);
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

//----------------- MulOpContext ------------------------------------------------------------------

TBoxParser::MulOpContext::MulOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::MulOpContext::Star() {
  return getToken(TBoxParser::Star, 0);
}

tree::TerminalNode* TBoxParser::MulOpContext::Div() {
  return getToken(TBoxParser::Div, 0);
}

tree::TerminalNode* TBoxParser::MulOpContext::Mod() {
  return getToken(TBoxParser::Mod, 0);
}


size_t TBoxParser::MulOpContext::getRuleIndex() const {
  return TBoxParser::RuleMulOp;
}


antlrcpp::Any TBoxParser::MulOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitMulOp(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::MulOpContext* TBoxParser::mulOp() {
  MulOpContext *_localctx = _tracker.createInstance<MulOpContext>(_ctx, getState());
  enterRule(_localctx, 20, TBoxParser::RuleMulOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    _la = _input->LA(1);
    if (!(((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TBoxParser::Star - 64))
      | (1ULL << (TBoxParser::Div - 64))
      | (1ULL << (TBoxParser::Mod - 64)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddExprContext ------------------------------------------------------------------

TBoxParser::AddExprContext::AddExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::MulExprContext *> TBoxParser::AddExprContext::mulExpr() {
  return getRuleContexts<TBoxParser::MulExprContext>();
}

TBoxParser::MulExprContext* TBoxParser::AddExprContext::mulExpr(size_t i) {
  return getRuleContext<TBoxParser::MulExprContext>(i);
}

std::vector<TBoxParser::AddOpContext *> TBoxParser::AddExprContext::addOp() {
  return getRuleContexts<TBoxParser::AddOpContext>();
}

TBoxParser::AddOpContext* TBoxParser::AddExprContext::addOp(size_t i) {
  return getRuleContext<TBoxParser::AddOpContext>(i);
}


size_t TBoxParser::AddExprContext::getRuleIndex() const {
  return TBoxParser::RuleAddExpr;
}


antlrcpp::Any TBoxParser::AddExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitAddExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::AddExprContext* TBoxParser::addExpr() {
  AddExprContext *_localctx = _tracker.createInstance<AddExprContext>(_ctx, getState());
  enterRule(_localctx, 22, TBoxParser::RuleAddExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    mulExpr();
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Plus

    || _la == TBoxParser::Minus) {
      setState(163);
      addOp();
      setState(164);
      mulExpr();
      setState(170);
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

//----------------- AddOpContext ------------------------------------------------------------------

TBoxParser::AddOpContext::AddOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::AddOpContext::Plus() {
  return getToken(TBoxParser::Plus, 0);
}

tree::TerminalNode* TBoxParser::AddOpContext::Minus() {
  return getToken(TBoxParser::Minus, 0);
}


size_t TBoxParser::AddOpContext::getRuleIndex() const {
  return TBoxParser::RuleAddOp;
}


antlrcpp::Any TBoxParser::AddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitAddOp(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::AddOpContext* TBoxParser::addOp() {
  AddOpContext *_localctx = _tracker.createInstance<AddOpContext>(_ctx, getState());
  enterRule(_localctx, 24, TBoxParser::RuleAddOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    _la = _input->LA(1);
    if (!(_la == TBoxParser::Plus

    || _la == TBoxParser::Minus)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExprContext ------------------------------------------------------------------

TBoxParser::ShiftExprContext::ShiftExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::AddExprContext *> TBoxParser::ShiftExprContext::addExpr() {
  return getRuleContexts<TBoxParser::AddExprContext>();
}

TBoxParser::AddExprContext* TBoxParser::ShiftExprContext::addExpr(size_t i) {
  return getRuleContext<TBoxParser::AddExprContext>(i);
}

std::vector<TBoxParser::ShiftOpContext *> TBoxParser::ShiftExprContext::shiftOp() {
  return getRuleContexts<TBoxParser::ShiftOpContext>();
}

TBoxParser::ShiftOpContext* TBoxParser::ShiftExprContext::shiftOp(size_t i) {
  return getRuleContext<TBoxParser::ShiftOpContext>(i);
}


size_t TBoxParser::ShiftExprContext::getRuleIndex() const {
  return TBoxParser::RuleShiftExpr;
}


antlrcpp::Any TBoxParser::ShiftExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitShiftExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ShiftExprContext* TBoxParser::shiftExpr() {
  ShiftExprContext *_localctx = _tracker.createInstance<ShiftExprContext>(_ctx, getState());
  enterRule(_localctx, 26, TBoxParser::RuleShiftExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    addExpr();
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TBoxParser::LeftShift)
      | (1ULL << TBoxParser::ARightShift)
      | (1ULL << TBoxParser::LRightShift))) != 0)) {
      setState(174);
      shiftOp();
      setState(175);
      addExpr();
      setState(181);
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

//----------------- ShiftOpContext ------------------------------------------------------------------

TBoxParser::ShiftOpContext::ShiftOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::ShiftOpContext::LeftShift() {
  return getToken(TBoxParser::LeftShift, 0);
}

tree::TerminalNode* TBoxParser::ShiftOpContext::ARightShift() {
  return getToken(TBoxParser::ARightShift, 0);
}

tree::TerminalNode* TBoxParser::ShiftOpContext::LRightShift() {
  return getToken(TBoxParser::LRightShift, 0);
}


size_t TBoxParser::ShiftOpContext::getRuleIndex() const {
  return TBoxParser::RuleShiftOp;
}


antlrcpp::Any TBoxParser::ShiftOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitShiftOp(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ShiftOpContext* TBoxParser::shiftOp() {
  ShiftOpContext *_localctx = _tracker.createInstance<ShiftOpContext>(_ctx, getState());
  enterRule(_localctx, 28, TBoxParser::RuleShiftOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TBoxParser::LeftShift)
      | (1ULL << TBoxParser::ARightShift)
      | (1ULL << TBoxParser::LRightShift))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmpExprContext ------------------------------------------------------------------

TBoxParser::CmpExprContext::CmpExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::ShiftExprContext *> TBoxParser::CmpExprContext::shiftExpr() {
  return getRuleContexts<TBoxParser::ShiftExprContext>();
}

TBoxParser::ShiftExprContext* TBoxParser::CmpExprContext::shiftExpr(size_t i) {
  return getRuleContext<TBoxParser::ShiftExprContext>(i);
}

std::vector<TBoxParser::CmpOpContext *> TBoxParser::CmpExprContext::cmpOp() {
  return getRuleContexts<TBoxParser::CmpOpContext>();
}

TBoxParser::CmpOpContext* TBoxParser::CmpExprContext::cmpOp(size_t i) {
  return getRuleContext<TBoxParser::CmpOpContext>(i);
}


size_t TBoxParser::CmpExprContext::getRuleIndex() const {
  return TBoxParser::RuleCmpExpr;
}


antlrcpp::Any TBoxParser::CmpExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitCmpExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::CmpExprContext* TBoxParser::cmpExpr() {
  CmpExprContext *_localctx = _tracker.createInstance<CmpExprContext>(_ctx, getState());
  enterRule(_localctx, 30, TBoxParser::RuleCmpExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    shiftExpr();
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (TBoxParser::Less - 86))
      | (1ULL << (TBoxParser::LessEqual - 86))
      | (1ULL << (TBoxParser::Greater - 86))
      | (1ULL << (TBoxParser::GreaterEqual - 86))
      | (1ULL << (TBoxParser::Equal - 86))
      | (1ULL << (TBoxParser::NotEqual - 86)))) != 0)) {
      setState(185);
      cmpOp();
      setState(186);
      shiftExpr();
      setState(192);
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

//----------------- CmpOpContext ------------------------------------------------------------------

TBoxParser::CmpOpContext::CmpOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::CmpOpContext::Less() {
  return getToken(TBoxParser::Less, 0);
}

tree::TerminalNode* TBoxParser::CmpOpContext::Greater() {
  return getToken(TBoxParser::Greater, 0);
}

tree::TerminalNode* TBoxParser::CmpOpContext::LessEqual() {
  return getToken(TBoxParser::LessEqual, 0);
}

tree::TerminalNode* TBoxParser::CmpOpContext::GreaterEqual() {
  return getToken(TBoxParser::GreaterEqual, 0);
}

tree::TerminalNode* TBoxParser::CmpOpContext::Equal() {
  return getToken(TBoxParser::Equal, 0);
}

tree::TerminalNode* TBoxParser::CmpOpContext::NotEqual() {
  return getToken(TBoxParser::NotEqual, 0);
}


size_t TBoxParser::CmpOpContext::getRuleIndex() const {
  return TBoxParser::RuleCmpOp;
}


antlrcpp::Any TBoxParser::CmpOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitCmpOp(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::CmpOpContext* TBoxParser::cmpOp() {
  CmpOpContext *_localctx = _tracker.createInstance<CmpOpContext>(_ctx, getState());
  enterRule(_localctx, 32, TBoxParser::RuleCmpOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    _la = _input->LA(1);
    if (!(((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (TBoxParser::Less - 86))
      | (1ULL << (TBoxParser::LessEqual - 86))
      | (1ULL << (TBoxParser::Greater - 86))
      | (1ULL << (TBoxParser::GreaterEqual - 86))
      | (1ULL << (TBoxParser::Equal - 86))
      | (1ULL << (TBoxParser::NotEqual - 86)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExprContext ------------------------------------------------------------------

TBoxParser::AndExprContext::AndExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::CmpExprContext *> TBoxParser::AndExprContext::cmpExpr() {
  return getRuleContexts<TBoxParser::CmpExprContext>();
}

TBoxParser::CmpExprContext* TBoxParser::AndExprContext::cmpExpr(size_t i) {
  return getRuleContext<TBoxParser::CmpExprContext>(i);
}

std::vector<tree::TerminalNode *> TBoxParser::AndExprContext::And() {
  return getTokens(TBoxParser::And);
}

tree::TerminalNode* TBoxParser::AndExprContext::And(size_t i) {
  return getToken(TBoxParser::And, i);
}


size_t TBoxParser::AndExprContext::getRuleIndex() const {
  return TBoxParser::RuleAndExpr;
}


antlrcpp::Any TBoxParser::AndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitAndExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::AndExprContext* TBoxParser::andExpr() {
  AndExprContext *_localctx = _tracker.createInstance<AndExprContext>(_ctx, getState());
  enterRule(_localctx, 34, TBoxParser::RuleAndExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    cmpExpr();
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::And) {
      setState(196);
      match(TBoxParser::And);
      setState(197);
      cmpExpr();
      setState(202);
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

//----------------- XorExprContext ------------------------------------------------------------------

TBoxParser::XorExprContext::XorExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::AndExprContext *> TBoxParser::XorExprContext::andExpr() {
  return getRuleContexts<TBoxParser::AndExprContext>();
}

TBoxParser::AndExprContext* TBoxParser::XorExprContext::andExpr(size_t i) {
  return getRuleContext<TBoxParser::AndExprContext>(i);
}

std::vector<tree::TerminalNode *> TBoxParser::XorExprContext::Xor() {
  return getTokens(TBoxParser::Xor);
}

tree::TerminalNode* TBoxParser::XorExprContext::Xor(size_t i) {
  return getToken(TBoxParser::Xor, i);
}


size_t TBoxParser::XorExprContext::getRuleIndex() const {
  return TBoxParser::RuleXorExpr;
}


antlrcpp::Any TBoxParser::XorExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitXorExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::XorExprContext* TBoxParser::xorExpr() {
  XorExprContext *_localctx = _tracker.createInstance<XorExprContext>(_ctx, getState());
  enterRule(_localctx, 36, TBoxParser::RuleXorExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    andExpr();
    setState(208);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Xor) {
      setState(204);
      match(TBoxParser::Xor);
      setState(205);
      andExpr();
      setState(210);
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

//----------------- OrExprContext ------------------------------------------------------------------

TBoxParser::OrExprContext::OrExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::XorExprContext *> TBoxParser::OrExprContext::xorExpr() {
  return getRuleContexts<TBoxParser::XorExprContext>();
}

TBoxParser::XorExprContext* TBoxParser::OrExprContext::xorExpr(size_t i) {
  return getRuleContext<TBoxParser::XorExprContext>(i);
}

std::vector<tree::TerminalNode *> TBoxParser::OrExprContext::Or() {
  return getTokens(TBoxParser::Or);
}

tree::TerminalNode* TBoxParser::OrExprContext::Or(size_t i) {
  return getToken(TBoxParser::Or, i);
}


size_t TBoxParser::OrExprContext::getRuleIndex() const {
  return TBoxParser::RuleOrExpr;
}


antlrcpp::Any TBoxParser::OrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitOrExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::OrExprContext* TBoxParser::orExpr() {
  OrExprContext *_localctx = _tracker.createInstance<OrExprContext>(_ctx, getState());
  enterRule(_localctx, 38, TBoxParser::RuleOrExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    xorExpr();
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Or) {
      setState(212);
      match(TBoxParser::Or);
      setState(213);
      xorExpr();
      setState(218);
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

//----------------- LogicAndExprContext ------------------------------------------------------------------

TBoxParser::LogicAndExprContext::LogicAndExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::OrExprContext *> TBoxParser::LogicAndExprContext::orExpr() {
  return getRuleContexts<TBoxParser::OrExprContext>();
}

TBoxParser::OrExprContext* TBoxParser::LogicAndExprContext::orExpr(size_t i) {
  return getRuleContext<TBoxParser::OrExprContext>(i);
}

std::vector<tree::TerminalNode *> TBoxParser::LogicAndExprContext::LogicAnd() {
  return getTokens(TBoxParser::LogicAnd);
}

tree::TerminalNode* TBoxParser::LogicAndExprContext::LogicAnd(size_t i) {
  return getToken(TBoxParser::LogicAnd, i);
}


size_t TBoxParser::LogicAndExprContext::getRuleIndex() const {
  return TBoxParser::RuleLogicAndExpr;
}


antlrcpp::Any TBoxParser::LogicAndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitLogicAndExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::LogicAndExprContext* TBoxParser::logicAndExpr() {
  LogicAndExprContext *_localctx = _tracker.createInstance<LogicAndExprContext>(_ctx, getState());
  enterRule(_localctx, 40, TBoxParser::RuleLogicAndExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    orExpr();
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::LogicAnd) {
      setState(220);
      match(TBoxParser::LogicAnd);
      setState(221);
      orExpr();
      setState(226);
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

//----------------- LogicOrExprContext ------------------------------------------------------------------

TBoxParser::LogicOrExprContext::LogicOrExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::LogicAndExprContext *> TBoxParser::LogicOrExprContext::logicAndExpr() {
  return getRuleContexts<TBoxParser::LogicAndExprContext>();
}

TBoxParser::LogicAndExprContext* TBoxParser::LogicOrExprContext::logicAndExpr(size_t i) {
  return getRuleContext<TBoxParser::LogicAndExprContext>(i);
}

std::vector<tree::TerminalNode *> TBoxParser::LogicOrExprContext::LogicOr() {
  return getTokens(TBoxParser::LogicOr);
}

tree::TerminalNode* TBoxParser::LogicOrExprContext::LogicOr(size_t i) {
  return getToken(TBoxParser::LogicOr, i);
}


size_t TBoxParser::LogicOrExprContext::getRuleIndex() const {
  return TBoxParser::RuleLogicOrExpr;
}


antlrcpp::Any TBoxParser::LogicOrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitLogicOrExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::LogicOrExprContext* TBoxParser::logicOrExpr() {
  LogicOrExprContext *_localctx = _tracker.createInstance<LogicOrExprContext>(_ctx, getState());
  enterRule(_localctx, 42, TBoxParser::RuleLogicOrExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    logicAndExpr();
    setState(232);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::LogicOr) {
      setState(228);
      match(TBoxParser::LogicOr);
      setState(229);
      logicAndExpr();
      setState(234);
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

//----------------- QuesExprContext ------------------------------------------------------------------

TBoxParser::QuesExprContext::QuesExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::LogicOrExprContext* TBoxParser::QuesExprContext::logicOrExpr() {
  return getRuleContext<TBoxParser::LogicOrExprContext>(0);
}

tree::TerminalNode* TBoxParser::QuesExprContext::Question() {
  return getToken(TBoxParser::Question, 0);
}

TBoxParser::ExprContext* TBoxParser::QuesExprContext::expr() {
  return getRuleContext<TBoxParser::ExprContext>(0);
}

tree::TerminalNode* TBoxParser::QuesExprContext::Colon() {
  return getToken(TBoxParser::Colon, 0);
}

TBoxParser::QuesExprContext* TBoxParser::QuesExprContext::quesExpr() {
  return getRuleContext<TBoxParser::QuesExprContext>(0);
}


size_t TBoxParser::QuesExprContext::getRuleIndex() const {
  return TBoxParser::RuleQuesExpr;
}


antlrcpp::Any TBoxParser::QuesExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitQuesExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::QuesExprContext* TBoxParser::quesExpr() {
  QuesExprContext *_localctx = _tracker.createInstance<QuesExprContext>(_ctx, getState());
  enterRule(_localctx, 44, TBoxParser::RuleQuesExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    logicOrExpr();
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TBoxParser::Question) {
      setState(236);
      match(TBoxParser::Question);
      setState(237);
      expr();
      setState(238);
      match(TBoxParser::Colon);
      setState(239);
      quesExpr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignExprContext ------------------------------------------------------------------

TBoxParser::AssignExprContext::AssignExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::ConstantContext* TBoxParser::AssignExprContext::constant() {
  return getRuleContext<TBoxParser::ConstantContext>(0);
}

TBoxParser::PostExprContext* TBoxParser::AssignExprContext::postExpr() {
  return getRuleContext<TBoxParser::PostExprContext>(0);
}

TBoxParser::AssignOpContext* TBoxParser::AssignExprContext::assignOp() {
  return getRuleContext<TBoxParser::AssignOpContext>(0);
}

TBoxParser::AssignExprContext* TBoxParser::AssignExprContext::assignExpr() {
  return getRuleContext<TBoxParser::AssignExprContext>(0);
}

TBoxParser::QuesExprContext* TBoxParser::AssignExprContext::quesExpr() {
  return getRuleContext<TBoxParser::QuesExprContext>(0);
}


size_t TBoxParser::AssignExprContext::getRuleIndex() const {
  return TBoxParser::RuleAssignExpr;
}


antlrcpp::Any TBoxParser::AssignExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitAssignExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::AssignExprContext* TBoxParser::assignExpr() {
  AssignExprContext *_localctx = _tracker.createInstance<AssignExprContext>(_ctx, getState());
  enterRule(_localctx, 46, TBoxParser::RuleAssignExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(249);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(243);
      constant();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(244);
      postExpr();
      setState(245);
      assignOp();
      setState(246);
      assignExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(248);
      quesExpr();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignOpContext ------------------------------------------------------------------

TBoxParser::AssignOpContext::AssignOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::AssignOpContext::Assign() {
  return getToken(TBoxParser::Assign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::MulAssign() {
  return getToken(TBoxParser::MulAssign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::DivAssign() {
  return getToken(TBoxParser::DivAssign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::ModAssign() {
  return getToken(TBoxParser::ModAssign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::PlusAssign() {
  return getToken(TBoxParser::PlusAssign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::MinusAssign() {
  return getToken(TBoxParser::MinusAssign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::LeftShiftAssign() {
  return getToken(TBoxParser::LeftShiftAssign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::ARightShiftAssign() {
  return getToken(TBoxParser::ARightShiftAssign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::AndAssign() {
  return getToken(TBoxParser::AndAssign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::XorAssign() {
  return getToken(TBoxParser::XorAssign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::OrAssign() {
  return getToken(TBoxParser::OrAssign, 0);
}

tree::TerminalNode* TBoxParser::AssignOpContext::LRightShiftAssign() {
  return getToken(TBoxParser::LRightShiftAssign, 0);
}


size_t TBoxParser::AssignOpContext::getRuleIndex() const {
  return TBoxParser::RuleAssignOp;
}


antlrcpp::Any TBoxParser::AssignOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitAssignOp(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::AssignOpContext* TBoxParser::assignOp() {
  AssignOpContext *_localctx = _tracker.createInstance<AssignOpContext>(_ctx, getState());
  enterRule(_localctx, 48, TBoxParser::RuleAssignOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    _la = _input->LA(1);
    if (!(((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (TBoxParser::Assign - 74))
      | (1ULL << (TBoxParser::MulAssign - 74))
      | (1ULL << (TBoxParser::DivAssign - 74))
      | (1ULL << (TBoxParser::ModAssign - 74))
      | (1ULL << (TBoxParser::PlusAssign - 74))
      | (1ULL << (TBoxParser::MinusAssign - 74))
      | (1ULL << (TBoxParser::LeftShiftAssign - 74))
      | (1ULL << (TBoxParser::ARightShiftAssign - 74))
      | (1ULL << (TBoxParser::LRightShiftAssign - 74))
      | (1ULL << (TBoxParser::AndAssign - 74))
      | (1ULL << (TBoxParser::XorAssign - 74))
      | (1ULL << (TBoxParser::OrAssign - 74)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

TBoxParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::ExprContext *> TBoxParser::ArgsContext::expr() {
  return getRuleContexts<TBoxParser::ExprContext>();
}

TBoxParser::ExprContext* TBoxParser::ArgsContext::expr(size_t i) {
  return getRuleContext<TBoxParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> TBoxParser::ArgsContext::Comma() {
  return getTokens(TBoxParser::Comma);
}

tree::TerminalNode* TBoxParser::ArgsContext::Comma(size_t i) {
  return getToken(TBoxParser::Comma, i);
}


size_t TBoxParser::ArgsContext::getRuleIndex() const {
  return TBoxParser::RuleArgs;
}


antlrcpp::Any TBoxParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ArgsContext* TBoxParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 50, TBoxParser::RuleArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 51) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 51)) & ((1ULL << (TBoxParser::LeftParen - 51))
      | (1ULL << (TBoxParser::Increase - 51))
      | (1ULL << (TBoxParser::Minus - 51))
      | (1ULL << (TBoxParser::Decrease - 51))
      | (1ULL << (TBoxParser::Not - 51))
      | (1ULL << (TBoxParser::Tilde - 51))
      | (1ULL << (TBoxParser::BinNum - 51))
      | (1ULL << (TBoxParser::OctNum - 51))
      | (1ULL << (TBoxParser::DecNum - 51))
      | (1ULL << (TBoxParser::HexNum - 51))
      | (1ULL << (TBoxParser::FloatNum - 51))
      | (1ULL << (TBoxParser::Identifier - 51))
      | (1ULL << (TBoxParser::StringConstant - 51)))) != 0)) {
      setState(253);
      expr();
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TBoxParser::Comma) {
        setState(254);
        match(TBoxParser::Comma);
        setState(255);
        expr();
        setState(260);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

TBoxParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::AssignExprContext* TBoxParser::ExprContext::assignExpr() {
  return getRuleContext<TBoxParser::AssignExprContext>(0);
}


size_t TBoxParser::ExprContext::getRuleIndex() const {
  return TBoxParser::RuleExpr;
}


antlrcpp::Any TBoxParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ExprContext* TBoxParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 52, TBoxParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    assignExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LibraryContext ------------------------------------------------------------------

TBoxParser::LibraryContext::LibraryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TBoxParser::LibraryContext::Identifier() {
  return getTokens(TBoxParser::Identifier);
}

tree::TerminalNode* TBoxParser::LibraryContext::Identifier(size_t i) {
  return getToken(TBoxParser::Identifier, i);
}

std::vector<tree::TerminalNode *> TBoxParser::LibraryContext::Dot() {
  return getTokens(TBoxParser::Dot);
}

tree::TerminalNode* TBoxParser::LibraryContext::Dot(size_t i) {
  return getToken(TBoxParser::Dot, i);
}


size_t TBoxParser::LibraryContext::getRuleIndex() const {
  return TBoxParser::RuleLibrary;
}


antlrcpp::Any TBoxParser::LibraryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitLibrary(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::LibraryContext* TBoxParser::library() {
  LibraryContext *_localctx = _tracker.createInstance<LibraryContext>(_ctx, getState());
  enterRule(_localctx, 54, TBoxParser::RuleLibrary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(TBoxParser::Identifier);
    setState(270);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(266);
        match(TBoxParser::Dot);
        setState(267);
        match(TBoxParser::Identifier); 
      }
      setState(272);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStmtContext ------------------------------------------------------------------

TBoxParser::ImportStmtContext::ImportStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::ImportStmtContext::Import() {
  return getToken(TBoxParser::Import, 0);
}

TBoxParser::LibraryContext* TBoxParser::ImportStmtContext::library() {
  return getRuleContext<TBoxParser::LibraryContext>(0);
}

tree::TerminalNode* TBoxParser::ImportStmtContext::SemiColon() {
  return getToken(TBoxParser::SemiColon, 0);
}


size_t TBoxParser::ImportStmtContext::getRuleIndex() const {
  return TBoxParser::RuleImportStmt;
}


antlrcpp::Any TBoxParser::ImportStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitImportStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ImportStmtContext* TBoxParser::importStmt() {
  ImportStmtContext *_localctx = _tracker.createInstance<ImportStmtContext>(_ctx, getState());
  enterRule(_localctx, 56, TBoxParser::RuleImportStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(TBoxParser::Import);
    setState(274);
    library();
    setState(275);
    match(TBoxParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

TBoxParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::TypeContext::Num() {
  return getToken(TBoxParser::Num, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Byte() {
  return getToken(TBoxParser::Byte, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Short() {
  return getToken(TBoxParser::Short, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Int() {
  return getToken(TBoxParser::Int, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Long() {
  return getToken(TBoxParser::Long, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Bool() {
  return getToken(TBoxParser::Bool, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::String() {
  return getToken(TBoxParser::String, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Float() {
  return getToken(TBoxParser::Float, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Double() {
  return getToken(TBoxParser::Double, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Char() {
  return getToken(TBoxParser::Char, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Var() {
  return getToken(TBoxParser::Var, 0);
}

TBoxParser::LibraryContext* TBoxParser::TypeContext::library() {
  return getRuleContext<TBoxParser::LibraryContext>(0);
}

TBoxParser::TypeContext* TBoxParser::TypeContext::type() {
  return getRuleContext<TBoxParser::TypeContext>(0);
}


size_t TBoxParser::TypeContext::getRuleIndex() const {
  return TBoxParser::RuleType;
}


antlrcpp::Any TBoxParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}


TBoxParser::TypeContext* TBoxParser::type() {
   return type(0);
}

TBoxParser::TypeContext* TBoxParser::type(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TBoxParser::TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, parentState);
  TBoxParser::TypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, TBoxParser::RuleType, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(290);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::Num: {
        setState(278);
        match(TBoxParser::Num);
        break;
      }

      case TBoxParser::Byte: {
        setState(279);
        match(TBoxParser::Byte);
        break;
      }

      case TBoxParser::Short: {
        setState(280);
        match(TBoxParser::Short);
        break;
      }

      case TBoxParser::Int: {
        setState(281);
        match(TBoxParser::Int);
        break;
      }

      case TBoxParser::Long: {
        setState(282);
        match(TBoxParser::Long);
        break;
      }

      case TBoxParser::Bool: {
        setState(283);
        match(TBoxParser::Bool);
        break;
      }

      case TBoxParser::String: {
        setState(284);
        match(TBoxParser::String);
        break;
      }

      case TBoxParser::Float: {
        setState(285);
        match(TBoxParser::Float);
        break;
      }

      case TBoxParser::Double: {
        setState(286);
        match(TBoxParser::Double);
        break;
      }

      case TBoxParser::Char: {
        setState(287);
        match(TBoxParser::Char);
        break;
      }

      case TBoxParser::Var: {
        setState(288);
        match(TBoxParser::Var);
        break;
      }

      case TBoxParser::Identifier: {
        setState(289);
        library();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(296);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleType);
        setState(292);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(293);
        match(TBoxParser::T__0); 
      }
      setState(298);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArgsNeedContext ------------------------------------------------------------------

TBoxParser::ArgsNeedContext::ArgsNeedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::TypeContext *> TBoxParser::ArgsNeedContext::type() {
  return getRuleContexts<TBoxParser::TypeContext>();
}

TBoxParser::TypeContext* TBoxParser::ArgsNeedContext::type(size_t i) {
  return getRuleContext<TBoxParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> TBoxParser::ArgsNeedContext::Identifier() {
  return getTokens(TBoxParser::Identifier);
}

tree::TerminalNode* TBoxParser::ArgsNeedContext::Identifier(size_t i) {
  return getToken(TBoxParser::Identifier, i);
}

std::vector<tree::TerminalNode *> TBoxParser::ArgsNeedContext::Comma() {
  return getTokens(TBoxParser::Comma);
}

tree::TerminalNode* TBoxParser::ArgsNeedContext::Comma(size_t i) {
  return getToken(TBoxParser::Comma, i);
}


size_t TBoxParser::ArgsNeedContext::getRuleIndex() const {
  return TBoxParser::RuleArgsNeed;
}


antlrcpp::Any TBoxParser::ArgsNeedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitArgsNeed(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ArgsNeedContext* TBoxParser::argsNeed() {
  ArgsNeedContext *_localctx = _tracker.createInstance<ArgsNeedContext>(_ctx, getState());
  enterRule(_localctx, 60, TBoxParser::RuleArgsNeed);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TBoxParser::Num)
      | (1ULL << TBoxParser::Byte)
      | (1ULL << TBoxParser::Short)
      | (1ULL << TBoxParser::Int)
      | (1ULL << TBoxParser::Long)
      | (1ULL << TBoxParser::Float)
      | (1ULL << TBoxParser::Double)
      | (1ULL << TBoxParser::Bool)
      | (1ULL << TBoxParser::String)
      | (1ULL << TBoxParser::Char)
      | (1ULL << TBoxParser::Var))) != 0) || _la == TBoxParser::Identifier) {
      setState(299);
      type(0);
      setState(300);
      match(TBoxParser::Identifier);
      setState(307);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TBoxParser::Comma) {
        setState(301);
        match(TBoxParser::Comma);
        setState(302);
        type(0);
        setState(303);
        match(TBoxParser::Identifier);
        setState(309);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

TBoxParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::StmtContext *> TBoxParser::ProgramContext::stmt() {
  return getRuleContexts<TBoxParser::StmtContext>();
}

TBoxParser::StmtContext* TBoxParser::ProgramContext::stmt(size_t i) {
  return getRuleContext<TBoxParser::StmtContext>(i);
}


size_t TBoxParser::ProgramContext::getRuleIndex() const {
  return TBoxParser::RuleProgram;
}


antlrcpp::Any TBoxParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ProgramContext* TBoxParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 62, TBoxParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TBoxParser::If)
      | (1ULL << TBoxParser::For)
      | (1ULL << TBoxParser::While)
      | (1ULL << TBoxParser::Do)
      | (1ULL << TBoxParser::Break)
      | (1ULL << TBoxParser::Return)
      | (1ULL << TBoxParser::Num)
      | (1ULL << TBoxParser::Byte)
      | (1ULL << TBoxParser::Short)
      | (1ULL << TBoxParser::Int)
      | (1ULL << TBoxParser::Long)
      | (1ULL << TBoxParser::Float)
      | (1ULL << TBoxParser::Double)
      | (1ULL << TBoxParser::Bool)
      | (1ULL << TBoxParser::String)
      | (1ULL << TBoxParser::Char)
      | (1ULL << TBoxParser::Var)
      | (1ULL << TBoxParser::SemiColon)
      | (1ULL << TBoxParser::LeftParen)
      | (1ULL << TBoxParser::Increase)
      | (1ULL << TBoxParser::Minus)
      | (1ULL << TBoxParser::Decrease))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (TBoxParser::Not - 72))
      | (1ULL << (TBoxParser::Tilde - 72))
      | (1ULL << (TBoxParser::BinNum - 72))
      | (1ULL << (TBoxParser::OctNum - 72))
      | (1ULL << (TBoxParser::DecNum - 72))
      | (1ULL << (TBoxParser::HexNum - 72))
      | (1ULL << (TBoxParser::FloatNum - 72))
      | (1ULL << (TBoxParser::Identifier - 72))
      | (1ULL << (TBoxParser::StringConstant - 72)))) != 0)) {
      setState(312);
      stmt();
      setState(317);
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

//----------------- StmtContext ------------------------------------------------------------------

TBoxParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::ExprContext* TBoxParser::StmtContext::expr() {
  return getRuleContext<TBoxParser::ExprContext>(0);
}

tree::TerminalNode* TBoxParser::StmtContext::SemiColon() {
  return getToken(TBoxParser::SemiColon, 0);
}

TBoxParser::DefVarStmtContext* TBoxParser::StmtContext::defVarStmt() {
  return getRuleContext<TBoxParser::DefVarStmtContext>(0);
}

TBoxParser::ReturnStmtContext* TBoxParser::StmtContext::returnStmt() {
  return getRuleContext<TBoxParser::ReturnStmtContext>(0);
}

TBoxParser::IfStmtContext* TBoxParser::StmtContext::ifStmt() {
  return getRuleContext<TBoxParser::IfStmtContext>(0);
}

TBoxParser::ForStmtContext* TBoxParser::StmtContext::forStmt() {
  return getRuleContext<TBoxParser::ForStmtContext>(0);
}

TBoxParser::WhileStmtContext* TBoxParser::StmtContext::whileStmt() {
  return getRuleContext<TBoxParser::WhileStmtContext>(0);
}

TBoxParser::DoWhileStmtContext* TBoxParser::StmtContext::doWhileStmt() {
  return getRuleContext<TBoxParser::DoWhileStmtContext>(0);
}

TBoxParser::BreakStmtContext* TBoxParser::StmtContext::breakStmt() {
  return getRuleContext<TBoxParser::BreakStmtContext>(0);
}


size_t TBoxParser::StmtContext::getRuleIndex() const {
  return TBoxParser::RuleStmt;
}


antlrcpp::Any TBoxParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::StmtContext* TBoxParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 64, TBoxParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(329);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(318);
      expr();
      setState(319);
      match(TBoxParser::SemiColon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(321);
      match(TBoxParser::SemiColon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(322);
      defVarStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(323);
      returnStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(324);
      ifStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(325);
      forStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(326);
      whileStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(327);
      doWhileStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(328);
      breakStmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

TBoxParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::ReturnStmtContext::Return() {
  return getToken(TBoxParser::Return, 0);
}

tree::TerminalNode* TBoxParser::ReturnStmtContext::SemiColon() {
  return getToken(TBoxParser::SemiColon, 0);
}

TBoxParser::ExprContext* TBoxParser::ReturnStmtContext::expr() {
  return getRuleContext<TBoxParser::ExprContext>(0);
}


size_t TBoxParser::ReturnStmtContext::getRuleIndex() const {
  return TBoxParser::RuleReturnStmt;
}


antlrcpp::Any TBoxParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ReturnStmtContext* TBoxParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 66, TBoxParser::RuleReturnStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(TBoxParser::Return);
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 51) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 51)) & ((1ULL << (TBoxParser::LeftParen - 51))
      | (1ULL << (TBoxParser::Increase - 51))
      | (1ULL << (TBoxParser::Minus - 51))
      | (1ULL << (TBoxParser::Decrease - 51))
      | (1ULL << (TBoxParser::Not - 51))
      | (1ULL << (TBoxParser::Tilde - 51))
      | (1ULL << (TBoxParser::BinNum - 51))
      | (1ULL << (TBoxParser::OctNum - 51))
      | (1ULL << (TBoxParser::DecNum - 51))
      | (1ULL << (TBoxParser::HexNum - 51))
      | (1ULL << (TBoxParser::FloatNum - 51))
      | (1ULL << (TBoxParser::Identifier - 51))
      | (1ULL << (TBoxParser::StringConstant - 51)))) != 0)) {
      setState(332);
      expr();
    }
    setState(335);
    match(TBoxParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefVarStmtContext ------------------------------------------------------------------

TBoxParser::DefVarStmtContext::DefVarStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::TypeContext* TBoxParser::DefVarStmtContext::type() {
  return getRuleContext<TBoxParser::TypeContext>(0);
}

tree::TerminalNode* TBoxParser::DefVarStmtContext::Identifier() {
  return getToken(TBoxParser::Identifier, 0);
}

tree::TerminalNode* TBoxParser::DefVarStmtContext::SemiColon() {
  return getToken(TBoxParser::SemiColon, 0);
}

tree::TerminalNode* TBoxParser::DefVarStmtContext::Assign() {
  return getToken(TBoxParser::Assign, 0);
}

TBoxParser::ExprContext* TBoxParser::DefVarStmtContext::expr() {
  return getRuleContext<TBoxParser::ExprContext>(0);
}


size_t TBoxParser::DefVarStmtContext::getRuleIndex() const {
  return TBoxParser::RuleDefVarStmt;
}


antlrcpp::Any TBoxParser::DefVarStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitDefVarStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::DefVarStmtContext* TBoxParser::defVarStmt() {
  DefVarStmtContext *_localctx = _tracker.createInstance<DefVarStmtContext>(_ctx, getState());
  enterRule(_localctx, 68, TBoxParser::RuleDefVarStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    type(0);
    setState(338);
    match(TBoxParser::Identifier);
    setState(341);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TBoxParser::Assign) {
      setState(339);
      match(TBoxParser::Assign);
      setState(340);
      expr();
    }
    setState(343);
    match(TBoxParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtBodyContext ------------------------------------------------------------------

TBoxParser::StmtBodyContext::StmtBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::StmtBodyContext::LeftBrace() {
  return getToken(TBoxParser::LeftBrace, 0);
}

TBoxParser::ProgramContext* TBoxParser::StmtBodyContext::program() {
  return getRuleContext<TBoxParser::ProgramContext>(0);
}

tree::TerminalNode* TBoxParser::StmtBodyContext::RightBrace() {
  return getToken(TBoxParser::RightBrace, 0);
}

TBoxParser::StmtContext* TBoxParser::StmtBodyContext::stmt() {
  return getRuleContext<TBoxParser::StmtContext>(0);
}


size_t TBoxParser::StmtBodyContext::getRuleIndex() const {
  return TBoxParser::RuleStmtBody;
}


antlrcpp::Any TBoxParser::StmtBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitStmtBody(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::StmtBodyContext* TBoxParser::stmtBody() {
  StmtBodyContext *_localctx = _tracker.createInstance<StmtBodyContext>(_ctx, getState());
  enterRule(_localctx, 70, TBoxParser::RuleStmtBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(350);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::LeftBrace: {
        enterOuterAlt(_localctx, 1);
        setState(345);
        match(TBoxParser::LeftBrace);
        setState(346);
        program();
        setState(347);
        match(TBoxParser::RightBrace);
        break;
      }

      case TBoxParser::If:
      case TBoxParser::For:
      case TBoxParser::While:
      case TBoxParser::Do:
      case TBoxParser::Break:
      case TBoxParser::Return:
      case TBoxParser::Num:
      case TBoxParser::Byte:
      case TBoxParser::Short:
      case TBoxParser::Int:
      case TBoxParser::Long:
      case TBoxParser::Float:
      case TBoxParser::Double:
      case TBoxParser::Bool:
      case TBoxParser::String:
      case TBoxParser::Char:
      case TBoxParser::Var:
      case TBoxParser::SemiColon:
      case TBoxParser::LeftParen:
      case TBoxParser::Increase:
      case TBoxParser::Minus:
      case TBoxParser::Decrease:
      case TBoxParser::Not:
      case TBoxParser::Tilde:
      case TBoxParser::BinNum:
      case TBoxParser::OctNum:
      case TBoxParser::DecNum:
      case TBoxParser::HexNum:
      case TBoxParser::FloatNum:
      case TBoxParser::Identifier:
      case TBoxParser::StringConstant: {
        enterOuterAlt(_localctx, 2);
        setState(349);
        stmt();
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

//----------------- IfStmtContext ------------------------------------------------------------------

TBoxParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::IfStmtContext::If() {
  return getToken(TBoxParser::If, 0);
}

std::vector<tree::TerminalNode *> TBoxParser::IfStmtContext::LeftParen() {
  return getTokens(TBoxParser::LeftParen);
}

tree::TerminalNode* TBoxParser::IfStmtContext::LeftParen(size_t i) {
  return getToken(TBoxParser::LeftParen, i);
}

std::vector<TBoxParser::LogicOrExprContext *> TBoxParser::IfStmtContext::logicOrExpr() {
  return getRuleContexts<TBoxParser::LogicOrExprContext>();
}

TBoxParser::LogicOrExprContext* TBoxParser::IfStmtContext::logicOrExpr(size_t i) {
  return getRuleContext<TBoxParser::LogicOrExprContext>(i);
}

std::vector<tree::TerminalNode *> TBoxParser::IfStmtContext::RightParen() {
  return getTokens(TBoxParser::RightParen);
}

tree::TerminalNode* TBoxParser::IfStmtContext::RightParen(size_t i) {
  return getToken(TBoxParser::RightParen, i);
}

std::vector<TBoxParser::StmtBodyContext *> TBoxParser::IfStmtContext::stmtBody() {
  return getRuleContexts<TBoxParser::StmtBodyContext>();
}

TBoxParser::StmtBodyContext* TBoxParser::IfStmtContext::stmtBody(size_t i) {
  return getRuleContext<TBoxParser::StmtBodyContext>(i);
}

std::vector<tree::TerminalNode *> TBoxParser::IfStmtContext::Elif() {
  return getTokens(TBoxParser::Elif);
}

tree::TerminalNode* TBoxParser::IfStmtContext::Elif(size_t i) {
  return getToken(TBoxParser::Elif, i);
}

tree::TerminalNode* TBoxParser::IfStmtContext::Else() {
  return getToken(TBoxParser::Else, 0);
}


size_t TBoxParser::IfStmtContext::getRuleIndex() const {
  return TBoxParser::RuleIfStmt;
}


antlrcpp::Any TBoxParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::IfStmtContext* TBoxParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 72, TBoxParser::RuleIfStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(352);
    match(TBoxParser::If);
    setState(353);
    match(TBoxParser::LeftParen);
    setState(354);
    logicOrExpr();
    setState(355);
    match(TBoxParser::RightParen);
    setState(356);
    stmtBody();
    setState(365);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(357);
        match(TBoxParser::Elif);
        setState(358);
        match(TBoxParser::LeftParen);
        setState(359);
        logicOrExpr();
        setState(360);
        match(TBoxParser::RightParen);
        setState(361);
        stmtBody(); 
      }
      setState(367);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
    setState(370);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(368);
      match(TBoxParser::Else);
      setState(369);
      stmtBody();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

TBoxParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::ForStmtContext::For() {
  return getToken(TBoxParser::For, 0);
}

tree::TerminalNode* TBoxParser::ForStmtContext::LeftParen() {
  return getToken(TBoxParser::LeftParen, 0);
}

TBoxParser::StmtContext* TBoxParser::ForStmtContext::stmt() {
  return getRuleContext<TBoxParser::StmtContext>(0);
}

TBoxParser::LogicOrExprContext* TBoxParser::ForStmtContext::logicOrExpr() {
  return getRuleContext<TBoxParser::LogicOrExprContext>(0);
}

tree::TerminalNode* TBoxParser::ForStmtContext::SemiColon() {
  return getToken(TBoxParser::SemiColon, 0);
}

TBoxParser::ExprContext* TBoxParser::ForStmtContext::expr() {
  return getRuleContext<TBoxParser::ExprContext>(0);
}

tree::TerminalNode* TBoxParser::ForStmtContext::RightParen() {
  return getToken(TBoxParser::RightParen, 0);
}

TBoxParser::StmtBodyContext* TBoxParser::ForStmtContext::stmtBody() {
  return getRuleContext<TBoxParser::StmtBodyContext>(0);
}


size_t TBoxParser::ForStmtContext::getRuleIndex() const {
  return TBoxParser::RuleForStmt;
}


antlrcpp::Any TBoxParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ForStmtContext* TBoxParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 74, TBoxParser::RuleForStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    match(TBoxParser::For);
    setState(373);
    match(TBoxParser::LeftParen);
    setState(374);
    stmt();
    setState(375);
    logicOrExpr();
    setState(376);
    match(TBoxParser::SemiColon);
    setState(377);
    expr();
    setState(378);
    match(TBoxParser::RightParen);
    setState(379);
    stmtBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

TBoxParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::WhileStmtContext::While() {
  return getToken(TBoxParser::While, 0);
}

tree::TerminalNode* TBoxParser::WhileStmtContext::LeftParen() {
  return getToken(TBoxParser::LeftParen, 0);
}

TBoxParser::LogicOrExprContext* TBoxParser::WhileStmtContext::logicOrExpr() {
  return getRuleContext<TBoxParser::LogicOrExprContext>(0);
}

tree::TerminalNode* TBoxParser::WhileStmtContext::RightParen() {
  return getToken(TBoxParser::RightParen, 0);
}

TBoxParser::StmtBodyContext* TBoxParser::WhileStmtContext::stmtBody() {
  return getRuleContext<TBoxParser::StmtBodyContext>(0);
}


size_t TBoxParser::WhileStmtContext::getRuleIndex() const {
  return TBoxParser::RuleWhileStmt;
}


antlrcpp::Any TBoxParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::WhileStmtContext* TBoxParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 76, TBoxParser::RuleWhileStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    match(TBoxParser::While);
    setState(382);
    match(TBoxParser::LeftParen);
    setState(383);
    logicOrExpr();
    setState(384);
    match(TBoxParser::RightParen);
    setState(385);
    stmtBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoWhileStmtContext ------------------------------------------------------------------

TBoxParser::DoWhileStmtContext::DoWhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::DoWhileStmtContext::Do() {
  return getToken(TBoxParser::Do, 0);
}

tree::TerminalNode* TBoxParser::DoWhileStmtContext::LeftBrace() {
  return getToken(TBoxParser::LeftBrace, 0);
}

TBoxParser::ProgramContext* TBoxParser::DoWhileStmtContext::program() {
  return getRuleContext<TBoxParser::ProgramContext>(0);
}

tree::TerminalNode* TBoxParser::DoWhileStmtContext::RightBrace() {
  return getToken(TBoxParser::RightBrace, 0);
}

tree::TerminalNode* TBoxParser::DoWhileStmtContext::While() {
  return getToken(TBoxParser::While, 0);
}

tree::TerminalNode* TBoxParser::DoWhileStmtContext::LeftParen() {
  return getToken(TBoxParser::LeftParen, 0);
}

TBoxParser::LogicOrExprContext* TBoxParser::DoWhileStmtContext::logicOrExpr() {
  return getRuleContext<TBoxParser::LogicOrExprContext>(0);
}

tree::TerminalNode* TBoxParser::DoWhileStmtContext::RightParen() {
  return getToken(TBoxParser::RightParen, 0);
}

tree::TerminalNode* TBoxParser::DoWhileStmtContext::SemiColon() {
  return getToken(TBoxParser::SemiColon, 0);
}


size_t TBoxParser::DoWhileStmtContext::getRuleIndex() const {
  return TBoxParser::RuleDoWhileStmt;
}


antlrcpp::Any TBoxParser::DoWhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitDoWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::DoWhileStmtContext* TBoxParser::doWhileStmt() {
  DoWhileStmtContext *_localctx = _tracker.createInstance<DoWhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 78, TBoxParser::RuleDoWhileStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    match(TBoxParser::Do);
    setState(388);
    match(TBoxParser::LeftBrace);
    setState(389);
    program();
    setState(390);
    match(TBoxParser::RightBrace);
    setState(391);
    match(TBoxParser::While);
    setState(392);
    match(TBoxParser::LeftParen);
    setState(393);
    logicOrExpr();
    setState(394);
    match(TBoxParser::RightParen);
    setState(395);
    match(TBoxParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStmtContext ------------------------------------------------------------------

TBoxParser::BreakStmtContext::BreakStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::BreakStmtContext::Break() {
  return getToken(TBoxParser::Break, 0);
}

tree::TerminalNode* TBoxParser::BreakStmtContext::SemiColon() {
  return getToken(TBoxParser::SemiColon, 0);
}


size_t TBoxParser::BreakStmtContext::getRuleIndex() const {
  return TBoxParser::RuleBreakStmt;
}


antlrcpp::Any TBoxParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::BreakStmtContext* TBoxParser::breakStmt() {
  BreakStmtContext *_localctx = _tracker.createInstance<BreakStmtContext>(_ctx, getState());
  enterRule(_localctx, 80, TBoxParser::RuleBreakStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    match(TBoxParser::Break);
    setState(398);
    match(TBoxParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefFuncStmtContext ------------------------------------------------------------------

TBoxParser::DefFuncStmtContext::DefFuncStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::DefFuncStmtContext::Func() {
  return getToken(TBoxParser::Func, 0);
}

tree::TerminalNode* TBoxParser::DefFuncStmtContext::Identifier() {
  return getToken(TBoxParser::Identifier, 0);
}

tree::TerminalNode* TBoxParser::DefFuncStmtContext::LeftParen() {
  return getToken(TBoxParser::LeftParen, 0);
}

TBoxParser::ArgsNeedContext* TBoxParser::DefFuncStmtContext::argsNeed() {
  return getRuleContext<TBoxParser::ArgsNeedContext>(0);
}

tree::TerminalNode* TBoxParser::DefFuncStmtContext::RightParen() {
  return getToken(TBoxParser::RightParen, 0);
}

tree::TerminalNode* TBoxParser::DefFuncStmtContext::LeftBrace() {
  return getToken(TBoxParser::LeftBrace, 0);
}

TBoxParser::ProgramContext* TBoxParser::DefFuncStmtContext::program() {
  return getRuleContext<TBoxParser::ProgramContext>(0);
}

tree::TerminalNode* TBoxParser::DefFuncStmtContext::RightBrace() {
  return getToken(TBoxParser::RightBrace, 0);
}

tree::TerminalNode* TBoxParser::DefFuncStmtContext::Export() {
  return getToken(TBoxParser::Export, 0);
}

tree::TerminalNode* TBoxParser::DefFuncStmtContext::Colon() {
  return getToken(TBoxParser::Colon, 0);
}

TBoxParser::TypeContext* TBoxParser::DefFuncStmtContext::type() {
  return getRuleContext<TBoxParser::TypeContext>(0);
}


size_t TBoxParser::DefFuncStmtContext::getRuleIndex() const {
  return TBoxParser::RuleDefFuncStmt;
}


antlrcpp::Any TBoxParser::DefFuncStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitDefFuncStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::DefFuncStmtContext* TBoxParser::defFuncStmt() {
  DefFuncStmtContext *_localctx = _tracker.createInstance<DefFuncStmtContext>(_ctx, getState());
  enterRule(_localctx, 82, TBoxParser::RuleDefFuncStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TBoxParser::Export) {
      setState(400);
      match(TBoxParser::Export);
    }
    setState(403);
    match(TBoxParser::Func);
    setState(404);
    match(TBoxParser::Identifier);
    setState(405);
    match(TBoxParser::LeftParen);
    setState(406);
    argsNeed();
    setState(407);
    match(TBoxParser::RightParen);
    setState(410);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TBoxParser::Colon) {
      setState(408);
      match(TBoxParser::Colon);
      setState(409);
      type(0);
    }
    setState(412);
    match(TBoxParser::LeftBrace);
    setState(413);
    program();
    setState(414);
    match(TBoxParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefGlobalVarStmtContext ------------------------------------------------------------------

TBoxParser::DefGlobalVarStmtContext::DefGlobalVarStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::DefVarStmtContext* TBoxParser::DefGlobalVarStmtContext::defVarStmt() {
  return getRuleContext<TBoxParser::DefVarStmtContext>(0);
}

tree::TerminalNode* TBoxParser::DefGlobalVarStmtContext::Export() {
  return getToken(TBoxParser::Export, 0);
}


size_t TBoxParser::DefGlobalVarStmtContext::getRuleIndex() const {
  return TBoxParser::RuleDefGlobalVarStmt;
}


antlrcpp::Any TBoxParser::DefGlobalVarStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitDefGlobalVarStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::DefGlobalVarStmtContext* TBoxParser::defGlobalVarStmt() {
  DefGlobalVarStmtContext *_localctx = _tracker.createInstance<DefGlobalVarStmtContext>(_ctx, getState());
  enterRule(_localctx, 84, TBoxParser::RuleDefGlobalVarStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TBoxParser::Export) {
      setState(416);
      match(TBoxParser::Export);
    }
    setState(419);
    defVarStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternFuncStmtContext ------------------------------------------------------------------

TBoxParser::ExternFuncStmtContext::ExternFuncStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::ExternFuncStmtContext::Extern() {
  return getToken(TBoxParser::Extern, 0);
}

tree::TerminalNode* TBoxParser::ExternFuncStmtContext::Func() {
  return getToken(TBoxParser::Func, 0);
}

tree::TerminalNode* TBoxParser::ExternFuncStmtContext::Identifier() {
  return getToken(TBoxParser::Identifier, 0);
}

tree::TerminalNode* TBoxParser::ExternFuncStmtContext::LeftParen() {
  return getToken(TBoxParser::LeftParen, 0);
}

TBoxParser::ArgsNeedContext* TBoxParser::ExternFuncStmtContext::argsNeed() {
  return getRuleContext<TBoxParser::ArgsNeedContext>(0);
}

tree::TerminalNode* TBoxParser::ExternFuncStmtContext::RightParen() {
  return getToken(TBoxParser::RightParen, 0);
}

tree::TerminalNode* TBoxParser::ExternFuncStmtContext::SemiColon() {
  return getToken(TBoxParser::SemiColon, 0);
}

tree::TerminalNode* TBoxParser::ExternFuncStmtContext::Colon() {
  return getToken(TBoxParser::Colon, 0);
}

TBoxParser::TypeContext* TBoxParser::ExternFuncStmtContext::type() {
  return getRuleContext<TBoxParser::TypeContext>(0);
}


size_t TBoxParser::ExternFuncStmtContext::getRuleIndex() const {
  return TBoxParser::RuleExternFuncStmt;
}


antlrcpp::Any TBoxParser::ExternFuncStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitExternFuncStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ExternFuncStmtContext* TBoxParser::externFuncStmt() {
  ExternFuncStmtContext *_localctx = _tracker.createInstance<ExternFuncStmtContext>(_ctx, getState());
  enterRule(_localctx, 86, TBoxParser::RuleExternFuncStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    match(TBoxParser::Extern);
    setState(422);
    match(TBoxParser::Func);
    setState(423);
    match(TBoxParser::Identifier);
    setState(424);
    match(TBoxParser::LeftParen);
    setState(425);
    argsNeed();
    setState(426);
    match(TBoxParser::RightParen);

    setState(427);
    match(TBoxParser::Colon);
    setState(428);
    type(0);
    setState(430);
    match(TBoxParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

TBoxParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TBoxParser::ImportStmtContext *> TBoxParser::StatContext::importStmt() {
  return getRuleContexts<TBoxParser::ImportStmtContext>();
}

TBoxParser::ImportStmtContext* TBoxParser::StatContext::importStmt(size_t i) {
  return getRuleContext<TBoxParser::ImportStmtContext>(i);
}

std::vector<TBoxParser::StatStmtsContext *> TBoxParser::StatContext::statStmts() {
  return getRuleContexts<TBoxParser::StatStmtsContext>();
}

TBoxParser::StatStmtsContext* TBoxParser::StatContext::statStmts(size_t i) {
  return getRuleContext<TBoxParser::StatStmtsContext>(i);
}


size_t TBoxParser::StatContext::getRuleIndex() const {
  return TBoxParser::RuleStat;
}


antlrcpp::Any TBoxParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::StatContext* TBoxParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 88, TBoxParser::RuleStat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Import) {
      setState(432);
      importStmt();
      setState(437);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(441);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TBoxParser::Export)
      | (1ULL << TBoxParser::Extern)
      | (1ULL << TBoxParser::Func)
      | (1ULL << TBoxParser::Num)
      | (1ULL << TBoxParser::Byte)
      | (1ULL << TBoxParser::Short)
      | (1ULL << TBoxParser::Int)
      | (1ULL << TBoxParser::Long)
      | (1ULL << TBoxParser::Float)
      | (1ULL << TBoxParser::Double)
      | (1ULL << TBoxParser::Bool)
      | (1ULL << TBoxParser::String)
      | (1ULL << TBoxParser::Char)
      | (1ULL << TBoxParser::Var))) != 0) || _la == TBoxParser::Identifier) {
      setState(438);
      statStmts();
      setState(443);
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

//----------------- StatStmtsContext ------------------------------------------------------------------

TBoxParser::StatStmtsContext::StatStmtsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TBoxParser::DefGlobalVarStmtContext* TBoxParser::StatStmtsContext::defGlobalVarStmt() {
  return getRuleContext<TBoxParser::DefGlobalVarStmtContext>(0);
}

TBoxParser::DefFuncStmtContext* TBoxParser::StatStmtsContext::defFuncStmt() {
  return getRuleContext<TBoxParser::DefFuncStmtContext>(0);
}

TBoxParser::ExternFuncStmtContext* TBoxParser::StatStmtsContext::externFuncStmt() {
  return getRuleContext<TBoxParser::ExternFuncStmtContext>(0);
}


size_t TBoxParser::StatStmtsContext::getRuleIndex() const {
  return TBoxParser::RuleStatStmts;
}


antlrcpp::Any TBoxParser::StatStmtsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitStatStmts(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::StatStmtsContext* TBoxParser::statStmts() {
  StatStmtsContext *_localctx = _tracker.createInstance<StatStmtsContext>(_ctx, getState());
  enterRule(_localctx, 90, TBoxParser::RuleStatStmts);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(444);
      defGlobalVarStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(445);
      defFuncStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(446);
      externFuncStmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool TBoxParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 29: return typeSempred(dynamic_cast<TypeContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TBoxParser::typeSempred(TypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> TBoxParser::_decisionToDFA;
atn::PredictionContextCache TBoxParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TBoxParser::_atn;
std::vector<uint16_t> TBoxParser::_serializedATN;

std::vector<std::string> TBoxParser::_ruleNames = {
  "num", "constant", "primExpr", "postExpr", "postOp", "unaryExpr", "unaryOp", 
  "incOrDecOp", "castExpr", "mulExpr", "mulOp", "addExpr", "addOp", "shiftExpr", 
  "shiftOp", "cmpExpr", "cmpOp", "andExpr", "xorExpr", "orExpr", "logicAndExpr", 
  "logicOrExpr", "quesExpr", "assignExpr", "assignOp", "args", "expr", "library", 
  "importStmt", "type", "argsNeed", "program", "stmt", "returnStmt", "defVarStmt", 
  "stmtBody", "ifStmt", "forStmt", "whileStmt", "doWhileStmt", "breakStmt", 
  "defFuncStmt", "defGlobalVarStmt", "externFuncStmt", "stat", "statStmts"
};

std::vector<std::string> TBoxParser::_literalNames = {
  "", "'[]'", "", "", "", "'import'", "'export'", "'of'", "'static'", "'extern'", 
  "'true'", "'false'", "'null'", "'func'", "'class'", "'struct'", "'enum'", 
  "'interface'", "'abstract'", "'override'", "'public'", "'protected'", 
  "'private'", "'internal'", "'friendly'", "'friend'", "'if'", "'else'", 
  "'elif'", "'switch'", "'for'", "'foreach'", "'while'", "'do'", "'break'", 
  "'return'", "'num'", "'byte'", "'short'", "'int'", "'long'", "'float'", 
  "'double'", "'bool'", "'string'", "'char'", "'var'", "','", "'?'", "';'", 
  "':'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'<<'", "'>>'", "'>>>'", 
  "'+'", "'++'", "'-'", "'--'", "'*'", "'/'", "'%'", "'&'", "'&&'", "'|'", 
  "'||'", "'^'", "'!'", "'~'", "'='", "'*='", "'/='", "'%='", "'+='", "'-='", 
  "'<<='", "'>>='", "'>>>='", "'&='", "'^='", "'|='", "'<'", "'<='", "'>'", 
  "'>='", "'=='", "'!='", "'->'", "'.'", "'...'", "'$'"
};

std::vector<std::string> TBoxParser::_symbolicNames = {
  "", "", "WS", "LineComment", "BlockComment", "Import", "Export", "Of", 
  "Static", "Extern", "True", "False", "Null", "Func", "Class", "Struct", 
  "Enum", "Interface", "Abstract", "Override", "Public", "Protected", "Private", 
  "Internal", "Friendly", "Friend", "If", "Else", "Elif", "Switch", "For", 
  "Foreach", "While", "Do", "Break", "Return", "Num", "Byte", "Short", "Int", 
  "Long", "Float", "Double", "Bool", "String", "Char", "Var", "Comma", "Question", 
  "SemiColon", "Colon", "LeftParen", "RightParen", "LeftBracket", "RightBracket", 
  "LeftBrace", "RightBrace", "LeftShift", "ARightShift", "LRightShift", 
  "Plus", "Increase", "Minus", "Decrease", "Star", "Div", "Mod", "And", 
  "LogicAnd", "Or", "LogicOr", "Xor", "Not", "Tilde", "Assign", "MulAssign", 
  "DivAssign", "ModAssign", "PlusAssign", "MinusAssign", "LeftShiftAssign", 
  "ARightShiftAssign", "LRightShiftAssign", "AndAssign", "XorAssign", "OrAssign", 
  "Less", "LessEqual", "Greater", "GreaterEqual", "Equal", "NotEqual", "Arrow", 
  "Dot", "Ellipsis", "Dollar", "BinNum", "OctNum", "DecNum", "HexNum", "FloatNum", 
  "Identifier", "StringConstant"
};

dfa::Vocabulary TBoxParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TBoxParser::_tokenNames;

TBoxParser::Initializer::Initializer() {
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
    0x3, 0x68, 0x1c4, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x63, 0xa, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x6b, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x6f, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x72, 0xb, 0x5, 0x3, 0x5, 0x7, 0x5, 0x75, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x78, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x84, 0xa, 0x6, 0x3, 0x7, 0x7, 0x7, 0x87, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
    0x8a, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x90, 
    0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0x98, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 
    0xb, 0x9e, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xa1, 0xb, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xa9, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0xac, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xb4, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
    0xb7, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x7, 0x11, 0xbf, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xc2, 0xb, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 
    0xc9, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xcc, 0xb, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x7, 0x14, 0xd1, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xd4, 
    0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0xd9, 0xa, 0x15, 
    0xc, 0x15, 0xe, 0x15, 0xdc, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0xe1, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xe4, 0xb, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0xe9, 0xa, 0x17, 0xc, 0x17, 0xe, 
    0x17, 0xec, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x5, 0x18, 0xf4, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xfc, 0xa, 0x19, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x103, 
    0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x106, 0xb, 0x1b, 0x5, 0x1b, 0x108, 
    0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 
    0x1d, 0x10f, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x112, 0xb, 0x1d, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x125, 0xa, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x129, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
    0x12c, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x7, 0x20, 0x134, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x137, 
    0xb, 0x20, 0x5, 0x20, 0x139, 0xa, 0x20, 0x3, 0x21, 0x7, 0x21, 0x13c, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x13f, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x14c, 0xa, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x5, 0x23, 0x150, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x158, 0xa, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 
    0x25, 0x161, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x7, 0x26, 0x16e, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x171, 0xb, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x175, 0xa, 0x26, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2b, 0x5, 0x2b, 0x194, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x19d, 
    0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x5, 
    0x2c, 0x1a4, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x7, 0x2e, 0x1b4, 0xa, 0x2e, 
    0xc, 0x2e, 0xe, 0x2e, 0x1b7, 0xb, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x1ba, 
    0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x1bd, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x5, 0x2f, 0x1c2, 0xa, 0x2f, 0x3, 0x2f, 0x2, 0x3, 0x3c, 0x30, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 
    0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x2, 0xa, 0x3, 
    0x2, 0x62, 0x66, 0x4, 0x2, 0x40, 0x40, 0x4a, 0x4b, 0x4, 0x2, 0x3f, 0x3f, 
    0x41, 0x41, 0x3, 0x2, 0x42, 0x44, 0x4, 0x2, 0x3e, 0x3e, 0x40, 0x40, 
    0x3, 0x2, 0x3b, 0x3d, 0x3, 0x2, 0x58, 0x5d, 0x3, 0x2, 0x4c, 0x57, 0x2, 
    0x1d1, 0x2, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x6c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x88, 0x3, 0x2, 0x2, 0x2, 0xe, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x93, 0x3, 0x2, 0x2, 0x2, 0x12, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x99, 0x3, 0x2, 0x2, 0x2, 0x16, 0xa2, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xad, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x20, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x24, 0xc5, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xe5, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xed, 0x3, 0x2, 0x2, 0x2, 0x30, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x34, 0x107, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x38, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x124, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x138, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x42, 0x14b, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x46, 0x153, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x160, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x162, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x176, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x185, 0x3, 0x2, 0x2, 0x2, 0x52, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x54, 0x193, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1a7, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1c1, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x5f, 0x9, 0x2, 0x2, 0x2, 0x5f, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x63, 0x7, 0x68, 0x2, 0x2, 0x61, 0x63, 0x5, 0x2, 0x2, 0x2, 
    0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x64, 0x6b, 0x5, 0x4, 0x3, 0x2, 0x65, 0x6b, 
    0x7, 0x67, 0x2, 0x2, 0x66, 0x67, 0x7, 0x35, 0x2, 0x2, 0x67, 0x68, 0x5, 
    0x36, 0x1c, 0x2, 0x68, 0x69, 0x7, 0x36, 0x2, 0x2, 0x69, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x64, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x70, 0x5, 0x6, 0x4, 0x2, 0x6d, 0x6f, 0x5, 0xa, 0x6, 0x2, 0x6e, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x72, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x5, 0x10, 
    0x9, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x9, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7a, 0x7, 0x37, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x36, 0x1c, 0x2, 0x7b, 0x7c, 
    0x7, 0x38, 0x2, 0x2, 0x7c, 0x84, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 
    0x35, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x34, 0x1b, 0x2, 0x7f, 0x80, 0x7, 0x36, 
    0x2, 0x2, 0x80, 0x84, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x5f, 0x2, 
    0x2, 0x82, 0x84, 0x7, 0x67, 0x2, 0x2, 0x83, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x83, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x85, 0x87, 0x5, 0x10, 0x9, 0x2, 0x86, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x90, 0x5, 0x8, 0x5, 
    0x2, 0x8c, 0x8d, 0x5, 0xe, 0x8, 0x2, 0x8d, 0x8e, 0x5, 0x12, 0xa, 0x2, 
    0x8e, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x90, 0xd, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 
    0x9, 0x3, 0x2, 0x2, 0x92, 0xf, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x9, 
    0x4, 0x2, 0x2, 0x94, 0x11, 0x3, 0x2, 0x2, 0x2, 0x95, 0x98, 0x5, 0xc, 
    0x7, 0x2, 0x96, 0x98, 0x5, 0x2, 0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x9f, 0x5, 0x12, 0xa, 0x2, 0x9a, 0x9b, 0x5, 0x16, 0xc, 0x2, 0x9b, 
    0x9c, 0x5, 0x12, 0xa, 0x2, 0x9c, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9a, 
    0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x9, 0x5, 0x2, 
    0x2, 0xa3, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xaa, 0x5, 0x14, 0xb, 0x2, 
    0xa5, 0xa6, 0x5, 0x1a, 0xe, 0x2, 0xa6, 0xa7, 0x5, 0x14, 0xb, 0x2, 0xa7, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0x19, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0xae, 0x9, 0x6, 0x2, 0x2, 0xae, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0xb5, 0x5, 0x18, 0xd, 0x2, 0xb0, 0xb1, 0x5, 0x1e, 0x10, 0x2, 
    0xb1, 0xb2, 0x5, 0x18, 0xd, 0x2, 0xb2, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x9, 0x7, 
    0x2, 0x2, 0xb9, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xba, 0xc0, 0x5, 0x1c, 0xf, 
    0x2, 0xbb, 0xbc, 0x5, 0x22, 0x12, 0x2, 0xbc, 0xbd, 0x5, 0x1c, 0xf, 0x2, 
    0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0xc3, 0xc4, 0x9, 0x8, 0x2, 0x2, 0xc4, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0xc5, 0xca, 0x5, 0x20, 0x11, 0x2, 0xc6, 0xc7, 0x7, 0x45, 0x2, 
    0x2, 0xc7, 0xc9, 0x5, 0x20, 0x11, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0x25, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xd2, 0x5, 0x24, 0x13, 0x2, 0xce, 0xcf, 0x7, 
    0x49, 0x2, 0x2, 0xcf, 0xd1, 0x5, 0x24, 0x13, 0x2, 0xd0, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xda, 0x5, 0x26, 0x14, 0x2, 0xd6, 
    0xd7, 0x7, 0x47, 0x2, 0x2, 0xd7, 0xd9, 0x5, 0x26, 0x14, 0x2, 0xd8, 0xd6, 
    0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 
    0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe2, 0x5, 0x28, 0x15, 
    0x2, 0xde, 0xdf, 0x7, 0x46, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0x28, 0x15, 0x2, 
    0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xea, 0x5, 
    0x2a, 0x16, 0x2, 0xe6, 0xe7, 0x7, 0x48, 0x2, 0x2, 0xe7, 0xe9, 0x5, 0x2a, 
    0x16, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 
    0xeb, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xed, 
    0xf3, 0x5, 0x2c, 0x17, 0x2, 0xee, 0xef, 0x7, 0x32, 0x2, 0x2, 0xef, 0xf0, 
    0x5, 0x36, 0x1c, 0x2, 0xf0, 0xf1, 0x7, 0x34, 0x2, 0x2, 0xf1, 0xf2, 0x5, 
    0x2e, 0x18, 0x2, 0xf2, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0xf5, 0xfc, 0x5, 0x4, 0x3, 0x2, 0xf6, 0xf7, 0x5, 0x8, 0x5, 0x2, 
    0xf7, 0xf8, 0x5, 0x32, 0x1a, 0x2, 0xf8, 0xf9, 0x5, 0x30, 0x19, 0x2, 
    0xf9, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfc, 0x5, 0x2e, 0x18, 0x2, 0xfb, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfa, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0x31, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x9, 
    0x9, 0x2, 0x2, 0xfe, 0x33, 0x3, 0x2, 0x2, 0x2, 0xff, 0x104, 0x5, 0x36, 
    0x1c, 0x2, 0x100, 0x101, 0x7, 0x31, 0x2, 0x2, 0x101, 0x103, 0x5, 0x36, 
    0x1c, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x103, 0x106, 0x3, 0x2, 
    0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 
    0x2, 0x2, 0x105, 0x108, 0x3, 0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 
    0x2, 0x2, 0x107, 0xff, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 
    0x2, 0x108, 0x35, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x30, 0x19, 
    0x2, 0x10a, 0x37, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x110, 0x7, 0x67, 0x2, 
    0x2, 0x10c, 0x10d, 0x7, 0x5f, 0x2, 0x2, 0x10d, 0x10f, 0x7, 0x67, 0x2, 
    0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x112, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 
    0x2, 0x111, 0x39, 0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0x113, 0x114, 0x7, 0x7, 0x2, 0x2, 0x114, 0x115, 0x5, 0x38, 0x1d, 0x2, 
    0x115, 0x116, 0x7, 0x33, 0x2, 0x2, 0x116, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x118, 0x8, 0x1f, 0x1, 0x2, 0x118, 0x125, 0x7, 0x26, 0x2, 0x2, 
    0x119, 0x125, 0x7, 0x27, 0x2, 0x2, 0x11a, 0x125, 0x7, 0x28, 0x2, 0x2, 
    0x11b, 0x125, 0x7, 0x29, 0x2, 0x2, 0x11c, 0x125, 0x7, 0x2a, 0x2, 0x2, 
    0x11d, 0x125, 0x7, 0x2d, 0x2, 0x2, 0x11e, 0x125, 0x7, 0x2e, 0x2, 0x2, 
    0x11f, 0x125, 0x7, 0x2b, 0x2, 0x2, 0x120, 0x125, 0x7, 0x2c, 0x2, 0x2, 
    0x121, 0x125, 0x7, 0x2f, 0x2, 0x2, 0x122, 0x125, 0x7, 0x30, 0x2, 0x2, 
    0x123, 0x125, 0x5, 0x38, 0x1d, 0x2, 0x124, 0x117, 0x3, 0x2, 0x2, 0x2, 
    0x124, 0x119, 0x3, 0x2, 0x2, 0x2, 0x124, 0x11a, 0x3, 0x2, 0x2, 0x2, 
    0x124, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x124, 0x11c, 0x3, 0x2, 0x2, 0x2, 
    0x124, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x124, 0x11e, 0x3, 0x2, 0x2, 0x2, 
    0x124, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x124, 0x120, 0x3, 0x2, 0x2, 0x2, 
    0x124, 0x121, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 0x2, 0x2, 
    0x124, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 0x12a, 0x3, 0x2, 0x2, 0x2, 
    0x126, 0x127, 0xc, 0x3, 0x2, 0x2, 0x127, 0x129, 0x7, 0x3, 0x2, 0x2, 
    0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12c, 0x3, 0x2, 0x2, 0x2, 
    0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 
    0x12b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0x12e, 0x5, 0x3c, 0x1f, 0x2, 0x12e, 0x135, 0x7, 0x67, 0x2, 0x2, 0x12f, 
    0x130, 0x7, 0x31, 0x2, 0x2, 0x130, 0x131, 0x5, 0x3c, 0x1f, 0x2, 0x131, 
    0x132, 0x7, 0x67, 0x2, 0x2, 0x132, 0x134, 0x3, 0x2, 0x2, 0x2, 0x133, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x134, 0x137, 0x3, 0x2, 0x2, 0x2, 0x135, 
    0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x139, 0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x12d, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13c, 0x5, 0x42, 0x22, 0x2, 0x13b, 
    0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13d, 
    0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 
    0x5, 0x36, 0x1c, 0x2, 0x141, 0x142, 0x7, 0x33, 0x2, 0x2, 0x142, 0x14c, 
    0x3, 0x2, 0x2, 0x2, 0x143, 0x14c, 0x7, 0x33, 0x2, 0x2, 0x144, 0x14c, 
    0x5, 0x46, 0x24, 0x2, 0x145, 0x14c, 0x5, 0x44, 0x23, 0x2, 0x146, 0x14c, 
    0x5, 0x4a, 0x26, 0x2, 0x147, 0x14c, 0x5, 0x4c, 0x27, 0x2, 0x148, 0x14c, 
    0x5, 0x4e, 0x28, 0x2, 0x149, 0x14c, 0x5, 0x50, 0x29, 0x2, 0x14a, 0x14c, 
    0x5, 0x52, 0x2a, 0x2, 0x14b, 0x140, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x143, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x144, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x145, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x146, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x147, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x14d, 0x14f, 0x7, 0x25, 0x2, 0x2, 0x14e, 0x150, 0x5, 
    0x36, 0x1c, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 
    0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x7, 
    0x33, 0x2, 0x2, 0x152, 0x45, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x5, 
    0x3c, 0x1f, 0x2, 0x154, 0x157, 0x7, 0x67, 0x2, 0x2, 0x155, 0x156, 0x7, 
    0x4c, 0x2, 0x2, 0x156, 0x158, 0x5, 0x36, 0x1c, 0x2, 0x157, 0x155, 0x3, 
    0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x33, 0x2, 0x2, 0x15a, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x39, 0x2, 0x2, 0x15c, 0x15d, 0x5, 
    0x40, 0x21, 0x2, 0x15d, 0x15e, 0x7, 0x3a, 0x2, 0x2, 0x15e, 0x161, 0x3, 
    0x2, 0x2, 0x2, 0x15f, 0x161, 0x5, 0x42, 0x22, 0x2, 0x160, 0x15b, 0x3, 
    0x2, 0x2, 0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x163, 0x7, 0x1c, 0x2, 0x2, 0x163, 0x164, 0x7, 0x35, 
    0x2, 0x2, 0x164, 0x165, 0x5, 0x2c, 0x17, 0x2, 0x165, 0x166, 0x7, 0x36, 
    0x2, 0x2, 0x166, 0x16f, 0x5, 0x48, 0x25, 0x2, 0x167, 0x168, 0x7, 0x1e, 
    0x2, 0x2, 0x168, 0x169, 0x7, 0x35, 0x2, 0x2, 0x169, 0x16a, 0x5, 0x2c, 
    0x17, 0x2, 0x16a, 0x16b, 0x7, 0x36, 0x2, 0x2, 0x16b, 0x16c, 0x5, 0x48, 
    0x25, 0x2, 0x16c, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x16e, 0x171, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 0x174, 0x3, 0x2, 
    0x2, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x7, 0x1d, 
    0x2, 0x2, 0x173, 0x175, 0x5, 0x48, 0x25, 0x2, 0x174, 0x172, 0x3, 0x2, 
    0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x176, 0x177, 0x7, 0x20, 0x2, 0x2, 0x177, 0x178, 0x7, 0x35, 0x2, 
    0x2, 0x178, 0x179, 0x5, 0x42, 0x22, 0x2, 0x179, 0x17a, 0x5, 0x2c, 0x17, 
    0x2, 0x17a, 0x17b, 0x7, 0x33, 0x2, 0x2, 0x17b, 0x17c, 0x5, 0x36, 0x1c, 
    0x2, 0x17c, 0x17d, 0x7, 0x36, 0x2, 0x2, 0x17d, 0x17e, 0x5, 0x48, 0x25, 
    0x2, 0x17e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x7, 0x22, 0x2, 
    0x2, 0x180, 0x181, 0x7, 0x35, 0x2, 0x2, 0x181, 0x182, 0x5, 0x2c, 0x17, 
    0x2, 0x182, 0x183, 0x7, 0x36, 0x2, 0x2, 0x183, 0x184, 0x5, 0x48, 0x25, 
    0x2, 0x184, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x7, 0x23, 0x2, 
    0x2, 0x186, 0x187, 0x7, 0x39, 0x2, 0x2, 0x187, 0x188, 0x5, 0x40, 0x21, 
    0x2, 0x188, 0x189, 0x7, 0x3a, 0x2, 0x2, 0x189, 0x18a, 0x7, 0x22, 0x2, 
    0x2, 0x18a, 0x18b, 0x7, 0x35, 0x2, 0x2, 0x18b, 0x18c, 0x5, 0x2c, 0x17, 
    0x2, 0x18c, 0x18d, 0x7, 0x36, 0x2, 0x2, 0x18d, 0x18e, 0x7, 0x33, 0x2, 
    0x2, 0x18e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x24, 0x2, 
    0x2, 0x190, 0x191, 0x7, 0x33, 0x2, 0x2, 0x191, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x192, 0x194, 0x7, 0x8, 0x2, 0x2, 0x193, 0x192, 0x3, 0x2, 0x2, 
    0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x196, 0x7, 0xf, 0x2, 0x2, 0x196, 0x197, 0x7, 0x67, 0x2, 
    0x2, 0x197, 0x198, 0x7, 0x35, 0x2, 0x2, 0x198, 0x199, 0x5, 0x3e, 0x20, 
    0x2, 0x199, 0x19c, 0x7, 0x36, 0x2, 0x2, 0x19a, 0x19b, 0x7, 0x34, 0x2, 
    0x2, 0x19b, 0x19d, 0x5, 0x3c, 0x1f, 0x2, 0x19c, 0x19a, 0x3, 0x2, 0x2, 
    0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x19f, 0x7, 0x39, 0x2, 0x2, 0x19f, 0x1a0, 0x5, 0x40, 0x21, 
    0x2, 0x1a0, 0x1a1, 0x7, 0x3a, 0x2, 0x2, 0x1a1, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x1a2, 0x1a4, 0x7, 0x8, 0x2, 0x2, 0x1a3, 0x1a2, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x3, 0x2, 0x2, 
    0x2, 0x1a5, 0x1a6, 0x5, 0x46, 0x24, 0x2, 0x1a6, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x1a7, 0x1a8, 0x7, 0xb, 0x2, 0x2, 0x1a8, 0x1a9, 0x7, 0xf, 0x2, 
    0x2, 0x1a9, 0x1aa, 0x7, 0x67, 0x2, 0x2, 0x1aa, 0x1ab, 0x7, 0x35, 0x2, 
    0x2, 0x1ab, 0x1ac, 0x5, 0x3e, 0x20, 0x2, 0x1ac, 0x1ad, 0x7, 0x36, 0x2, 
    0x2, 0x1ad, 0x1ae, 0x7, 0x34, 0x2, 0x2, 0x1ae, 0x1af, 0x5, 0x3c, 0x1f, 
    0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x7, 0x33, 0x2, 
    0x2, 0x1b1, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b4, 0x5, 0x3a, 0x1e, 
    0x2, 0x1b3, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b7, 0x3, 0x2, 0x2, 
    0x2, 0x1b5, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x3, 0x2, 0x2, 
    0x2, 0x1b6, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 
    0x2, 0x1b8, 0x1ba, 0x5, 0x5c, 0x2f, 0x2, 0x1b9, 0x1b8, 0x3, 0x2, 0x2, 
    0x2, 0x1ba, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 
    0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1c2, 0x5, 0x56, 0x2c, 0x2, 
    0x1bf, 0x1c2, 0x5, 0x54, 0x2b, 0x2, 0x1c0, 0x1c2, 0x5, 0x58, 0x2d, 0x2, 
    0x1c1, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
    0x1c1, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x62, 0x6a, 0x70, 0x76, 0x83, 0x88, 0x8f, 0x97, 0x9f, 0xaa, 0xb5, 0xc0, 
    0xca, 0xd2, 0xda, 0xe2, 0xea, 0xf3, 0xfb, 0x104, 0x107, 0x110, 0x124, 
    0x12a, 0x135, 0x138, 0x13d, 0x14b, 0x14f, 0x157, 0x160, 0x16f, 0x174, 
    0x193, 0x19c, 0x1a3, 0x1b5, 0x1bb, 0x1c1, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TBoxParser::Initializer TBoxParser::_init;
