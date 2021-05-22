#include <iostream>
using namespace std;

int main()
{
    int p, n, r;
    cout << "Enter Principal: " << endl;
    cin >> p;
    cout << "Enter Time: " << endl;
    cin >> n;
    cout << "Enter Rate Of Interest: " << endl;
    cin >> r;
    float SI = (p * n * r) / 100;
    cout << "Simple Interest: " << SI << endl;
    return 0;
}