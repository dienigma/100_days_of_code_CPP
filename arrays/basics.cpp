#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[5] = {4, 5, 62, 6, 2};

    cout << "SINGLE ELEMEMT AT INDEX 4: " << a[4] << endl;
    cout << "Printing the entire array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
