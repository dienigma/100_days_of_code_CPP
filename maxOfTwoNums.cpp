#include <iostream>

int findMax(int a, int b)
{
    if (a > b || a == b)
        return a;
    else
    {
        return b;
    }
}

int main()
{
    int x, y;
    std::cout << "Enter two numbers " << std::endl;
    std::cin >> x >> y;
    int result = findMax(x, y);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
