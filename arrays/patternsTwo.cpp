#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                cout << "*"
                     << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
