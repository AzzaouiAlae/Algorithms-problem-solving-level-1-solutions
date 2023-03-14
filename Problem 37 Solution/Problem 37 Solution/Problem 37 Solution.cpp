#include <iostream>
#include <string>

using namespace std;

float ReadNum(string Message)
{
    float Number;
    cout << Message;
    cin >> Number;
    return Number;
}

float SumUntil99()
{
    float Total = 0;
    int i = 0;
    while (true)
    {
        i++;
        float Number = ReadNum("Please enter Number" + to_string(i) + " : ");
        if (Number == -99)
            return Total;
        Total += Number;
    }
}

void PrintResult()
{ 
    cout << "\nTotal = " << SumUntil99() << endl;
}

int main()
{
    PrintResult();
}