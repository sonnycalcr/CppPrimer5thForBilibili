#include <iostream>
/* 
 * 简单主函数：
 * 读取两个数，求它们的和
 */

// /*
//  * 注释对 /* */ 不能嵌套
//  * “不能嵌套”几个字会被认为是源码
//  * 像剩余程序一样处理
//  */
int main() {
    // 提示用户输入两个数
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0; // 保存我们读入的输入数据的变量
    std::cin >> v1 >> v2;  // 读取输入数据
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}