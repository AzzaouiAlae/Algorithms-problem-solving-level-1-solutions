#include <iostream>

using namespace std;

void ReadNumber(float& Num1, float& Num2, float& Num3)
{
    cout << "Please enter Number1 : ";
    cin >> Num1;

    cout << "Please enter Number2 : ";
    cin >> Num2;

    cout << "Please enter Number3 : ";
    cin >> Num3;
}

float CheckTheMaxNum(float Num1, float Num2, float Num3)
{
    if (Num1 > Num2)
    {
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;
    }

    else
    {
        if (Num2 > Num3)
            return Num2;
        else
            return Num3;
    }
}

void PrintNumber(float Number)
{
    cout << "The Max Number is : " << Number << endl;
}

int main()
{
    float Num1, Num2, Num3;
    ReadNumber(Num1, Num2, Num3);

    PrintNumber(CheckTheMaxNum(Num1, Num2, Num3));
}