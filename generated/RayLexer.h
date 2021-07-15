
// Generated from Ray.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  RayLexer : public antlr4::Lexer {
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

  explicit RayLexer(antlr4::CharStream *input);
  ~RayLexer();

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

