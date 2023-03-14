#include <iostream>

using namespace std;

int ReadPrositiveNum(string Message)
{
    int Number;
    do {
        cout << Message;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

float CalcMonthlyPaid(int Loanamount, int Months)
{
    return (float)Loanamount / Months; 
}

void PrintResult()
{
    int Loanamount = ReadPrositiveNum("Please enter Loanamount : ");
    int Months = ReadPrositiveNum("Please enter Months : ");

    int MonthlyPaid = CalcMonthlyPaid(Loanamount, Months);

    cout << "Monthly Paid = " << MonthlyPaid << endl;
}

int main()
{
    PrintResult();
}