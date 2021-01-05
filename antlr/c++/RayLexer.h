
// Generated from Ray.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  RayLexer : public antlr4::Lexer {
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

