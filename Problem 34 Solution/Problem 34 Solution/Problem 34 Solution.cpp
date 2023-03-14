#include <iostream>

using namespace std;

int ReadNumber(string Message)
{
    int Number;    
    cout << Message;
    cin >> Number;
    
    return Number;
}

float GetCommissionPercentage(int TotaleSales)
{
    if (TotaleSales >= 1000000) {
        return 0.01;
    }
    else if (TotaleSales >= 500000) {
        return 0.02;
    }
    else if (TotaleSales >= 100000) {
        return 0.03;
    }
    else if (TotaleSales >= 50000) {
        return 0.05;
    }
    else {
        return 0;
    }
}

int CalcCommissionPercentage(int TotaleSales)
{
    return TotaleSales * GetCommissionPercentage(TotaleSales);
}

void PrintResult()
{
    string Message = "Please enter Totale Sales : ";

    int TotaleSales = ReadNumber(Message);

    cout << "\nCommission Percentare is : " << GetCommissionPercentage(TotaleSales) * 100 << "%" << endl;
    cout << "Total Commission is : " << CalcCommissionPercentage(TotaleSales) << endl;
}

int main()
{
    PrintResult();
}