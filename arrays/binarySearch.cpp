#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 4, 10, 40};
    int length = sizeof(arr) / sizeof(arr[0]);

    int key = 40;

    int first = 0;
    int last = length - 1;

    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (arr[mid] == key)
        {
            cout << "key found" << endl;
            return 0;
        }
        else if (key > arr[mid])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}
