#include <iostream>

using namespace std;

void sumOfN(int n)
{
    long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

int main()
{
    int n;
    cin >> n;
    sumOfN(n);

    return 0;
}
