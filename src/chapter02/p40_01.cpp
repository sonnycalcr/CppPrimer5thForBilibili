#include <iostream>

int main()
{
    std::cout << "Hi \x4dO\115!\n"; // prints Hi MOM! followed by a newline
    std::cout << '\115' << '\n';    // prints M followed by a newline
    return 0;
}
