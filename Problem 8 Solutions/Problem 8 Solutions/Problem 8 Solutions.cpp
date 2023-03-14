#include <iostream>

using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

int ReadMark()
{
    int Mark;
    cout << "Please enter your Mark : ";
    cin >> Mark;
    return Mark;
}

enPassFail CheckMark(int num)
{
    if (num >= 50)
        return Pass;
    else
        return Fail;
}

void PrintPassFail(int Num)
{
    if (CheckMark(Num) == Pass)
        cout << "\nPass\n";

    else
        cout << "\nFail\n";
}

int main()
{
    PrintPassFail(ReadMark());
}