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
        try{
          compile(f,*i);
        }catch(std::range_error &e){
          std::cerr << "Unrecognized file format \"" << *i << "\" ! " << std::endl;
        }catch(std::exception &e){
          std::cerr << "Compiler throwed a exception when handling \"" << *i << "\" : "<< e.what() << std::endl;
        }
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
  antlr4::CommonTokenStream tks(&lexer);
  RayCoreErrorListener errorListener{name,ins,tks};
  lexer.removeErrorListeners();
  lexer.addErrorListener(&errorListener);  

  RayParser parser(&tks);
  parser.removeErrorListeners();
  parser.addErrorListener(&errorListener);
  
  if(errorListener.errorCount > 0){
    std::fprintf(stderr,
                  "Compile \"%s\" failed with %lld error(s).",
                  name.c_str(),
                  errorListener.errorCount
                );
    return;
  }
  llvm::LLVMContext context;
  std::unique_ptr<llvm::Module> module = std::make_unique<llvm::Module>(name , context);
  module->setSourceFileName(name);
  //visit and generate ir code
  RayCoreVisitor visitor{name,tks,std::move(module)};
  visitor.visit(parser.start());
}