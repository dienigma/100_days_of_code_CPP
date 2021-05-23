#include <iostream>

using namespace std;

void perfectNum(int num)
{
    long sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {

            sum = sum + i;
        }
    }

    if (num == sum)
    {

        cout << num << " is a perfect number.\n";
    }
    else
    {
        cout << num << " is not a perfect number.\n";
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    perfectNum(n);

    return 0;
}
