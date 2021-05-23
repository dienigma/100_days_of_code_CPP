#include <iostream>

using namespace std;

void displayDigits(int n)
{
    while (n > 0)
    {
        cout << n % 10 << "\n";
        n = n / 10;
    }
}

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    displayDigits(num);
    return 0;
}
