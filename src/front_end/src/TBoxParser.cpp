
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
    setState(96);
    _la = _input->LA(1);
    if (!(((((_la - 103) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 103)) & ((1ULL << (TBoxParser::BinNum - 103))
      | (1ULL << (TBoxParser::OctNum - 103))
      | (1ULL << (TBoxParser::DecNum - 103))
      | (1ULL << (TBoxParser::HexNum - 103))
      | (1ULL << (TBoxParser::FloatNum - 103)))) != 0))) {
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
    setState(100);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::StringConstant: {
        enterOuterAlt(_localctx, 1);
        setState(98);
        match(TBoxParser::StringConstant);
        break;
      }

      case TBoxParser::BinNum:
      case TBoxParser::OctNum:
      case TBoxParser::DecNum:
      case TBoxParser::HexNum:
      case TBoxParser::FloatNum: {
        enterOuterAlt(_localctx, 2);
        setState(99);
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
    setState(108);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::BinNum:
      case TBoxParser::OctNum:
      case TBoxParser::DecNum:
      case TBoxParser::HexNum:
      case TBoxParser::FloatNum:
      case TBoxParser::StringConstant: {
        enterOuterAlt(_localctx, 1);
        setState(102);
        constant();
        break;
      }

      case TBoxParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(103);
        match(TBoxParser::Identifier);
        break;
      }

      case TBoxParser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(104);
        match(TBoxParser::LeftParen);
        setState(105);
        expr();
        setState(106);
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
    setState(110);
    primExpr();
    setState(114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 58) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 58)) & ((1ULL << (TBoxParser::LeftParen - 58))
      | (1ULL << (TBoxParser::LeftBracket - 58))
      | (1ULL << (TBoxParser::Dot - 58)))) != 0)) {
      setState(111);
      postOp();
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(120);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Increase

    || _la == TBoxParser::Decrease) {
      setState(117);
      incOrDecOp();
      setState(122);
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
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(123);
        match(TBoxParser::LeftBracket);
        setState(124);
        expr();
        setState(125);
        match(TBoxParser::RightBracket);
        break;
      }

      case TBoxParser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(127);
        match(TBoxParser::LeftParen);
        setState(128);
        args();
        setState(129);
        match(TBoxParser::RightParen);
        break;
      }

      case TBoxParser::Dot: {
        enterOuterAlt(_localctx, 3);
        setState(131);
        match(TBoxParser::Dot);
        setState(132);
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
    setState(138);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Increase

    || _la == TBoxParser::Decrease) {
      setState(135);
      incOrDecOp();
      setState(140);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(145);
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
        setState(141);
        postExpr();
        break;
      }

      case TBoxParser::Minus:
      case TBoxParser::Not:
      case TBoxParser::Tilde: {
        setState(142);
        unaryOp();
        setState(143);
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
    setState(147);
    _la = _input->LA(1);
    if (!(((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (TBoxParser::Minus - 69))
      | (1ULL << (TBoxParser::Not - 69))
      | (1ULL << (TBoxParser::Tilde - 69)))) != 0))) {
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
    setState(149);
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
    setState(153);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(151);
      unaryExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(152);
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
    setState(155);
    castExpr();
    setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (TBoxParser::Star - 71))
      | (1ULL << (TBoxParser::Div - 71))
      | (1ULL << (TBoxParser::Mod - 71)))) != 0)) {
      setState(156);
      mulOp();
      setState(157);
      castExpr();
      setState(163);
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
    setState(164);
    _la = _input->LA(1);
    if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (TBoxParser::Star - 71))
      | (1ULL << (TBoxParser::Div - 71))
      | (1ULL << (TBoxParser::Mod - 71)))) != 0))) {
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
    setState(166);
    mulExpr();
    setState(172);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Plus

    || _la == TBoxParser::Minus) {
      setState(167);
      addOp();
      setState(168);
      mulExpr();
      setState(174);
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
    setState(175);
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
    setState(177);
    addExpr();
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TBoxParser::LeftShift - 64))
      | (1ULL << (TBoxParser::ARightShift - 64))
      | (1ULL << (TBoxParser::LRightShift - 64)))) != 0)) {
      setState(178);
      shiftOp();
      setState(179);
      addExpr();
      setState(185);
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
    setState(186);
    _la = _input->LA(1);
    if (!(((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TBoxParser::LeftShift - 64))
      | (1ULL << (TBoxParser::ARightShift - 64))
      | (1ULL << (TBoxParser::LRightShift - 64)))) != 0))) {
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
    setState(188);
    shiftExpr();
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (TBoxParser::Less - 93))
      | (1ULL << (TBoxParser::LessEqual - 93))
      | (1ULL << (TBoxParser::Greater - 93))
      | (1ULL << (TBoxParser::GreaterEqual - 93))
      | (1ULL << (TBoxParser::Equal - 93))
      | (1ULL << (TBoxParser::NotEqual - 93)))) != 0)) {
      setState(189);
      cmpOp();
      setState(190);
      shiftExpr();
      setState(196);
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
    setState(197);
    _la = _input->LA(1);
    if (!(((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (TBoxParser::Less - 93))
      | (1ULL << (TBoxParser::LessEqual - 93))
      | (1ULL << (TBoxParser::Greater - 93))
      | (1ULL << (TBoxParser::GreaterEqual - 93))
      | (1ULL << (TBoxParser::Equal - 93))
      | (1ULL << (TBoxParser::NotEqual - 93)))) != 0))) {
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
    setState(199);
    cmpExpr();
    setState(204);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::And) {
      setState(200);
      match(TBoxParser::And);
      setState(201);
      cmpExpr();
      setState(206);
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
    setState(207);
    andExpr();
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Xor) {
      setState(208);
      match(TBoxParser::Xor);
      setState(209);
      andExpr();
      setState(214);
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
    setState(215);
    xorExpr();
    setState(220);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Or) {
      setState(216);
      match(TBoxParser::Or);
      setState(217);
      xorExpr();
      setState(222);
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
    setState(223);
    orExpr();
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::LogicAnd) {
      setState(224);
      match(TBoxParser::LogicAnd);
      setState(225);
      orExpr();
      setState(230);
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
    setState(231);
    logicAndExpr();
    setState(236);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::LogicOr) {
      setState(232);
      match(TBoxParser::LogicOr);
      setState(233);
      logicAndExpr();
      setState(238);
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
    setState(239);
    logicOrExpr();
    setState(245);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TBoxParser::Question) {
      setState(240);
      match(TBoxParser::Question);
      setState(241);
      expr();
      setState(242);
      match(TBoxParser::Colon);
      setState(243);
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

//----------------- SigmaExprContext ------------------------------------------------------------------

TBoxParser::SigmaExprContext::SigmaExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TBoxParser::SigmaExprContext::getRuleIndex() const {
  return TBoxParser::RuleSigmaExpr;
}


antlrcpp::Any TBoxParser::SigmaExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitSigmaExpr(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::SigmaExprContext* TBoxParser::sigmaExpr() {
  SigmaExprContext *_localctx = _tracker.createInstance<SigmaExprContext>(_ctx, getState());
  enterRule(_localctx, 46, TBoxParser::RuleSigmaExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
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
  enterRule(_localctx, 48, TBoxParser::RuleAssignExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(255);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(249);
      constant();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(250);
      postExpr();
      setState(251);
      assignOp();
      setState(252);
      assignExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(254);
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
  enterRule(_localctx, 50, TBoxParser::RuleAssignOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    _la = _input->LA(1);
    if (!(((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (TBoxParser::Assign - 81))
      | (1ULL << (TBoxParser::MulAssign - 81))
      | (1ULL << (TBoxParser::DivAssign - 81))
      | (1ULL << (TBoxParser::ModAssign - 81))
      | (1ULL << (TBoxParser::PlusAssign - 81))
      | (1ULL << (TBoxParser::MinusAssign - 81))
      | (1ULL << (TBoxParser::LeftShiftAssign - 81))
      | (1ULL << (TBoxParser::ARightShiftAssign - 81))
      | (1ULL << (TBoxParser::LRightShiftAssign - 81))
      | (1ULL << (TBoxParser::AndAssign - 81))
      | (1ULL << (TBoxParser::XorAssign - 81))
      | (1ULL << (TBoxParser::OrAssign - 81)))) != 0))) {
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
  enterRule(_localctx, 52, TBoxParser::RuleArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 58) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 58)) & ((1ULL << (TBoxParser::LeftParen - 58))
      | (1ULL << (TBoxParser::Increase - 58))
      | (1ULL << (TBoxParser::Minus - 58))
      | (1ULL << (TBoxParser::Decrease - 58))
      | (1ULL << (TBoxParser::Not - 58))
      | (1ULL << (TBoxParser::Tilde - 58))
      | (1ULL << (TBoxParser::BinNum - 58))
      | (1ULL << (TBoxParser::OctNum - 58))
      | (1ULL << (TBoxParser::DecNum - 58))
      | (1ULL << (TBoxParser::HexNum - 58))
      | (1ULL << (TBoxParser::FloatNum - 58))
      | (1ULL << (TBoxParser::Identifier - 58))
      | (1ULL << (TBoxParser::StringConstant - 58)))) != 0)) {
      setState(259);
      expr();
      setState(264);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TBoxParser::Comma) {
        setState(260);
        match(TBoxParser::Comma);
        setState(261);
        expr();
        setState(266);
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
  enterRule(_localctx, 54, TBoxParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
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
  enterRule(_localctx, 56, TBoxParser::RuleLibrary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(TBoxParser::Identifier);
    setState(276);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(272);
        match(TBoxParser::Dot);
        setState(273);
        match(TBoxParser::Identifier); 
      }
      setState(278);
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
  enterRule(_localctx, 58, TBoxParser::RuleImportStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(TBoxParser::Import);
    setState(280);
    library();
    setState(281);
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

tree::TerminalNode* TBoxParser::TypeContext::Point() {
  return getToken(TBoxParser::Point, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Function() {
  return getToken(TBoxParser::Function, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::LeftParen() {
  return getToken(TBoxParser::LeftParen, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::RightParen() {
  return getToken(TBoxParser::RightParen, 0);
}

tree::TerminalNode* TBoxParser::TypeContext::Colon() {
  return getToken(TBoxParser::Colon, 0);
}

std::vector<TBoxParser::TypeContext *> TBoxParser::TypeContext::type() {
  return getRuleContexts<TBoxParser::TypeContext>();
}

TBoxParser::TypeContext* TBoxParser::TypeContext::type(size_t i) {
  return getRuleContext<TBoxParser::TypeContext>(i);
}

TBoxParser::LibraryContext* TBoxParser::TypeContext::library() {
  return getRuleContext<TBoxParser::LibraryContext>(0);
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
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, TBoxParser::RuleType, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(308);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::Num: {
        setState(284);
        match(TBoxParser::Num);
        break;
      }

      case TBoxParser::Byte: {
        setState(285);
        match(TBoxParser::Byte);
        break;
      }

      case TBoxParser::Short: {
        setState(286);
        match(TBoxParser::Short);
        break;
      }

      case TBoxParser::Int: {
        setState(287);
        match(TBoxParser::Int);
        break;
      }

      case TBoxParser::Long: {
        setState(288);
        match(TBoxParser::Long);
        break;
      }

      case TBoxParser::Bool: {
        setState(289);
        match(TBoxParser::Bool);
        break;
      }

      case TBoxParser::String: {
        setState(290);
        match(TBoxParser::String);
        break;
      }

      case TBoxParser::Float: {
        setState(291);
        match(TBoxParser::Float);
        break;
      }

      case TBoxParser::Double: {
        setState(292);
        match(TBoxParser::Double);
        break;
      }

      case TBoxParser::Char: {
        setState(293);
        match(TBoxParser::Char);
        break;
      }

      case TBoxParser::Var: {
        setState(294);
        match(TBoxParser::Var);
        break;
      }

      case TBoxParser::Point: {
        setState(295);
        match(TBoxParser::Point);
        break;
      }

      case TBoxParser::Function: {
        setState(296);
        match(TBoxParser::Function);
        setState(297);
        match(TBoxParser::LeftParen);
        setState(301);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
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
          | (1ULL << TBoxParser::Var)
          | (1ULL << TBoxParser::Point)
          | (1ULL << TBoxParser::Function))) != 0) || _la == TBoxParser::Identifier) {
          setState(298);
          type(0);
          setState(303);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(304);
        match(TBoxParser::RightParen);
        setState(305);
        match(TBoxParser::Colon);
        setState(306);
        type(3);
        break;
      }

      case TBoxParser::Identifier: {
        setState(307);
        library();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(314);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleType);
        setState(310);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(311);
        match(TBoxParser::T__0); 
      }
      setState(316);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
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
  enterRule(_localctx, 62, TBoxParser::RuleArgsNeed);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
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
      | (1ULL << TBoxParser::Var)
      | (1ULL << TBoxParser::Point)
      | (1ULL << TBoxParser::Function))) != 0) || _la == TBoxParser::Identifier) {
      setState(317);
      type(0);
      setState(318);
      match(TBoxParser::Identifier);
      setState(325);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TBoxParser::Comma) {
        setState(319);
        match(TBoxParser::Comma);
        setState(320);
        type(0);
        setState(321);
        match(TBoxParser::Identifier);
        setState(327);
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
  enterRule(_localctx, 64, TBoxParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TBoxParser::If)
      | (1ULL << TBoxParser::For)
      | (1ULL << TBoxParser::While)
      | (1ULL << TBoxParser::Do)
      | (1ULL << TBoxParser::Break)
      | (1ULL << TBoxParser::Continue)
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
      | (1ULL << TBoxParser::Point)
      | (1ULL << TBoxParser::Function)
      | (1ULL << TBoxParser::SemiColon)
      | (1ULL << TBoxParser::LeftParen))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (TBoxParser::Increase - 68))
      | (1ULL << (TBoxParser::Minus - 68))
      | (1ULL << (TBoxParser::Decrease - 68))
      | (1ULL << (TBoxParser::Not - 68))
      | (1ULL << (TBoxParser::Tilde - 68))
      | (1ULL << (TBoxParser::BinNum - 68))
      | (1ULL << (TBoxParser::OctNum - 68))
      | (1ULL << (TBoxParser::DecNum - 68))
      | (1ULL << (TBoxParser::HexNum - 68))
      | (1ULL << (TBoxParser::FloatNum - 68))
      | (1ULL << (TBoxParser::Identifier - 68))
      | (1ULL << (TBoxParser::StringConstant - 68)))) != 0)) {
      setState(330);
      stmt();
      setState(335);
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

TBoxParser::ContinueStmtContext* TBoxParser::StmtContext::continueStmt() {
  return getRuleContext<TBoxParser::ContinueStmtContext>(0);
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
  enterRule(_localctx, 66, TBoxParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(348);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(336);
      expr();
      setState(337);
      match(TBoxParser::SemiColon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(339);
      match(TBoxParser::SemiColon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(340);
      defVarStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(341);
      returnStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(342);
      ifStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(343);
      forStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(344);
      whileStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(345);
      doWhileStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(346);
      breakStmt();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(347);
      continueStmt();
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
  enterRule(_localctx, 68, TBoxParser::RuleReturnStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
    match(TBoxParser::Return);
    setState(352);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 58) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 58)) & ((1ULL << (TBoxParser::LeftParen - 58))
      | (1ULL << (TBoxParser::Increase - 58))
      | (1ULL << (TBoxParser::Minus - 58))
      | (1ULL << (TBoxParser::Decrease - 58))
      | (1ULL << (TBoxParser::Not - 58))
      | (1ULL << (TBoxParser::Tilde - 58))
      | (1ULL << (TBoxParser::BinNum - 58))
      | (1ULL << (TBoxParser::OctNum - 58))
      | (1ULL << (TBoxParser::DecNum - 58))
      | (1ULL << (TBoxParser::HexNum - 58))
      | (1ULL << (TBoxParser::FloatNum - 58))
      | (1ULL << (TBoxParser::Identifier - 58))
      | (1ULL << (TBoxParser::StringConstant - 58)))) != 0)) {
      setState(351);
      expr();
    }
    setState(354);
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
  enterRule(_localctx, 70, TBoxParser::RuleDefVarStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    type(0);
    setState(357);
    match(TBoxParser::Identifier);
    setState(360);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TBoxParser::Assign) {
      setState(358);
      match(TBoxParser::Assign);
      setState(359);
      expr();
    }
    setState(362);
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
  enterRule(_localctx, 72, TBoxParser::RuleStmtBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(369);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TBoxParser::LeftBrace: {
        enterOuterAlt(_localctx, 1);
        setState(364);
        match(TBoxParser::LeftBrace);
        setState(365);
        program();
        setState(366);
        match(TBoxParser::RightBrace);
        break;
      }

      case TBoxParser::If:
      case TBoxParser::For:
      case TBoxParser::While:
      case TBoxParser::Do:
      case TBoxParser::Break:
      case TBoxParser::Continue:
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
      case TBoxParser::Point:
      case TBoxParser::Function:
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
        setState(368);
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
  enterRule(_localctx, 74, TBoxParser::RuleIfStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(TBoxParser::If);
    setState(372);
    match(TBoxParser::LeftParen);
    setState(373);
    logicOrExpr();
    setState(374);
    match(TBoxParser::RightParen);
    setState(375);
    stmtBody();
    setState(384);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(376);
        match(TBoxParser::Elif);
        setState(377);
        match(TBoxParser::LeftParen);
        setState(378);
        logicOrExpr();
        setState(379);
        match(TBoxParser::RightParen);
        setState(380);
        stmtBody(); 
      }
      setState(386);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
    setState(389);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(387);
      match(TBoxParser::Else);
      setState(388);
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
  enterRule(_localctx, 76, TBoxParser::RuleForStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(TBoxParser::For);
    setState(392);
    match(TBoxParser::LeftParen);
    setState(393);
    stmt();
    setState(394);
    logicOrExpr();
    setState(395);
    match(TBoxParser::SemiColon);
    setState(396);
    expr();
    setState(397);
    match(TBoxParser::RightParen);
    setState(398);
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
  enterRule(_localctx, 78, TBoxParser::RuleWhileStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(400);
    match(TBoxParser::While);
    setState(401);
    match(TBoxParser::LeftParen);
    setState(402);
    logicOrExpr();
    setState(403);
    match(TBoxParser::RightParen);
    setState(404);
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
  enterRule(_localctx, 80, TBoxParser::RuleDoWhileStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    match(TBoxParser::Do);
    setState(407);
    match(TBoxParser::LeftBrace);
    setState(408);
    program();
    setState(409);
    match(TBoxParser::RightBrace);
    setState(410);
    match(TBoxParser::While);
    setState(411);
    match(TBoxParser::LeftParen);
    setState(412);
    logicOrExpr();
    setState(413);
    match(TBoxParser::RightParen);
    setState(414);
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
  enterRule(_localctx, 82, TBoxParser::RuleBreakStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    match(TBoxParser::Break);
    setState(417);
    match(TBoxParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStmtContext ------------------------------------------------------------------

TBoxParser::ContinueStmtContext::ContinueStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TBoxParser::ContinueStmtContext::Continue() {
  return getToken(TBoxParser::Continue, 0);
}

tree::TerminalNode* TBoxParser::ContinueStmtContext::SemiColon() {
  return getToken(TBoxParser::SemiColon, 0);
}


size_t TBoxParser::ContinueStmtContext::getRuleIndex() const {
  return TBoxParser::RuleContinueStmt;
}


antlrcpp::Any TBoxParser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TBoxVisitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}

TBoxParser::ContinueStmtContext* TBoxParser::continueStmt() {
  ContinueStmtContext *_localctx = _tracker.createInstance<ContinueStmtContext>(_ctx, getState());
  enterRule(_localctx, 84, TBoxParser::RuleContinueStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(TBoxParser::Continue);
    setState(420);
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
  enterRule(_localctx, 86, TBoxParser::RuleDefFuncStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TBoxParser::Export) {
      setState(422);
      match(TBoxParser::Export);
    }
    setState(425);
    match(TBoxParser::Func);
    setState(426);
    match(TBoxParser::Identifier);
    setState(427);
    match(TBoxParser::LeftParen);
    setState(428);
    argsNeed();
    setState(429);
    match(TBoxParser::RightParen);
    setState(432);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TBoxParser::Colon) {
      setState(430);
      match(TBoxParser::Colon);
      setState(431);
      type(0);
    }
    setState(434);
    match(TBoxParser::LeftBrace);
    setState(435);
    program();
    setState(436);
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
  enterRule(_localctx, 88, TBoxParser::RuleDefGlobalVarStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TBoxParser::Export) {
      setState(438);
      match(TBoxParser::Export);
    }
    setState(441);
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
  enterRule(_localctx, 90, TBoxParser::RuleExternFuncStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    match(TBoxParser::Extern);
    setState(444);
    match(TBoxParser::Func);
    setState(445);
    match(TBoxParser::Identifier);
    setState(446);
    match(TBoxParser::LeftParen);
    setState(447);
    argsNeed();
    setState(448);
    match(TBoxParser::RightParen);

    setState(449);
    match(TBoxParser::Colon);
    setState(450);
    type(0);
    setState(452);
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
  enterRule(_localctx, 92, TBoxParser::RuleStat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TBoxParser::Import) {
      setState(454);
      importStmt();
      setState(459);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(463);
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
      | (1ULL << TBoxParser::Var)
      | (1ULL << TBoxParser::Point)
      | (1ULL << TBoxParser::Function))) != 0) || _la == TBoxParser::Identifier) {
      setState(460);
      statStmts();
      setState(465);
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
  enterRule(_localctx, 94, TBoxParser::RuleStatStmts);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(469);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(466);
      defGlobalVarStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(467);
      defFuncStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(468);
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
    case 30: return typeSempred(dynamic_cast<TypeContext *>(context), predicateIndex);

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
  "logicOrExpr", "quesExpr", "sigmaExpr", "assignExpr", "assignOp", "args", 
  "expr", "library", "importStmt", "type", "argsNeed", "program", "stmt", 
  "returnStmt", "defVarStmt", "stmtBody", "ifStmt", "forStmt", "whileStmt", 
  "doWhileStmt", "breakStmt", "continueStmt", "defFuncStmt", "defGlobalVarStmt", 
  "externFuncStmt", "stat", "statStmts"
};

std::vector<std::string> TBoxParser::_literalNames = {
  "", "'[]'", "", "", "", "'import'", "'export'", "'of'", "'static'", "'extern'", 
  "'true'", "'false'", "'null'", "'func'", "'class'", "'struct'", "'enum'", 
  "'interface'", "'template'", "'abstract'", "'override'", "'public'", "'protected'", 
  "'private'", "'internal'", "'friendly'", "'friend'", "'if'", "'else'", 
  "'elif'", "'switch'", "'for'", "'foreach'", "'while'", "'do'", "'break'", 
  "'continue'", "'return'", "'yield'", "'num'", "'byte'", "'short'", "'int'", 
  "'long'", "'float'", "'double'", "'bool'", "'string'", "'char'", "'var'", 
  "'point'", "'function'", "'reference'", "'object'", "','", "'?'", "';'", 
  "':'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'<<'", "'>>'", "'>>>'", 
  "'+'", "'++'", "'-'", "'--'", "'*'", "'/'", "'%'", "'&'", "'&&'", "'|'", 
  "'||'", "'^'", "'!'", "'~'", "'='", "'*='", "'/='", "'%='", "'+='", "'-='", 
  "'<<='", "'>>='", "'>>>='", "'&='", "'^='", "'|='", "'<'", "'<='", "'>'", 
  "'>='", "'=='", "'!='", "'->'", "'.'", "'...'", "'$'"
};

std::vector<std::string> TBoxParser::_symbolicNames = {
  "", "", "WS", "LineComment", "BlockComment", "Import", "Export", "Of", 
  "Static", "Extern", "True", "False", "Null", "Func", "Class", "Struct", 
  "Enum", "Interface", "Template", "Abstract", "Override", "Public", "Protected", 
  "Private", "Internal", "Friendly", "Friend", "If", "Else", "Elif", "Switch", 
  "For", "Foreach", "While", "Do", "Break", "Continue", "Return", "Yield", 
  "Num", "Byte", "Short", "Int", "Long", "Float", "Double", "Bool", "String", 
  "Char", "Var", "Point", "Function", "Reference", "Object", "Comma", "Question", 
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
    0x3, 0x6f, 0x1da, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x67, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x6f, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x7, 0x5, 0x73, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x76, 0xb, 
    0x5, 0x3, 0x5, 0x7, 0x5, 0x79, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x7c, 0xb, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x88, 0xa, 0x6, 0x3, 0x7, 
    0x7, 0x7, 0x8b, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x8e, 0xb, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x94, 0xa, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x9c, 0xa, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xa2, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0xa5, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xad, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xb0, 
    0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x7, 0xf, 0xb8, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xbb, 0xb, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xc3, 
    0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xc6, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xcd, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0xd0, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
    0xd5, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xd8, 0xb, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x7, 0x15, 0xdd, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xe0, 
    0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0xe5, 0xa, 0x16, 
    0xc, 0x16, 0xe, 0x16, 0xe8, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x7, 0x17, 0xed, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0xf0, 0xb, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0xf8, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x102, 0xa, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x109, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0x10c, 0xb, 0x1c, 0x5, 0x1c, 0x10e, 0xa, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x115, 
    0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x118, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x12e, 
    0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x131, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x137, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x7, 0x20, 0x13b, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x13e, 0xb, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 
    0x21, 0x146, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x149, 0xb, 0x21, 0x5, 
    0x21, 0x14b, 0xa, 0x21, 0x3, 0x22, 0x7, 0x22, 0x14e, 0xa, 0x22, 0xc, 
    0x22, 0xe, 0x22, 0x151, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x15f, 0xa, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x163, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x16b, 0xa, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 
    0x26, 0x174, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x7, 0x27, 0x181, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x184, 0xb, 
    0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x188, 0xa, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x5, 0x2d, 0x1aa, 
    0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1b3, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x5, 0x2e, 0x1ba, 0xa, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 
    0x7, 0x30, 0x1ca, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x1cd, 0xb, 0x30, 
    0x3, 0x30, 0x7, 0x30, 0x1d0, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x1d3, 
    0xb, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1d8, 0xa, 0x31, 
    0x3, 0x31, 0x2, 0x3, 0x3e, 0x32, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
    0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x2, 0xa, 0x3, 0x2, 0x69, 0x6d, 0x4, 0x2, 
    0x47, 0x47, 0x51, 0x52, 0x4, 0x2, 0x46, 0x46, 0x48, 0x48, 0x3, 0x2, 
    0x49, 0x4b, 0x4, 0x2, 0x45, 0x45, 0x47, 0x47, 0x3, 0x2, 0x42, 0x44, 
    0x3, 0x2, 0x5f, 0x64, 0x3, 0x2, 0x53, 0x5e, 0x2, 0x1e9, 0x2, 0x62, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x70, 0x3, 0x2, 0x2, 0x2, 0xa, 0x87, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0xe, 0x95, 0x3, 0x2, 0x2, 0x2, 0x10, 0x97, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x14, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x20, 0xbe, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x24, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x101, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x103, 0x3, 0x2, 0x2, 0x2, 0x36, 0x10d, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x111, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x119, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x136, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x14a, 0x3, 0x2, 0x2, 0x2, 0x42, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x44, 0x15e, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x160, 0x3, 0x2, 0x2, 0x2, 0x48, 0x166, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x173, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x175, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x189, 0x3, 0x2, 0x2, 0x2, 0x50, 0x192, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x198, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x1b9, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1cb, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x9, 
    0x2, 0x2, 0x2, 0x63, 0x3, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x7, 0x6f, 
    0x2, 0x2, 0x65, 0x67, 0x5, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x6f, 0x5, 0x4, 0x3, 0x2, 0x69, 0x6f, 0x7, 0x6e, 0x2, 0x2, 0x6a, 
    0x6b, 0x7, 0x3c, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x38, 0x1d, 0x2, 0x6c, 0x6d, 
    0x7, 0x3d, 0x2, 0x2, 0x6d, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6a, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x70, 0x74, 0x5, 0x6, 0x4, 
    0x2, 0x71, 0x73, 0x5, 0xa, 0x6, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x76, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x76, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x79, 0x5, 0x10, 0x9, 0x2, 0x78, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x3e, 0x2, 0x2, 
    0x7e, 0x7f, 0x5, 0x38, 0x1d, 0x2, 0x7f, 0x80, 0x7, 0x3f, 0x2, 0x2, 0x80, 
    0x88, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x3c, 0x2, 0x2, 0x82, 0x83, 
    0x5, 0x36, 0x1c, 0x2, 0x83, 0x84, 0x7, 0x3d, 0x2, 0x2, 0x84, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x66, 0x2, 0x2, 0x86, 0x88, 0x7, 0x6e, 
    0x2, 0x2, 0x87, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x87, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x8b, 0x5, 0x10, 0x9, 0x2, 0x8a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x8d, 0x93, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x94, 0x5, 0x8, 0x5, 0x2, 0x90, 0x91, 0x5, 0xe, 
    0x8, 0x2, 0x91, 0x92, 0x5, 0x12, 0xa, 0x2, 0x92, 0x94, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x93, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0xd, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x9, 0x3, 0x2, 0x2, 0x96, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x9, 0x4, 0x2, 0x2, 0x98, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 0x5, 0xc, 0x7, 0x2, 0x9a, 0x9c, 0x5, 
    0x2, 0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa3, 0x5, 0x12, 0xa, 
    0x2, 0x9e, 0x9f, 0x5, 0x16, 0xc, 0x2, 0x9f, 0xa0, 0x5, 0x12, 0xa, 0x2, 
    0xa0, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0x15, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa7, 0x9, 0x5, 0x2, 0x2, 0xa7, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xae, 0x5, 0x14, 0xb, 0x2, 0xa9, 0xaa, 0x5, 0x1a, 0xe, 
    0x2, 0xaa, 0xab, 0x5, 0x14, 0xb, 0x2, 0xab, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x9, 
    0x6, 0x2, 0x2, 0xb2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb9, 0x5, 0x18, 
    0xd, 0x2, 0xb4, 0xb5, 0x5, 0x1e, 0x10, 0x2, 0xb5, 0xb6, 0x5, 0x18, 0xd, 
    0x2, 0xb6, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 
    0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x9, 0x7, 0x2, 0x2, 0xbd, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xc4, 0x5, 0x1c, 0xf, 0x2, 0xbf, 0xc0, 0x5, 0x22, 
    0x12, 0x2, 0xc0, 0xc1, 0x5, 0x1c, 0xf, 0x2, 0xc1, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 
    0x9, 0x8, 0x2, 0x2, 0xc8, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xce, 0x5, 
    0x20, 0x11, 0x2, 0xca, 0xcb, 0x7, 0x4c, 0x2, 0x2, 0xcb, 0xcd, 0x5, 0x20, 
    0x11, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0x25, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xd6, 0x5, 0x24, 0x13, 0x2, 0xd2, 0xd3, 0x7, 0x50, 0x2, 0x2, 0xd3, 0xd5, 
    0x5, 0x24, 0x13, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd8, 0x3, 
    0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0x27, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0xd9, 0xde, 0x5, 0x26, 0x14, 0x2, 0xda, 0xdb, 0x7, 0x4e, 0x2, 0x2, 
    0xdb, 0xdd, 0x5, 0x26, 0x14, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xdf, 0x29, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 
    0x2, 0x2, 0x2, 0xe1, 0xe6, 0x5, 0x28, 0x15, 0x2, 0xe2, 0xe3, 0x7, 0x4d, 
    0x2, 0x2, 0xe3, 0xe5, 0x5, 0x28, 0x15, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xee, 0x5, 0x2a, 0x16, 0x2, 0xea, 0xeb, 
    0x7, 0x4f, 0x2, 0x2, 0xeb, 0xed, 0x5, 0x2a, 0x16, 0x2, 0xec, 0xea, 0x3, 
    0x2, 0x2, 0x2, 0xed, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xee, 0xec, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf7, 0x5, 0x2c, 0x17, 0x2, 
    0xf2, 0xf3, 0x7, 0x39, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0x38, 0x1d, 0x2, 0xf4, 
    0xf5, 0x7, 0x3b, 0x2, 0x2, 0xf5, 0xf6, 0x5, 0x2e, 0x18, 0x2, 0xf6, 0xf8, 
    0x3, 0x2, 0x2, 0x2, 0xf7, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 
    0x2, 0x2, 0xfa, 0x31, 0x3, 0x2, 0x2, 0x2, 0xfb, 0x102, 0x5, 0x4, 0x3, 
    0x2, 0xfc, 0xfd, 0x5, 0x8, 0x5, 0x2, 0xfd, 0xfe, 0x5, 0x34, 0x1b, 0x2, 
    0xfe, 0xff, 0x5, 0x32, 0x1a, 0x2, 0xff, 0x102, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x102, 0x5, 0x2e, 0x18, 0x2, 0x101, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0xfc, 0x3, 0x2, 0x2, 0x2, 0x101, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x9, 0x9, 0x2, 0x2, 0x104, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x105, 0x10a, 0x5, 0x38, 0x1d, 0x2, 0x106, 0x107, 0x7, 
    0x38, 0x2, 0x2, 0x107, 0x109, 0x5, 0x38, 0x1d, 0x2, 0x108, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10e, 0x3, 
    0x2, 0x2, 0x2, 0x10c, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x105, 0x3, 
    0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x10f, 0x110, 0x5, 0x32, 0x1a, 0x2, 0x110, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x111, 0x116, 0x7, 0x6e, 0x2, 0x2, 0x112, 0x113, 0x7, 0x66, 
    0x2, 0x2, 0x113, 0x115, 0x7, 0x6e, 0x2, 0x2, 0x114, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x7, 0x2, 
    0x2, 0x11a, 0x11b, 0x5, 0x3a, 0x1e, 0x2, 0x11b, 0x11c, 0x7, 0x3a, 0x2, 
    0x2, 0x11c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x8, 0x20, 0x1, 
    0x2, 0x11e, 0x137, 0x7, 0x29, 0x2, 0x2, 0x11f, 0x137, 0x7, 0x2a, 0x2, 
    0x2, 0x120, 0x137, 0x7, 0x2b, 0x2, 0x2, 0x121, 0x137, 0x7, 0x2c, 0x2, 
    0x2, 0x122, 0x137, 0x7, 0x2d, 0x2, 0x2, 0x123, 0x137, 0x7, 0x30, 0x2, 
    0x2, 0x124, 0x137, 0x7, 0x31, 0x2, 0x2, 0x125, 0x137, 0x7, 0x2e, 0x2, 
    0x2, 0x126, 0x137, 0x7, 0x2f, 0x2, 0x2, 0x127, 0x137, 0x7, 0x32, 0x2, 
    0x2, 0x128, 0x137, 0x7, 0x33, 0x2, 0x2, 0x129, 0x137, 0x7, 0x34, 0x2, 
    0x2, 0x12a, 0x12b, 0x7, 0x35, 0x2, 0x2, 0x12b, 0x12f, 0x7, 0x3c, 0x2, 
    0x2, 0x12c, 0x12e, 0x5, 0x3e, 0x20, 0x2, 0x12d, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x131, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x132, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x7, 0x3d, 0x2, 
    0x2, 0x133, 0x134, 0x7, 0x3b, 0x2, 0x2, 0x134, 0x137, 0x5, 0x3e, 0x20, 
    0x5, 0x135, 0x137, 0x5, 0x3a, 0x1e, 0x2, 0x136, 0x11d, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x136, 0x120, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x121, 0x3, 0x2, 0x2, 0x2, 0x136, 0x122, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x123, 0x3, 0x2, 0x2, 0x2, 0x136, 0x124, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x125, 0x3, 0x2, 0x2, 0x2, 0x136, 0x126, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x127, 0x3, 0x2, 0x2, 0x2, 0x136, 0x128, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x129, 0x3, 0x2, 0x2, 0x2, 0x136, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x13c, 0x3, 0x2, 0x2, 
    0x2, 0x138, 0x139, 0xc, 0x3, 0x2, 0x2, 0x139, 0x13b, 0x7, 0x3, 0x2, 
    0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x13c, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 
    0x2, 0x13d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 0x2, 
    0x13f, 0x140, 0x5, 0x3e, 0x20, 0x2, 0x140, 0x147, 0x7, 0x6e, 0x2, 0x2, 
    0x141, 0x142, 0x7, 0x38, 0x2, 0x2, 0x142, 0x143, 0x5, 0x3e, 0x20, 0x2, 
    0x143, 0x144, 0x7, 0x6e, 0x2, 0x2, 0x144, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x145, 0x141, 0x3, 0x2, 0x2, 0x2, 0x146, 0x149, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 
    0x148, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 
    0x14a, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 
    0x14b, 0x41, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14e, 0x5, 0x44, 0x23, 0x2, 
    0x14d, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x151, 0x3, 0x2, 0x2, 0x2, 
    0x14f, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 
    0x150, 0x43, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x152, 
    0x153, 0x5, 0x38, 0x1d, 0x2, 0x153, 0x154, 0x7, 0x3a, 0x2, 0x2, 0x154, 
    0x15f, 0x3, 0x2, 0x2, 0x2, 0x155, 0x15f, 0x7, 0x3a, 0x2, 0x2, 0x156, 
    0x15f, 0x5, 0x48, 0x25, 0x2, 0x157, 0x15f, 0x5, 0x46, 0x24, 0x2, 0x158, 
    0x15f, 0x5, 0x4c, 0x27, 0x2, 0x159, 0x15f, 0x5, 0x4e, 0x28, 0x2, 0x15a, 
    0x15f, 0x5, 0x50, 0x29, 0x2, 0x15b, 0x15f, 0x5, 0x52, 0x2a, 0x2, 0x15c, 
    0x15f, 0x5, 0x54, 0x2b, 0x2, 0x15d, 0x15f, 0x5, 0x56, 0x2c, 0x2, 0x15e, 
    0x152, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x155, 0x3, 0x2, 0x2, 0x2, 0x15e, 
    0x156, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x157, 0x3, 0x2, 0x2, 0x2, 0x15e, 
    0x158, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15e, 
    0x15a, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15e, 
    0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15f, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x160, 0x162, 0x7, 0x27, 0x2, 0x2, 0x161, 
    0x163, 0x5, 0x38, 0x1d, 0x2, 0x162, 0x161, 0x3, 0x2, 0x2, 0x2, 0x162, 
    0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 
    0x165, 0x7, 0x3a, 0x2, 0x2, 0x165, 0x47, 0x3, 0x2, 0x2, 0x2, 0x166, 
    0x167, 0x5, 0x3e, 0x20, 0x2, 0x167, 0x16a, 0x7, 0x6e, 0x2, 0x2, 0x168, 
    0x169, 0x7, 0x53, 0x2, 0x2, 0x169, 0x16b, 0x5, 0x38, 0x1d, 0x2, 0x16a, 
    0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x7, 0x3a, 0x2, 0x2, 0x16d, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x7, 0x40, 0x2, 0x2, 0x16f, 
    0x170, 0x5, 0x42, 0x22, 0x2, 0x170, 0x171, 0x7, 0x41, 0x2, 0x2, 0x171, 
    0x174, 0x3, 0x2, 0x2, 0x2, 0x172, 0x174, 0x5, 0x44, 0x23, 0x2, 0x173, 
    0x16e, 0x3, 0x2, 0x2, 0x2, 0x173, 0x172, 0x3, 0x2, 0x2, 0x2, 0x174, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x7, 0x1d, 0x2, 0x2, 0x176, 
    0x177, 0x7, 0x3c, 0x2, 0x2, 0x177, 0x178, 0x5, 0x2c, 0x17, 0x2, 0x178, 
    0x179, 0x7, 0x3d, 0x2, 0x2, 0x179, 0x182, 0x5, 0x4a, 0x26, 0x2, 0x17a, 
    0x17b, 0x7, 0x1f, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0x3c, 0x2, 0x2, 0x17c, 
    0x17d, 0x5, 0x2c, 0x17, 0x2, 0x17d, 0x17e, 0x7, 0x3d, 0x2, 0x2, 0x17e, 
    0x17f, 0x5, 0x4a, 0x26, 0x2, 0x17f, 0x181, 0x3, 0x2, 0x2, 0x2, 0x180, 
    0x17a, 0x3, 0x2, 0x2, 0x2, 0x181, 0x184, 0x3, 0x2, 0x2, 0x2, 0x182, 
    0x180, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x3, 0x2, 0x2, 0x2, 0x183, 
    0x187, 0x3, 0x2, 0x2, 0x2, 0x184, 0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 
    0x186, 0x7, 0x1e, 0x2, 0x2, 0x186, 0x188, 0x5, 0x4a, 0x26, 0x2, 0x187, 
    0x185, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x7, 0x21, 0x2, 0x2, 0x18a, 
    0x18b, 0x7, 0x3c, 0x2, 0x2, 0x18b, 0x18c, 0x5, 0x44, 0x23, 0x2, 0x18c, 
    0x18d, 0x5, 0x2c, 0x17, 0x2, 0x18d, 0x18e, 0x7, 0x3a, 0x2, 0x2, 0x18e, 
    0x18f, 0x5, 0x38, 0x1d, 0x2, 0x18f, 0x190, 0x7, 0x3d, 0x2, 0x2, 0x190, 
    0x191, 0x5, 0x4a, 0x26, 0x2, 0x191, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x192, 
    0x193, 0x7, 0x23, 0x2, 0x2, 0x193, 0x194, 0x7, 0x3c, 0x2, 0x2, 0x194, 
    0x195, 0x5, 0x2c, 0x17, 0x2, 0x195, 0x196, 0x7, 0x3d, 0x2, 0x2, 0x196, 
    0x197, 0x5, 0x4a, 0x26, 0x2, 0x197, 0x51, 0x3, 0x2, 0x2, 0x2, 0x198, 
    0x199, 0x7, 0x24, 0x2, 0x2, 0x199, 0x19a, 0x7, 0x40, 0x2, 0x2, 0x19a, 
    0x19b, 0x5, 0x42, 0x22, 0x2, 0x19b, 0x19c, 0x7, 0x41, 0x2, 0x2, 0x19c, 
    0x19d, 0x7, 0x23, 0x2, 0x2, 0x19d, 0x19e, 0x7, 0x3c, 0x2, 0x2, 0x19e, 
    0x19f, 0x5, 0x2c, 0x17, 0x2, 0x19f, 0x1a0, 0x7, 0x3d, 0x2, 0x2, 0x1a0, 
    0x1a1, 0x7, 0x3a, 0x2, 0x2, 0x1a1, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
    0x1a3, 0x7, 0x25, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 0x3a, 0x2, 0x2, 0x1a4, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x7, 0x26, 0x2, 0x2, 0x1a6, 
    0x1a7, 0x7, 0x3a, 0x2, 0x2, 0x1a7, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
    0x1aa, 0x7, 0x8, 0x2, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
    0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 
    0x1ac, 0x7, 0xf, 0x2, 0x2, 0x1ac, 0x1ad, 0x7, 0x6e, 0x2, 0x2, 0x1ad, 
    0x1ae, 0x7, 0x3c, 0x2, 0x2, 0x1ae, 0x1af, 0x5, 0x40, 0x21, 0x2, 0x1af, 
    0x1b2, 0x7, 0x3d, 0x2, 0x2, 0x1b0, 0x1b1, 0x7, 0x3b, 0x2, 0x2, 0x1b1, 
    0x1b3, 0x5, 0x3e, 0x20, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 
    0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 
    0x1b5, 0x7, 0x40, 0x2, 0x2, 0x1b5, 0x1b6, 0x5, 0x42, 0x22, 0x2, 0x1b6, 
    0x1b7, 0x7, 0x41, 0x2, 0x2, 0x1b7, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1b8, 
    0x1ba, 0x7, 0x8, 0x2, 0x2, 0x1b9, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
    0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
    0x1bc, 0x5, 0x48, 0x25, 0x2, 0x1bc, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x1bd, 
    0x1be, 0x7, 0xb, 0x2, 0x2, 0x1be, 0x1bf, 0x7, 0xf, 0x2, 0x2, 0x1bf, 
    0x1c0, 0x7, 0x6e, 0x2, 0x2, 0x1c0, 0x1c1, 0x7, 0x3c, 0x2, 0x2, 0x1c1, 
    0x1c2, 0x5, 0x40, 0x21, 0x2, 0x1c2, 0x1c3, 0x7, 0x3d, 0x2, 0x2, 0x1c3, 
    0x1c4, 0x7, 0x3b, 0x2, 0x2, 0x1c4, 0x1c5, 0x5, 0x3e, 0x20, 0x2, 0x1c5, 
    0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x7, 0x3a, 0x2, 0x2, 0x1c7, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1ca, 0x5, 0x3c, 0x1f, 0x2, 0x1c9, 
    0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cb, 
    0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cc, 
    0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1ce, 
    0x1d0, 0x5, 0x60, 0x31, 0x2, 0x1cf, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d0, 
    0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 
    0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d1, 
    0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d8, 0x5, 0x5a, 0x2e, 0x2, 0x1d5, 0x1d8, 
    0x5, 0x58, 0x2d, 0x2, 0x1d6, 0x1d8, 0x5, 0x5c, 0x2f, 0x2, 0x1d7, 0x1d4, 
    0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d6, 
    0x3, 0x2, 0x2, 0x2, 0x1d8, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x66, 0x6e, 
    0x74, 0x7a, 0x87, 0x8c, 0x93, 0x9b, 0xa3, 0xae, 0xb9, 0xc4, 0xce, 0xd6, 
    0xde, 0xe6, 0xee, 0xf7, 0x101, 0x10a, 0x10d, 0x116, 0x12f, 0x136, 0x13c, 
    0x147, 0x14a, 0x14f, 0x15e, 0x162, 0x16a, 0x173, 0x182, 0x187, 0x1a9, 
    0x1b2, 0x1b9, 0x1cb, 0x1d1, 0x1d7, 
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
