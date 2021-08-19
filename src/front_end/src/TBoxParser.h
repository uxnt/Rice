
// Generated from ./TBox.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace tbox::language {


class  TBoxParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, WS = 2, LineComment = 3, BlockComment = 4, Import = 5, Export = 6, 
    Of = 7, Static = 8, Extern = 9, True = 10, False = 11, Null = 12, Func = 13, 
    Class = 14, Struct = 15, Enum = 16, Interface = 17, Template = 18, Abstract = 19, 
    Override = 20, Public = 21, Protected = 22, Private = 23, Internal = 24, 
    Friendly = 25, Friend = 26, If = 27, Else = 28, Elif = 29, Switch = 30, 
    For = 31, Foreach = 32, While = 33, Do = 34, Break = 35, Continue = 36, 
    Return = 37, Yield = 38, Num = 39, Byte = 40, Short = 41, Int = 42, 
    Long = 43, Float = 44, Double = 45, Bool = 46, String = 47, Char = 48, 
    Var = 49, Point = 50, Function = 51, Reference = 52, Object = 53, Comma = 54, 
    Question = 55, SemiColon = 56, Colon = 57, LeftParen = 58, RightParen = 59, 
    LeftBracket = 60, RightBracket = 61, LeftBrace = 62, RightBrace = 63, 
    LeftShift = 64, ARightShift = 65, LRightShift = 66, Plus = 67, Increase = 68, 
    Minus = 69, Decrease = 70, Star = 71, Div = 72, Mod = 73, And = 74, 
    LogicAnd = 75, Or = 76, LogicOr = 77, Xor = 78, Not = 79, Tilde = 80, 
    Assign = 81, MulAssign = 82, DivAssign = 83, ModAssign = 84, PlusAssign = 85, 
    MinusAssign = 86, LeftShiftAssign = 87, ARightShiftAssign = 88, LRightShiftAssign = 89, 
    AndAssign = 90, XorAssign = 91, OrAssign = 92, Less = 93, LessEqual = 94, 
    Greater = 95, GreaterEqual = 96, Equal = 97, NotEqual = 98, Arrow = 99, 
    Dot = 100, Ellipsis = 101, Dollar = 102, BinNum = 103, OctNum = 104, 
    DecNum = 105, HexNum = 106, FloatNum = 107, Identifier = 108, StringConstant = 109
  };

  enum {
    RuleNum = 0, RuleConstant = 1, RulePrimExpr = 2, RulePostExpr = 3, RulePostOp = 4, 
    RuleUnaryExpr = 5, RuleUnaryOp = 6, RuleIncOrDecOp = 7, RuleCastExpr = 8, 
    RuleMulExpr = 9, RuleMulOp = 10, RuleAddExpr = 11, RuleAddOp = 12, RuleShiftExpr = 13, 
    RuleShiftOp = 14, RuleCmpExpr = 15, RuleCmpOp = 16, RuleAndExpr = 17, 
    RuleXorExpr = 18, RuleOrExpr = 19, RuleLogicAndExpr = 20, RuleLogicOrExpr = 21, 
    RuleQuesExpr = 22, RuleSigmaExpr = 23, RuleAssignExpr = 24, RuleAssignOp = 25, 
    RuleArgs = 26, RuleExpr = 27, RuleLibrary = 28, RuleImportStmt = 29, 
    RuleType = 30, RuleArgsNeed = 31, RuleProgram = 32, RuleStmt = 33, RuleReturnStmt = 34, 
    RuleDefVarStmt = 35, RuleStmtBody = 36, RuleIfStmt = 37, RuleForStmt = 38, 
    RuleWhileStmt = 39, RuleDoWhileStmt = 40, RuleBreakStmt = 41, RuleContinueStmt = 42, 
    RuleDefFuncStmt = 43, RuleDefGlobalVarStmt = 44, RuleExternFuncStmt = 45, 
    RuleStat = 46, RuleStatStmts = 47
  };

  TBoxParser(antlr4::TokenStream *input);
  ~TBoxParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class NumContext;
  class ConstantContext;
  class PrimExprContext;
  class PostExprContext;
  class PostOpContext;
  class UnaryExprContext;
  class UnaryOpContext;
  class IncOrDecOpContext;
  class CastExprContext;
  class MulExprContext;
  class MulOpContext;
  class AddExprContext;
  class AddOpContext;
  class ShiftExprContext;
  class ShiftOpContext;
  class CmpExprContext;
  class CmpOpContext;
  class AndExprContext;
  class XorExprContext;
  class OrExprContext;
  class LogicAndExprContext;
  class LogicOrExprContext;
  class QuesExprContext;
  class SigmaExprContext;
  class AssignExprContext;
  class AssignOpContext;
  class ArgsContext;
  class ExprContext;
  class LibraryContext;
  class ImportStmtContext;
  class TypeContext;
  class ArgsNeedContext;
  class ProgramContext;
  class StmtContext;
  class ReturnStmtContext;
  class DefVarStmtContext;
  class StmtBodyContext;
  class IfStmtContext;
  class ForStmtContext;
  class WhileStmtContext;
  class DoWhileStmtContext;
  class BreakStmtContext;
  class ContinueStmtContext;
  class DefFuncStmtContext;
  class DefGlobalVarStmtContext;
  class ExternFuncStmtContext;
  class StatContext;
  class StatStmtsContext; 

  class  NumContext : public antlr4::ParserRuleContext {
  public:
    NumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BinNum();
    antlr4::tree::TerminalNode *OctNum();
    antlr4::tree::TerminalNode *DecNum();
    antlr4::tree::TerminalNode *HexNum();
    antlr4::tree::TerminalNode *FloatNum();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumContext* num();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringConstant();
    NumContext *num();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  PrimExprContext : public antlr4::ParserRuleContext {
  public:
    PrimExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimExprContext* primExpr();

  class  PostExprContext : public antlr4::ParserRuleContext {
  public:
    PostExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimExprContext *primExpr();
    std::vector<PostOpContext *> postOp();
    PostOpContext* postOp(size_t i);
    std::vector<IncOrDecOpContext *> incOrDecOp();
    IncOrDecOpContext* incOrDecOp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostExprContext* postExpr();

  class  PostOpContext : public antlr4::ParserRuleContext {
  public:
    PostOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *LeftParen();
    ArgsContext *args();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Dot();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostOpContext* postOp();

  class  UnaryExprContext : public antlr4::ParserRuleContext {
  public:
    UnaryExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostExprContext *postExpr();
    UnaryOpContext *unaryOp();
    CastExprContext *castExpr();
    std::vector<IncOrDecOpContext *> incOrDecOp();
    IncOrDecOpContext* incOrDecOp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExprContext* unaryExpr();

  class  UnaryOpContext : public antlr4::ParserRuleContext {
  public:
    UnaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Not();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOpContext* unaryOp();

  class  IncOrDecOpContext : public antlr4::ParserRuleContext {
  public:
    IncOrDecOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Increase();
    antlr4::tree::TerminalNode *Decrease();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncOrDecOpContext* incOrDecOp();

  class  CastExprContext : public antlr4::ParserRuleContext {
  public:
    CastExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExprContext *unaryExpr();
    NumContext *num();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastExprContext* castExpr();

  class  MulExprContext : public antlr4::ParserRuleContext {
  public:
    MulExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CastExprContext *> castExpr();
    CastExprContext* castExpr(size_t i);
    std::vector<MulOpContext *> mulOp();
    MulOpContext* mulOp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulExprContext* mulExpr();

  class  MulOpContext : public antlr4::ParserRuleContext {
  public:
    MulOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulOpContext* mulOp();

  class  AddExprContext : public antlr4::ParserRuleContext {
  public:
    AddExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MulExprContext *> mulExpr();
    MulExprContext* mulExpr(size_t i);
    std::vector<AddOpContext *> addOp();
    AddOpContext* addOp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddExprContext* addExpr();

  class  AddOpContext : public antlr4::ParserRuleContext {
  public:
    AddOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddOpContext* addOp();

  class  ShiftExprContext : public antlr4::ParserRuleContext {
  public:
    ShiftExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AddExprContext *> addExpr();
    AddExprContext* addExpr(size_t i);
    std::vector<ShiftOpContext *> shiftOp();
    ShiftOpContext* shiftOp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftExprContext* shiftExpr();

  class  ShiftOpContext : public antlr4::ParserRuleContext {
  public:
    ShiftOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftShift();
    antlr4::tree::TerminalNode *ARightShift();
    antlr4::tree::TerminalNode *LRightShift();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftOpContext* shiftOp();

  class  CmpExprContext : public antlr4::ParserRuleContext {
  public:
    CmpExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ShiftExprContext *> shiftExpr();
    ShiftExprContext* shiftExpr(size_t i);
    std::vector<CmpOpContext *> cmpOp();
    CmpOpContext* cmpOp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CmpExprContext* cmpExpr();

  class  CmpOpContext : public antlr4::ParserRuleContext {
  public:
    CmpOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CmpOpContext* cmpOp();

  class  AndExprContext : public antlr4::ParserRuleContext {
  public:
    AndExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CmpExprContext *> cmpExpr();
    CmpExprContext* cmpExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndExprContext* andExpr();

  class  XorExprContext : public antlr4::ParserRuleContext {
  public:
    XorExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndExprContext *> andExpr();
    AndExprContext* andExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Xor();
    antlr4::tree::TerminalNode* Xor(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XorExprContext* xorExpr();

  class  OrExprContext : public antlr4::ParserRuleContext {
  public:
    OrExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<XorExprContext *> xorExpr();
    XorExprContext* xorExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrExprContext* orExpr();

  class  LogicAndExprContext : public antlr4::ParserRuleContext {
  public:
    LogicAndExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OrExprContext *> orExpr();
    OrExprContext* orExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LogicAnd();
    antlr4::tree::TerminalNode* LogicAnd(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicAndExprContext* logicAndExpr();

  class  LogicOrExprContext : public antlr4::ParserRuleContext {
  public:
    LogicOrExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicAndExprContext *> logicAndExpr();
    LogicAndExprContext* logicAndExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LogicOr();
    antlr4::tree::TerminalNode* LogicOr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicOrExprContext* logicOrExpr();

  class  QuesExprContext : public antlr4::ParserRuleContext {
  public:
    QuesExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicOrExprContext *logicOrExpr();
    antlr4::tree::TerminalNode *Question();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Colon();
    QuesExprContext *quesExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuesExprContext* quesExpr();

  class  SigmaExprContext : public antlr4::ParserRuleContext {
  public:
    SigmaExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SigmaExprContext* sigmaExpr();

  class  AssignExprContext : public antlr4::ParserRuleContext {
  public:
    AssignExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    PostExprContext *postExpr();
    AssignOpContext *assignOp();
    AssignExprContext *assignExpr();
    QuesExprContext *quesExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignExprContext* assignExpr();

  class  AssignOpContext : public antlr4::ParserRuleContext {
  public:
    AssignOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *MulAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *ARightShiftAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *LRightShiftAssign();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignOpContext* assignOp();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignExprContext *assignExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  LibraryContext : public antlr4::ParserRuleContext {
  public:
    LibraryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LibraryContext* library();

  class  ImportStmtContext : public antlr4::ParserRuleContext {
  public:
    ImportStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Import();
    LibraryContext *library();
    antlr4::tree::TerminalNode *SemiColon();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStmtContext* importStmt();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Num();
    antlr4::tree::TerminalNode *Byte();
    antlr4::tree::TerminalNode *Short();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Point();
    antlr4::tree::TerminalNode *Function();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Colon();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    LibraryContext *library();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();
  TypeContext* type(int precedence);
  class  ArgsNeedContext : public antlr4::ParserRuleContext {
  public:
    ArgsNeedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsNeedContext* argsNeed();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *SemiColon();
    DefVarStmtContext *defVarStmt();
    ReturnStmtContext *returnStmt();
    IfStmtContext *ifStmt();
    ForStmtContext *forStmt();
    WhileStmtContext *whileStmt();
    DoWhileStmtContext *doWhileStmt();
    BreakStmtContext *breakStmt();
    ContinueStmtContext *continueStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *SemiColon();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  DefVarStmtContext : public antlr4::ParserRuleContext {
  public:
    DefVarStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *Assign();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefVarStmtContext* defVarStmt();

  class  StmtBodyContext : public antlr4::ParserRuleContext {
  public:
    StmtBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    ProgramContext *program();
    antlr4::tree::TerminalNode *RightBrace();
    StmtContext *stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtBodyContext* stmtBody();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    std::vector<antlr4::tree::TerminalNode *> LeftParen();
    antlr4::tree::TerminalNode* LeftParen(size_t i);
    std::vector<LogicOrExprContext *> logicOrExpr();
    LogicOrExprContext* logicOrExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightParen();
    antlr4::tree::TerminalNode* RightParen(size_t i);
    std::vector<StmtBodyContext *> stmtBody();
    StmtBodyContext* stmtBody(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Elif();
    antlr4::tree::TerminalNode* Elif(size_t i);
    antlr4::tree::TerminalNode *Else();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStmtContext* ifStmt();

  class  ForStmtContext : public antlr4::ParserRuleContext {
  public:
    ForStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *LeftParen();
    StmtContext *stmt();
    LogicOrExprContext *logicOrExpr();
    antlr4::tree::TerminalNode *SemiColon();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();
    StmtBodyContext *stmtBody();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStmtContext* forStmt();

  class  WhileStmtContext : public antlr4::ParserRuleContext {
  public:
    WhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    LogicOrExprContext *logicOrExpr();
    antlr4::tree::TerminalNode *RightParen();
    StmtBodyContext *stmtBody();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStmtContext* whileStmt();

  class  DoWhileStmtContext : public antlr4::ParserRuleContext {
  public:
    DoWhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Do();
    antlr4::tree::TerminalNode *LeftBrace();
    ProgramContext *program();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    LogicOrExprContext *logicOrExpr();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *SemiColon();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoWhileStmtContext* doWhileStmt();

  class  BreakStmtContext : public antlr4::ParserRuleContext {
  public:
    BreakStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *SemiColon();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStmtContext* breakStmt();

  class  ContinueStmtContext : public antlr4::ParserRuleContext {
  public:
    ContinueStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *SemiColon();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueStmtContext* continueStmt();

  class  DefFuncStmtContext : public antlr4::ParserRuleContext {
  public:
    DefFuncStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Func();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftParen();
    ArgsNeedContext *argsNeed();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBrace();
    ProgramContext *program();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Export();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefFuncStmtContext* defFuncStmt();

  class  DefGlobalVarStmtContext : public antlr4::ParserRuleContext {
  public:
    DefGlobalVarStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefVarStmtContext *defVarStmt();
    antlr4::tree::TerminalNode *Export();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefGlobalVarStmtContext* defGlobalVarStmt();

  class  ExternFuncStmtContext : public antlr4::ParserRuleContext {
  public:
    ExternFuncStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Func();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftParen();
    ArgsNeedContext *argsNeed();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternFuncStmtContext* externFuncStmt();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImportStmtContext *> importStmt();
    ImportStmtContext* importStmt(size_t i);
    std::vector<StatStmtsContext *> statStmts();
    StatStmtsContext* statStmts(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class  StatStmtsContext : public antlr4::ParserRuleContext {
  public:
    StatStmtsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefGlobalVarStmtContext *defGlobalVarStmt();
    DefFuncStmtContext *defFuncStmt();
    ExternFuncStmtContext *externFuncStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatStmtsContext* statStmts();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool typeSempred(TypeContext *_localctx, size_t predicateIndex);

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

}  // namespace tbox::language
