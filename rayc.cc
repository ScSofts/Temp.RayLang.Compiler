#include "core/app.h"
#include "pch.h"

int main(int argc, char *argv[]) {
  using namespace ray;
  Vector<String> args(argv, argv + argc);
  Application app(args);
  app.run();
  return app.exit();
}