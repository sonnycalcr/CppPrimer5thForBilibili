#include <cstdio>
#include <iostream>

int main()
{
    std::cout << "\7";            // 在一些环境下会发出提示音，和 \a 相同
    std::cout << "Hello\12World"; // 输出：
                                  // Hello
                                  // World
                                  // 实际效果等同于 \n

    std::cout << "Hello\40World"; // 输出：Hello World （插入一个空格）

    char str[] = "Hello\0World";
    std::cout << str; // 输出：Hello （由于\0表示字符串结束，World部分不会被输出）

    std::cout << "\115"; // 输出：M

    std::cout << "\x4d"; // 输出：M
    getchar();
    return 0;
}
