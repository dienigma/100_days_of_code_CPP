#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int intArr[7] = {3, 5, 2, 5, 8, 1, 3};
    // THIS IS C++ 11
    for (int x : intArr)
    {
        cout << x << endl;
    }
    return 0;
}
