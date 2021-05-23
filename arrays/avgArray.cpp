#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    float sum = 0;
    int numArr[100];
    cout << "Enter the size of an array: ";
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cout << i + 1 << " . Enter number: ";
        cin >> numArr[i];
    }

    for (size_t j = 0; j < n; j++)
    {
        sum += numArr[j];
    }

    cout << "Avg is: " << (float)(sum / n) << endl;
    return 0;
}
