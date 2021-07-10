#include <iostream>
#include <string>
inline void help(std::string me){
    printf(
R"(Ray Compiler Version %s.
Usage: %s [option] file...
Options: ...
    (Will Coming soon.)
        )"
        ,
        RAYC_VERSION,
        me.c_str()
    );
}