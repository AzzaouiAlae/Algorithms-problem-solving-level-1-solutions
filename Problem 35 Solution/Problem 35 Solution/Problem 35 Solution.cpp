#include <iostream>

using namespace std;

float ReadNum(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    return Number;
}

struct stPiggyBankContent {
    float Penny, Nikel, Dime, Quarter, Dollar;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent Piggy;

    Piggy.Dollar = ReadNum("Please enter Dollar : ");
    Piggy.Quarter = ReadNum("Please enter Quarter : ");
    Piggy.Dime = ReadNum("Please enter Dime : ");
    Piggy.Nikel = ReadNum("Please enter Nikel : ");
    Piggy.Penny = ReadNum("Please enter Penny : ");

    return Piggy;
}

float CalcTotalPenies(stPiggyBankContent Piggy)
{
    return Piggy.Penny + Piggy.Nikel * 5 + Piggy.Dime * 10 + Piggy.Quarter * 25 + Piggy.Dollar * 100;
}

void PrintResult()
{

    float TotalePennys = CalcTotalPenies(ReadPiggyBankContent());

    cout << "\nTotale Pennys = " << TotalePennys << endl;

    cout << "Totale Dollar = " << TotalePennys/100 << endl;
}

int main()
{
    PrintResult();
}