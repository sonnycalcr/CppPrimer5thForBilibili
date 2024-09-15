#include <iostream>

int main()
{
    bool b = 42; // b is true
    std::cout << b << std::endl;
    int i = b; // i has value 1
    std::cout << i << std::endl;
    i = 3.14; // i has value 3
    std::cout << i << std::endl;
    double pi = i; // pi has value 3.0
    std::cout << pi << std::endl;
    unsigned char c = -1; // assuming 8-bit chars, c has value 255
    std::cout << c << std::endl;
    std::cout << static_cast<int>(c) << std::endl;
    signed char c2 = 256; // assuming 8-bit chars, the value of c2 is undefined
    std::cout << c2 << std::endl;
    std::cout << static_cast<int>(c2) << std::endl;
    return 0;
}
