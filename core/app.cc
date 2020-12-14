#include "../pch.h"
#include "app.h"
#include <stdlib.h>

namespace ray {
    Application::Application(Vector<String> &args):args(args){
    }
    
    void Application::run(){

    }
    int Application::exit(int code){
        ::exit(code);
        return code;
    }
}
