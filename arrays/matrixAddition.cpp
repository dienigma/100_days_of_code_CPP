#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[2][3] = {{2, 5, 9}, {7, 3, 6}};
    int B[2][3] = {{6, 3, 4}, {9, 5, 2}};
    int result[2][3];
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
