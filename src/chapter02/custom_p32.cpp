#include <iostream>

int main()
{
    // bool 类型，通常大小为 1 个字节
    bool boolean = true;
    std::cout << "bool: " << boolean << " (size: " << sizeof(boolean) << " bytes)" << std::endl;

    // char 类型，8 bits
    char character = 'A';
    std::cout << "char: " << character << " (size: " << sizeof(character) << " bytes)" << std::endl;

    // wchar_t 类型，宽字符，16 bits 或 32 bits，取决于平台
    wchar_t wide_character = L'A';
    std::wcout << "wchar_t: " << wide_character << " (size: " << sizeof(wide_character) << " bytes)" << std::endl;

    // char16_t 类型，16 bits Unicode 字符
    char16_t unicode_16 = u'A';
    std::wcout << "char16_t: " << static_cast<wchar_t>(unicode_16) << " (size: " << sizeof(unicode_16) << " bytes)" << std::endl;

    // char32_t 类型，32 bits Unicode 字符
    char32_t unicode_32 = U'A';
    std::wcout << "char32_t: " << static_cast<wchar_t>(unicode_32) << " (size: " << sizeof(unicode_32) << " bytes)" << std::endl;
    std::wcout << "char32_t: " << unicode_32 << " (size: " << sizeof(unicode_32) << " bytes)" << std::endl;

    // short 整数类型，16 bits
    short short_integer = 16;
    std::cout << "short: " << short_integer << " (size: " << sizeof(short_integer) << " bytes)" << std::endl;

    // int 整数类型，通常至少为 32 bits，但某些系统上可能为 16 bits
    int integer = 26;
    std::cout << "int: " << integer << " (size: " << sizeof(integer) << " bytes)" << std::endl;

    // long 整数类型，通常为 32 bits
    long long_integer = 36;
    std::cout << "long: " << long_integer << " (size: " << sizeof(long_integer) << " bytes)" << std::endl;

    // long long 整数类型，64 bits
    long long long_long_integer = 46LL;
    std::cout << "long long: " << long_long_integer << " (size: " << sizeof(long_long_integer) << " bytes)" << std::endl;

    // float 单精度浮点数，精度为 6 位有效数字
    float single_precision = 3.1f;
    std::cout << "float: " << single_precision << " (size: " << sizeof(single_precision) << " bytes, precision: " << FLT_DIG << " significant digits)" << std::endl;

    // double 双精度浮点数，精度为 10 位有效数字
    double double_precision = 3.14;
    std::cout << "double: " << double_precision << " (size: " << sizeof(double_precision) << " bytes, precision: " << DBL_DIG << " significant digits)" << std::endl;

    // long double 扩展精度浮点数，通常与 double 相同，但某些系统上可能有更高精度
    long double extended_precision = 3.1415L;
    std::cout << "long double: " << extended_precision << " (size: " << sizeof(extended_precision) << " bytes, precision: " << LDBL_DIG << " significant digits)" << std::endl;

    return 0;
}
