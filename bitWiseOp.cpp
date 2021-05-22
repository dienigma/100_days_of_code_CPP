#include <iostream>
int main()
{
    int x = 2, y = 5;
    int leftShift = x << y;
    float rightShift = x >> y;
    int bitwiseAnd = x & y;
    int bitwiseOr = x | y;
    int exOr = x ^ y;
    std::cout << "Bitwise and " << bitwiseAnd << std::endl;
    std::cout << "Bitwise or " << bitwiseOr << std::endl;
    std::cout << "Bitwise exor " << exOr << std::endl;
    std::cout << "Bitwise not " << ~x << std::endl;
    std::cout << "Bitwise left shift " << leftShift << std::endl;
    std::cout << "Bitwise right shift " << rightShift << std::endl;
    /* code */
    return 0;
}
