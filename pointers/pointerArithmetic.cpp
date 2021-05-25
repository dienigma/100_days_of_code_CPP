#include <iostream>

using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};

    int *p = A;
    cout << p[0] << endl;
    p++;
    cout << p[0] << endl;
    p--;
    cout << p[0] << endl;
    p = p + 2;
    cout << p[0] << endl;
    return 0;
}
