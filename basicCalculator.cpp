#include <iostream>

using namespace std;

void ArithOpt(int x, int y, int choice)
{
    switch (choice)
    {
    case 1:
        cout << x + y;
        break;
    case 2:
        cout << x - y;
        break;
    case 3:
        cout << (float)x / (float)y;
        break;
    case 4:
        cout << (float)x * y;
        break;
    }
}

int main()
{
    int a, b, choice;
    cout << "Enter two numbers ";
    cin >> a >> b;
    cout << "MENU - \n"
         << "1. Add\n"
         << "2. Subtract\n"
         << "3. divide\n"
         << "4. Multiply\n";
    cin >> choice;
    ArithOpt(a, b, choice);
    return 0;
}
