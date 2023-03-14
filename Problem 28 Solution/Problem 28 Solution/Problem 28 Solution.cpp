#include <iostream>

using namespace std;

enum enOddorEven {Odd = 1, Even = 2};

int ReadNum()
{
    int Num;
    cout << "Please enter number : ";
    cin >> Num;

    return Num;
}
enOddorEven CheckOddOrEven(int Num)
{
    if (Num % 2 == 0)
        return Even;
    else
        return Odd;
}
int SumOddNumFrom1ToN(int Num)
{
    int Sum = 0;
    for (int i = 1; i <= Num; i++)
    {
        if (CheckOddOrEven(i) == Odd)
            Sum += i;
    }
    return Sum;
}

void PrintNumbers(int Num)
{
    cout << "Sum Of Odd Numbers is : " << SumOddNumFrom1ToN(Num);
}

int main()
{
    PrintNumbers(ReadNum());
}