#include <iostream>

int main()
{
    unsigned u = 10;
    int i = -42;
    std::cout << i + i << std::endl; // prints -84
    std::cout << u + i << std::endl; // if 32-bit ints, prints 4294967264

    return 0;
}
