#include <iostream>

using namespace std;

void findGCD(int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    cout << "GCD: " << x << endl;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a;
    cin >> b;

    findGCD(a, b);
    return 0;
}
