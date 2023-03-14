#include <iostream>

using namespace std;

void ReadNumbers(int &Num1, int &Num2)
{
    cout << "Please enter Number1 : ";
    cin >> Num1;

    cout << "Please enter Number2 : ";
    cin >> Num2;
}

void Swap2Numbers(int& Num1, int& Num2)
{
    int Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

void PrintResult(int Num1, int Num2)
{
    cout << "Number 1 = " << Num1 << " and Number2 = " << Num2 << endl;
}

int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintResult(Num1, Num2);
    Swap2Numbers(Num1, Num2);
    PrintResult(Num1, Num2);
}