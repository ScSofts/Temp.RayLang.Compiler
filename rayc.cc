#include "utils/help-inl.hxx"
#include "RayLexer.h"
#include "RayParser.h"
#include "RayCoreVisitor.hpp"
#include "RayCoreErrorHandler-inl.hpp"
#include <vector>
#include <string>
#include <fstream>

void compile(std::ifstream & f, std::string name);

int main(int argc, const char** argv) {
  std::vector<std::string> args( argv , argv + argc);
  if(args.size() == 1){
    help(args[0]);
  }else{
    for(auto i = args.begin() + 1; i < args.end();i++){
      if((*i)[0] != '-'){
        std::ifstream f(*i,std::ios::binary);
        compile(f,*i);
      }
    }
  }
  return 0;
}

void compile(std::ifstream & f, std::string name){
  if(!f.is_open()){
    std::cerr << "Failed to open " << name << "!" << std::endl;
    exit(-1);
  }

  //token sources
  antlr4::ANTLRInputStream ins(f);
  RayLexer lexer(&ins);
  RayCoreErrorListener errorListener{name};
  lexer.removeErrorListeners();
  lexer.addErrorListener(&errorListener);
  antlr4::CommonTokenStream tks(&lexer);
  

  RayParser parser(&tks);
  parser.removeErrorListeners();
  parser.addErrorListener(&errorListener);
  
  //visit and generate ir code
  RayCoreVisitor visitor{name};
  visitor.visit(parser.start());
}