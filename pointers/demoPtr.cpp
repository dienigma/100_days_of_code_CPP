#include <iostream>
using namespace std;

int main()
{
    int *p = new int[5];
    for (size_t i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    }
    for (size_t i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    delete[] p;
    p = nullptr;

    return 0;
}
