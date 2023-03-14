#include <iostream>

using namespace std;

int ReadNum(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    return Number;
}

float CalcMonths(int LoanAmoust, int MontlyPaid)
{
    return LoanAmoust / MontlyPaid;
}

void PrintResult()
{
    int LoanAmoust = ReadNum("Please enter loanamost : ");
    int MontlyPaid = ReadNum("Please enter Montly Paid : ");

    int Months = CalcMonths(LoanAmoust, MontlyPaid);

    cout << endl << Months << " Months\n";
}

int main()
{
    PrintResult();
}