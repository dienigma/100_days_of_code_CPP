#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int A[10] = {3, 4, 5, 2, 5, 6, 7, 1, 3, 5};
    for (size_t i = 0; i < 10; i++)
    {
        sum += A[i];
    }

    cout << sum << endl;
    return 0;
}
