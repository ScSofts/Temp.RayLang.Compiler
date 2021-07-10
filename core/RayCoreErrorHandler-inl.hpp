#include "antlr4-runtime.h"

class RayCoreErrorListener : public antlr4::BaseErrorListener{
    public:
    using Recognizer =  antlr4::Recognizer;
    using Token = antlr4::Token;
    using Parser = antlr4::Parser;
    using ATNConfigSet = antlr4::atn::ATNConfigSet;
    using DFA = antlr4::dfa::DFA;

    virtual void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line,
        size_t charPositionInLine, const std::string &msg,
        std::exception_ptr e)override
        {
            std::cerr << "Error in "<< filename << ":" << line << "," << charPositionInLine << ": " << msg << std::endl;
        }
    
    RayCoreErrorListener(std::string filename):filename(filename){

    }
    std::string filename;
};