#include <iostream>

using namespace std;

void Sign(int n)
{
    if (n > 0)
    {
        cout << "positive";
    }
    else if (n < 0)
    {
        cout << "negative";
    }
}

int main(int argc, char const *argv[])
{
    Sign(4);
    Sign(-4);
    Sign(0);

    return 0;
}
