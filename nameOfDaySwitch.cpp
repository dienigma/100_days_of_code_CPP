#include <iostream>
using namespace std;
void DayName(int day)
{
    switch (day)
    {
    case 1:
        cout << "sun";
        break;
    case 2:
        cout << "mon";
        break;
    case 3:
        cout << "tue";
        break;
    case 4:
        cout << "wed";
        break;
    case 5:
        cout << "thu";
        break;
    case 6:
        cout << "fri";
        break;
    case 7:
        cout << "sat";
        break;
    }
}

int main(int argc, char const *argv[])
{
    DayName(6);
    cout << endl;
    DayName(3);
    cout << endl;
    DayName(1);
    cout << endl;
    return 0;
}
