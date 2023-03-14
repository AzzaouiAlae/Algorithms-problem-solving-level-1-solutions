#include <iostream>

using namespace std;

int ReadPositiveNum(string Message)
{
    int Number;
    do {        
        cout << Message;
        cin >> Number;
    } while (Number < 0);
    
    return Number;
}

int FactorialOfNumber(int Number)
{
    int Factorial = Number;
    for (int i = 1; i < Number; i++)
        Factorial *= i;

    return Factorial;
}

void PrintResult(int Number)
{
    cout << "The Factorial of " << Number << " is : " << FactorialOfNumber(Number) << endl;
}


int main()
{
    PrintResult(ReadPositiveNum("Please enter Number : "));
}