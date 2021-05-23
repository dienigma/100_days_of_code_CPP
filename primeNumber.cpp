#include <iostream>

using namespace std;

void isPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Number is prime" << endl;
    }
    else
    {
        cout << "Number is not prime" << endl;
    }
}

int main()
{
    int num;
    cin >> num;
    isPrime(num);
    return 0;
}
