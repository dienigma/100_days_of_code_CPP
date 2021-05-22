#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the coefficients: ";
    cin >> a >> b >> c;
    float result1 = (float)(-b + sqrt((b * b - 4 * a * c))) / (2 * a);
    float result2 = (float)(-b - sqrt((b * b - 4 * a * c))) / (2 * a);
    cout << "Result: " << result1 << result2 << endl;
    return 0;
}