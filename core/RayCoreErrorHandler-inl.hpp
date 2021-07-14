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
            if(offendingSymbol != nullptr)
            {
                        
                line = offendingSymbol->getLine();
                charPositionInLine = offendingSymbol->getCharPositionInLine();
                fprintf(stderr,"%s:%lld,%lld:  At token '%s' , error: %s \n"  
                                ,filename.data(),
                                (long long )(line),
                                (long long)(charPositionInLine),
                                offendingSymbol->getText().c_str(),
                                msg.c_str()
                        );
                underLineError(recognizer, offendingSymbol, line, charPositionInLine);
            }else{
                fprintf(stderr,"%s:%lld,%lld: Error: %s \n"  
                                ,filename.data(),
                                (long long )(line),
                                (long long)(charPositionInLine),
                                msg.c_str()
                        );
            }
            errorCount ++;
        }

    
    inline void underLineError(
            Recognizer *recognizer,Token *offendingToken,
            size_t line,size_t charPositionInLine){
        const antlr4::CommonTokenStream *tokens= &tks; 
        const std::string &input= ins.toString();
        std::vector<std::string> lines;
        split(input, lines, "\n");
        line = offendingToken->getLine();
        charPositionInLine = offendingToken->getCharPositionInLine();
        std::string errorLine = lines[line-1];
        std::cerr << errorLine << std::endl;

        for(size_t i = 0; i < charPositionInLine; i++)   fprintf(stderr," ");
        size_t start = offendingToken->getStartIndex();
        size_t stop = offendingToken->getStopIndex();
        
        if(start >= 0 && stop >= 0 )   for(size_t  i=start;i<=stop;i++) fprintf(stderr,"^");
    }

    inline void split(const std::string& s, std::vector<std::string>& v, const std::string& c)
    {
        std::string::size_type pos1, pos2;
        pos2 = s.find(c);
        pos1 = 0;
        while(std::string::npos != pos2)
        {
            v.push_back(s.substr(pos1, pos2-pos1));
        
            pos1 = pos2 + c.size();
            pos2 = s.find(c, pos1);
        }
        if(pos1 != s.length())
            v.push_back(s.substr(pos1));
    }

    RayCoreErrorListener(std::string filename,
        const antlr4::ANTLRInputStream &ins,
        const antlr4::CommonTokenStream &tks):
        filename(filename),
        errorCount(0),
        ins(ins),
        tks(tks)
    {

    }

    std::string filename;
    size_t errorCount;
    const antlr4::ANTLRInputStream &ins;
    const antlr4::CommonTokenStream &tks;
};