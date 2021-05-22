#include <iostream>

using namespace std;

void checkAge(int age)
{
    if (age < 12 || age > 50)
        cout << "eligible";
    else
        cout << "not eligible";
}

int main(int argc, char const *argv[])
{
    int x;
    cout << "Enter age: ";
    cin >> x;
    checkAge(x);
    return 0;
}
