#include <iostream>

using namespace std;

void findFactors(int num)
{
    for (size_t i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    findFactors(n);
    return 0;
}
