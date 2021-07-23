#include <fstream>
#include <string>
#include <vector>

#include "RayCoreErrorHandler-inl.hpp"
#include "RayCoreVisitor.hpp"
#include "RayLexer.h"
#include "RayParser.h"
#include "utils/help-inl.hxx"
#include "utils/llvm-all.h"

bool isModule(const std::string &name);
void compile(std::ifstream &f, std::string name);

int main(int argc, const char **argv) {
  llvm::outs().enable_colors(true);
  llvm::outs().changeColor(llvm::outs().WHITE);

  std::vector<std::string> args(argv, argv + argc);
  if (args.size() == 1) {
    help(args[0]);
  } else {
    for (auto i = args.begin() + 1; i < args.end(); i++) {
      if ((*i)[0] != '-') {
        if (!isModule(*i)) {
          std::cerr << "Unrecognized file format \"" << *i << "\" ! "
                    << std::endl;
          continue;
        }
        std::ifstream f(*i, std::ios::binary);
        try {
          compile(f, *i);
        } catch (std::range_error &e) {
          std::cerr << "Unrecognized file format \"" << *i << "\" ! "
                    << std::endl;
          continue;
        } catch (std::exception &e) {
          std::cerr << "Compiler throwed a exception when handling \"" << *i
                    << "\" : " << e.what() << std::endl;
          continue;
        }
      }
    }
  }

  llvm::outs().changeColor(llvm::outs().WHITE);
  llvm::outs().enable_colors(false);
  return 0;
}

void compile(std::ifstream &f, std::string name) {
  if (!f.is_open()) {
    std::cerr << "Failed to open " << name << "!" << std::endl;
    exit(-1);
  }

  // token sources
  antlr4::ANTLRInputStream ins(f);
  RayLexer lexer(&ins);
  antlr4::CommonTokenStream tks(&lexer);
  RayCoreErrorListener errorListener{name, ins, tks};
  lexer.removeErrorListeners();
  lexer.addErrorListener(&errorListener);

  RayParser parser(&tks);
  parser.removeErrorListeners();
  parser.addErrorListener(&errorListener);

  std::unique_ptr<llvm::LLVMContext> context =
      std::make_unique<llvm::LLVMContext>();
  std::unique_ptr<llvm::Module> module =
      std::make_unique<llvm::Module>(name, *context);
  RayCoreVisitor visitor{name, tks, std::move(module)};
  visitor.visit(parser.start());

  if (errorListener.errorCount > 0) {
    llvm::errs().enable_colors(true);
    llvm::errs().changeColor(llvm::errs().WHITE, false);
    std::fprintf(stderr, "Compile module \"%s\" failed with %lld error(s).",
                 name.c_str(), errorListener.errorCount);
    llvm::errs().changeColor(llvm::errs().WHITE, false);
    return;
  }

  if (!visitor.success()) {
    llvm::errs().enable_colors(true);
    llvm::errs().changeColor(llvm::errs().WHITE, true);
    llvm::errs() << "Compile module \"" << name << "\" failed with "
                 << visitor.getErrors().size() << " error(s)." << '\n';
    llvm::errs().changeColor(llvm::errs().WHITE, false);
    return;
  }
  if (verifyModule(*visitor.getModule()) != false) {
    llvm::errs() << "Verify Module Error!" << '\n';
  }
  llvm::outs() << "IR Generated:" << '\n';
  llvm::AssemblyAnnotationWriter x{};
  llvm::outs().enable_colors(true);
  llvm::outs().changeColor(llvm::outs().WHITE, true, false);
  visitor.getModule()->print(llvm::outs(), &x);
  llvm::outs().changeColor(llvm::outs().WHITE, false);
  llvm::outs() << "=========IR END=========" << '\n';
}

bool isModule(const std::string &name) {
  constexpr auto suffixLength = sizeof(".ray") - 1;  // ".ray\0"
  const auto nameLength = name.length();
  return nameLength > suffixLength &&
         name.substr(nameLength - suffixLength) == ".ray";
}