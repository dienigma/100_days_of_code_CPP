#include <iostream>
using namespace std;

int main()
{
    int u, v, a;
    float speed;
    cout << "Three numbers: ";
    cin >> u >> v >> a;
    speed = (v * v - u * u) / (2 * a);
    cout << "Speed is: " << speed << endl;
    return 0;
}