#include <iostream>
#include <cmath>
using namespace std;

void isArmstrongNumber(int n)
{
    int inputNum = n;
    if (inputNum <= 9 && inputNum >= 1)
    {
        cout << "armstrong number" << endl;
        return;
    }
    long sum = 0;

    while (inputNum > 0)
    {
        int digit = (inputNum % 10);
        sum += pow(digit, 3);
        inputNum /= 10;
    }
    if (n == sum)
    {
        cout << "armstrong number" << endl;
    }
    else
    {
        cout << "not an armstrong number" << endl;
    }
}

int main()
{
    int num;
    cin >> num;
    isArmstrongNumber(num);

    return 0;
}
