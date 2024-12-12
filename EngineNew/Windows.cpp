#include <iostream>

void SayHelloToWorld()
{
#if defined(_WIN64)
    std::cout << "Hello world from Windows (64-bit)!" << '\n';
#else
    std::cout << "Hello world from Windows!" << '\n';
#endif
}

