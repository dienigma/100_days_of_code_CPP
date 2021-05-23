#include <iostream>

using namespace std;

void generateTable(int n)
{
    for (int i = 1; i < 11; i++)
    {
        cout << n << " "
             << "x"
             << " " << i << " = " << n * i << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << endl;
    generateTable(n);

    return 0;
}
