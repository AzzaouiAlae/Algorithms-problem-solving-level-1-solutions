#include <iostream>

using namespace std;

void ReadNum(int& Num1, int& Num2, int& Num3)
{
    cout << "Please enter Number1 : ";
    cin >> Num1;

    cout << "Please enter Number2 : ";
    cin >> Num2;

    cout << "Please enter Number3 : ";
    cin >> Num3;
}

float SumOf3Numbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

float CalculatAvrege(int Num1, int Num2, int Num3)
{
    return  SumOf3Numbers(Num1, Num2, Num3) / 3;   
}

void printResult(float Sun)
{
    cout << endl << "Avrege = " << Sun << endl;
}

int main()
{
    int Num1, Num2, Num3;
    
    ReadNum(Num1, Num2, Num3);
    printResult(CalculatAvrege(Num1, Num2, Num3));
}
    