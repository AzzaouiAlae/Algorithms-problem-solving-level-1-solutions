#include <iostream>

using namespace std;

int ReadNum(string Message)
{    
    int Number;
    cout << Message;
    cin >> Number; 
    return Number;
}

int Power(int Pow, int Num)
{
    if (Pow == 0)
        return 1;

    int result = Num;
    for (int i = 1; i < Pow; i++)
        result *= Num;
    return result;
}

int main()
{            
    cout << "Result = " << Power(ReadNum("Please enter the power of number : "), ReadNum("Please enter Number : ")) << endl;
}