#include <iostream>
#include <cmath>
using namespace std;

void Roots(float a, float b, float c)
{
    float d, r1, r2;
    d = (b * b) - (4 * a * c);
    r1 = ((b * -1) + d) / (2 * a);
    r2 = ((b * -1) - d) / (2 * a);
    if (d == 0)
    {
        cout << "real and equal" << r1;
    }
    else
    {
        if (d < 0)
        {
            cout << "imaginary";
        }
        else
        {
            cout << "real and unequal" << r1 << " " << r2;
        }
    }
};

int main(int argc, char const *argv[])
{
    float a, b, c;
    cout << "Enter Coefficients a, b, c ";
    cin >> a >> b >> c;
    Roots(a, b, c);
    return 0;
}
