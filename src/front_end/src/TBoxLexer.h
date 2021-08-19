
// Generated from ./TBox.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace tbox::language {


class  TBoxLexer : public antlr4::Lexer {
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

  TBoxLexer(antlr4::CharStream *input);
  ~TBoxLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace tbox::language
