#include <iostream>

int main()
{
    // 1. L'a' - wide character literal (wchar_t)
    wchar_t wideChar = L'a';
    std::wcout << L"Wide character literal: " << wideChar << std::endl;

    // 2. u8"hi!" - UTF-8 string literal
    const char *utf8String = u8"hi!";
    std::cout << "UTF-8 string literal: " << utf8String << std::endl;

    // 3. 42ULL - unsigned long long literal
    unsigned long long ullValue = 42ULL;
    std::cout << "Unsigned long long literal: " << ullValue << std::endl;

    // 4. 1E-3F - single-precision floating-point literal (float)
    float floatValue = 1E-3F;
    std::cout << "Single-precision floating-point literal: " << floatValue << std::endl;

    // 5. 3.14159L - extended-precision floating-point literal (long double)
    long double longDoubleValue = 3.14159L;
    std::cout << "Extended-precision floating-point literal: " << longDoubleValue << std::endl;

    return 0;
}
