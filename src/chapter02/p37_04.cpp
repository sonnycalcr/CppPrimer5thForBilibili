#include <iostream>

int main()
{
    unsigned u = 11; // start the loop one past the first element we want to print
    while (u > 0)
    {
        --u; // decrement first, so that the last iteration will print 0
        std::cout << u << std::endl;
    }

    return 0;
}
