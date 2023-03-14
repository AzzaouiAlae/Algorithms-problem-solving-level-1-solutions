#include <iostream>

using namespace std;

struct Numbers
{
    float Num1, Num2, Num3;
};

Numbers ReadNumbers1()
{
    Numbers myNumbers;
    cout << "Please enter Number1 : ";
    cin >> myNumbers.Num1;

    cout << "Please enter Number2 : ";
    cin >> myNumbers.Num2;

    cout << "Please enter Number3 : ";
    cin >> myNumbers.Num3;

    return myNumbers;
}

float sumMyNumbers(Numbers myNumbers)
{
    return myNumbers.Num1 + myNumbers.Num2 + myNumbers.Num3;
}

void PrintResult(Numbers myNumbers)
{
    cout << "\n" << myNumbers.Num1 << " + " << myNumbers.Num2 << " + " << myNumbers.Num3 << " = " << sumMyNumbers(myNumbers);
}

void ReadNum(int &Num1, int &Num2, int &Num3)
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

void printResult(float Sun)
{
    cout << endl << "Result = " << Sun << endl;
}

int main()
{
    //PrintResult(ReadNumbers());

    int Num1, Num2, Num3;
    ReadNum(Num1, Num2, Num3);
    printResult(SumOf3Numbers(Num1, Num2, Num3));
}