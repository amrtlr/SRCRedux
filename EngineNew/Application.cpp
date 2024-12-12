// TODO: Add different implimentations for different operating systems. eg: winmain for windows.

#include "Windows.hpp"

int main() 
{
#if _WIN32
    SayHelloToWorld();
#endif

    return 0;
}