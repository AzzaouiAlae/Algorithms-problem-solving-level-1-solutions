#include <iostream>

using namespace std;

int ReadNum()
{
    int Num;
    cout << "Please enter number : ";
    cin >> Num;

    return Num;
}

void PrintNumbers(int Num)
{
    for (int i = Num; i >= 1; i--)
    {
        cout << "Number : " << i << endl;
    }
}

int main()
{
    PrintNumbers(ReadNum());
}