#include <iostream>

using namespace std;

void ReadNum(float& base, float& height)
{
    cout << "Please enter the base of Triangle : ";
    cin >> base;

    cout << "Please enter the height of Triangle : ";
    cin >> height;
}

float CalcRectangleArea(float base, float height)
{
    return base / 2 * height;
}

void PrintResults(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    float base, height;
    ReadNum(base, height);
    PrintResults(CalcRectangleArea(base, height));
}