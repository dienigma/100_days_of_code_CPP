#include <iostream>
using namespace std;

int SumOfN(int n)
{
    int sum;

    //Write formula here as sum=
    sum = (float)(n * (n + 1)) / 2;

    return sum;
}

int main()
{
    int n;
    cout << "Enter a the total natural numbers\n";
    cin >> n;
    float result = SumOfN(n);
    cout << "Result: " << result << endl;
    return 0;
}
