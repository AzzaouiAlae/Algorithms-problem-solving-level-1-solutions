#include <iostream>

using namespace std;

void ReadNumber(float &Num1, float &Num2)
{
    cout << "Please enter Number1 : ";
    cin >> Num1;

    cout << "Please enter Number2 : ";
    cin >> Num2;
}

float CheckTheMaxNum(float Num1, float Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void PrintNumber(float Number)
{
    cout << "The Max Number is : " << Number << endl;
}

int main()
{
    float Num1 = 0, Num2 = 0;
    ReadNumber(Num1, Num2);

    PrintNumber(CheckTheMaxNum(Num1, Num2));
}