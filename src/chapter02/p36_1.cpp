#include <iostream>

int main()
{
    int i = 42;
    std::cout << i << std::endl;
    if (i) // condition will evaluate as true
        i = 0;
    std::cout << i << std::endl;
    return 0;
}
