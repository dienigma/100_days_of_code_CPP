#include <iostream>
using namespace std;

void Discount(int amount)
{
    float disAmount;
    if (amount >= 2000 && amount < 5000)
    {
        disAmount = amount - (amount * (0.1));
    }
    else
    {
        if (amount < 2000)
        {
            disAmount = amount - (amount * (0.05));
        }
        else
        {
            disAmount = amount - (amount * (0.2));
        }
    }
    cout << disAmount;
}
int main(int argc, char const *argv[])
{
    int amt;
    cout << "Enter an amount: ";
    cin >> amt;
    Discount(amt);
    return 0;
}
