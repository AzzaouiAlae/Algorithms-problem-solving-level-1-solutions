#include <iostream>

using namespace std;

enum enNumberType{Odd = 1, Even = 2};

int ReadNum()
{
    int Num;
    cout << "Please enter number: ";
    cin >> Num;
    return Num;
}


enNumberType CheckNumberType(int Num)
{
    if (Num % 2 == 0)
        return Even;
    else
        return Odd;
}

//bool OddOrEvenCheck(int Num)
//{
//    return (Num % 2 == 0);
//}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == Even)
        cout << "The Number is: Even\n";
    else
        cout << "The Number is: Odd\n";
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNum()));
}