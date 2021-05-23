#include <iostream>

using namespace std;

void reverseDigit(int n)
{
    long reverse = 0;
    while (n > 0)
    {
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }
    cout << reverse << endl;
}

int main()
{
    long m;
    cin >> m;
    reverseDigit(m);
    return 0;
}
