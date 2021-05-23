#include <iostream>

using namespace std;

void isPalindrome(int n)
{
    int temp = n;
    int rev = 0;

    while (temp > 0)
    {
        rev = (rev * 10) + temp % 10;
        temp /= 10;
    }

    if (rev == n)
        cout << "palindrome\n";
    else
        cout << "not palindrome\n";
}

int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    isPalindrome(a);
    return 0;
}
