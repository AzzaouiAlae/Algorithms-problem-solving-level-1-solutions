#include <iostream>

using namespace std;

float ReadNumber(string Message)
{
    float Number;
    cout << Message;
    cin >> Number;
    return Number;
}

float Remainder(int Paid, int TotalBill)
{
    return Paid - TotalBill;
}

void PrintResult()
{
    float Rem = Remainder(ReadNumber("How much customer paid : "), ReadNumber("Please entre Total Bill : "));
    cout << "Remainder is : " << Rem;

    if (Rem < 0)
        system("color 4F");
}

int main()
{
    PrintResult();
}