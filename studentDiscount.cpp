#include <iostream>

using namespace std;

void CalculateDiscount(int amt)
{
    float disAmt;
    if (amt >= 100 && amt < 500)
    {
        disAmt = amt - (amt * 0.1);
    }
    else if (amt < 100)
    {
        disAmt = amt;
    }
    else
    {
        disAmt = amt - (amt * 0.2);
    }
    cout << "Discounted Amt " << disAmt << endl;
}

int main(int argc, char const *argv[])
{
    int amt;
    cout << "Enter amount ";
    cin >> amt;
    CalculateDiscount(amt);
    return 0;
}
