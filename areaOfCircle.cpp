#include <iostream>

int main()
{
    float r, a;

    std::cout << "Enter Radius";
    std::cin >> r;
    a = 3.1425f * r * r;
    std::cout << "Area: " << a << std::endl;
    return 0;
}