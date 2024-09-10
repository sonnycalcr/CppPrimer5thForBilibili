// 测试一下 Windows 下 Ctrl + Z 然后回车是否是 EOF
#include <cstdio>
#include <iostream>

int main()
{
    int x;
    if ((x = std::cin.get()) == EOF)
    {
        std::cout << "Here is an EOF." << std::endl;
    }
    return 0;
}
