
// Generated from ./TBox.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace tbox::language {


class  TBoxLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, WS = 2, LineComment = 3, BlockComment = 4, Import = 5, Export = 6, 
    Of = 7, Static = 8, Extern = 9, True = 10, False = 11, Null = 12, Func = 13, 
    Class = 14, Struct = 15, Enum = 16, Interface = 17, Abstract = 18, Override = 19, 
    Public = 20, Protected = 21, Private = 22, Internal = 23, Friendly = 24, 
    Friend = 25, If = 26, Else = 27, Elif = 28, Switch = 29, For = 30, Foreach = 31, 
    While = 32, Do = 33, Break = 34, Return = 35, Num = 36, Byte = 37, Short = 38, 
    Int = 39, Long = 40, Float = 41, Double = 42, Bool = 43, String = 44, 
    Char = 45, Var = 46, Comma = 47, Question = 48, SemiColon = 49, Colon = 50, 
    LeftParen = 51, RightParen = 52, LeftBracket = 53, RightBracket = 54, 
    LeftBrace = 55, RightBrace = 56, LeftShift = 57, ARightShift = 58, LRightShift = 59, 
    Plus = 60, Increase = 61, Minus = 62, Decrease = 63, Star = 64, Div = 65, 
    Mod = 66, And = 67, LogicAnd = 68, Or = 69, LogicOr = 70, Xor = 71, 
    Not = 72, Tilde = 73, Assign = 74, MulAssign = 75, DivAssign = 76, ModAssign = 77, 
    PlusAssign = 78, MinusAssign = 79, LeftShiftAssign = 80, ARightShiftAssign = 81, 
    LRightShiftAssign = 82, AndAssign = 83, XorAssign = 84, OrAssign = 85, 
    Less = 86, LessEqual = 87, Greater = 88, GreaterEqual = 89, Equal = 90, 
    NotEqual = 91, Arrow = 92, Dot = 93, Ellipsis = 94, Dollar = 95, BinNum = 96, 
    OctNum = 97, DecNum = 98, HexNum = 99, FloatNum = 100, Identifier = 101, 
    StringConstant = 102
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
