#include <iostream>

using namespace std;

void factorial(int n)
{
    long fact = 1;

    for (size_t i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact << endl;
}
int main()
{
    int m;
    cout << "Enter the number: ";
    cin >> m;
    factorial(m);
    return 0;
}
