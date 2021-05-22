#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double basicPay, netSalary;
    float allowances, deductions;

    cout << "Enter basic pay: ";
    cin >> basicPay;
    cout << "Enter allowance percentage: ";
    cin >> allowances;
    cout << "Enter deductions percentage: ";
    cin >> deductions;
    netSalary = basicPay + basicPay * (allowances / 100) - basicPay * (deductions / 100);
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
