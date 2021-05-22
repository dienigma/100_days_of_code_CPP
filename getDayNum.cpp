#include <iostream>
using namespace std;

void DayName(int n)
{
    if (n == 1)
    {
        cout << "sun";
    }
    else if (n == 2)
    {
        cout << "mon";
    }
    else if (n == 3)
    {
        cout << "tue";
    }
    else if (n == 4)
    {
        cout << "wed";
    }

    else if (n == 5)
    {
        cout << "thu";
    }
    else if (n == 6)
    {
        cout << "fri";
    }
    else if (n == 7)
    {
        cout << "sat";
    }
}

int main(int argc, char const *argv[])
{
    DayName(2);
    cout << endl;
    DayName(3);
    cout << endl;
    DayName(1);
    cout << endl;
    DayName(6);
    cout << endl;
    return 0;
}
