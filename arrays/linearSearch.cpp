#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[7] = {2, 3, 4, 6, 12, 34, 56};
    int key = 4;
    for (size_t i = 0; i < 7; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key found at - " << i << endl;
            return 0;
        }
    }
    cout << "element not found" << endl;

    return 0;
}
