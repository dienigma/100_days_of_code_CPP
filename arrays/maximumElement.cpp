#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {2, 5, 70, 2, 13};
    int max = 2;
    for (size_t i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "MAX: " << max << endl;
    return 0;
}
