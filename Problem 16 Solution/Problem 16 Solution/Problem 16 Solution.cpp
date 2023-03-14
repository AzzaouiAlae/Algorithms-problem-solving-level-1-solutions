#include <iostream>

using namespace std;

void ReadNum(float& Diagonal, float& Side)
{
    cout << "Please enter the Diagonal of Rectangle : ";
    cin >> Diagonal;

    cout << "Please enter the Side of Rectangle : ";
    cin >> Side;
}

float CalcRectangleArea(float Diagonal, float Side)
{
    return Side * sqrt(pow(Diagonal,2) - pow(Side, 2));
}

void PrintResults(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    float Diagonal, Side;
    ReadNum(Diagonal, Side);
    PrintResults(CalcRectangleArea(Diagonal, Side));
}