#include <iostream>

using namespace std;

float ReadNumber(string Message)
{
    float Number;
    cout << Message;
    cin >> Number;
    return Number;
}

float TotalBille(float BilleValue)
{
    return BilleValue * 1.10 * 1.16;
}
void PrintResult()
{
    float Total = TotalBille(ReadNumber("Please enter Totale Bille : "));
    cout << "\nTotal = " << Total << endl;

}
int main()
{
    PrintResult();
}