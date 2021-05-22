#include <iostream>

int main(int argc, char const *argv[])
{
    char c = 127;
    ++c;
    ++c;
    std::cout << "Char Increment Overflow: " << (int)c << std::endl;
    return 0;
}
