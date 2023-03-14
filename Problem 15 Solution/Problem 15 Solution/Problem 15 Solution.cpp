#include <iostream>

using namespace std;

void ReadNum(float &Length, float &Width)
{
    cout << "Please enter the length of Rectangle : ";
    cin >> Length;

    cout << "Please enter the width of Rectangle : ";
    cin >> Width;
}

float CalcRectangleArea(float Length, float Width)
{
    return Length * Width;
}

void PrintResults(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    float Length, Width;
    ReadNum(Length, Width);
    PrintResults(CalcRectangleArea(Length, Width));
}