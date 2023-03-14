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
    /*for (int i = 1; i <= Num; i++)
    {
        cout << "Number : " << i << endl;
    }*/
    int i = 1;
    /*while (i <= Num)
    {
        cout << "Number : " << i << endl;
        i++;
    }*/

    do {
        cout << "Number : " << i << endl;
        i++;
    } while (i <= Num);
}

int main()
{
    PrintNumbers(ReadNum());
}