#include <iostream>

using namespace std;

float ReadNumber()
{
    float Number;
    cout << "Please enter Number : ";
    cin >> Number;
    return Number;
}

float HalfNumber(float Number)
{
    return Number / 2;
}

void printHalfNumber(float Number)
{
    cout << "Half of " << Number << " is : " << HalfNumber(Number) << endl;
}

int main()
{
    printHalfNumber(ReadNumber());
}