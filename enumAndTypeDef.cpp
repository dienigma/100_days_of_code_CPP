#include <iostream>
using namespace std;

typedef int marks;
typedef int rollno;

int main(int argc, char const *argv[])
{
    marks m1, m2, m3;
    rollno r1, r2, r3;

    enum day
    {
        mon,
        tue,
        wed,
        thu,
        fri,
        sat
    };
    day d;
    d = mon;
    if (d == mon)
    {
        cout << "MON " << d << endl;
    }
    for (size_t i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            m1 = i;
            r1 = i + 1;
            break;

        case 1:
            m2 = i;
            r2 = i * 2;
            break;
        case 2:
            m3 = i;
            r3 = i * 3;
            break;

        default:
            break;
        }
    }
    cout << "Marks and roll nos. " << m1 << " " << r1 << endl;
    cout << "Marks and roll nos. " << m2 << " " << r2 << endl;
    cout << "Marks and roll nos. " << m3 << " " << r3 << endl;

    /* code */
    return 0;
}
