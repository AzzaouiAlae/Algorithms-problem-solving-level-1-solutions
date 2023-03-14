#include <iostream>

using namespace std;

int ReadNum(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    return Number;
}

int Power(int Num, int Pow)
{
    int result = Num;
    for(int i = 1; i < Pow; i++)
        result *= Num;
    return result;
}

void PrintResult(int Num)
{    
    for (int i = 2; i < 5; i++)
    {
        cout << "Power of " << i << " : " << Power(Num, i) << endl;
    }
    
}

int main()
{
    PrintResult(ReadNum("Please enter Number : "));
}