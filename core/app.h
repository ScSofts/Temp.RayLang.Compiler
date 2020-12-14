#pragma once
#include "../pch.h"
namespace ray {
    class Application{
    public:
        Application (Vector<String> &args);
        ~Application ();
        void run();
        int exit(int code = 0);
    protected:
        Vector<String> &args;
    };
}