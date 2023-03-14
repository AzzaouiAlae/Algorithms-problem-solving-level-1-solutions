#include <iostream>

using namespace std;

int ReadNum(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    return Number;
}

string CheckGrade(int Number)
{
    if(Number > 100)
        return "\nWrong!\n";
    else if (Number >= 90)
        return "\nYou get : A\n";
    else if (Number >= 80)
        return "\nYou get : B\n";
    else if (Number >= 70)
        return "\nYou get : C\n";
    else if (Number >= 60)
        return "\nYou get : D\n";
    else if (Number >= 50)
        return "\nYou get : E\n";
    else if (Number > -1)
        return "\nYou get : F\n";
    else
        return "\nWrong!\n";
}

int main()
{
    while (true)
    cout << CheckGrade(ReadNum("Please enter your grade : "));
}