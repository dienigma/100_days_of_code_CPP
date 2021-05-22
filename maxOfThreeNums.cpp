#include <iostream>

using namespace std;

void maxOfThree(int a, int b, int c)
{
    if (a > b && a > c)
        cout << a << " is greater\n";
    else
    {
        if (b > c)
        {
            cout << b << " is greater\n";
        }
        else
            cout << c << " is greater\n";
    }
}

int main(int argc, char const *argv[])
{
    int x, y, z;
    cout << "Enter three numbers a, b and c: ";
    cin >> x >> y >> z;
    maxOfThree(x, y, z);
    return 0;
}
