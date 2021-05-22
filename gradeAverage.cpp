#include <iostream>

using namespace std;

typedef float marks;

void calculateGrade(float a, float b, float c)
{
    float avg = (a + b + c) / 3.0;
    if (avg > 60)
    {
        cout << "A";
    }
    else
    {
        if (avg >= 35 && avg <= 60)
        {
            cout << "B";
        }
        else
        {
            cout << "C";
        }
    }
}

int main(int argc, char const *argv[])
{
    marks m1, m2, m3;
    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;
    calculateGrade(m1, m2, m3);
    return 0;
}
