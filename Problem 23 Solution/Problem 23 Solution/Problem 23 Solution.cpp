#include <iostream>
#define M_PI 3.14159265358979323846

using namespace std;

void ReadArbitraryTriangle(float& Side1, float& Side2, float& base)
{
    cout << "Please enter the Triangle Side1 : ";
    cin >> Side1;

    cout << "Please enter the Triangle Side2 : ";
    cin >> Side2;

    cout << "Please enter the Triangle base : ";
    cin >> base;
}

float CalcCercleArea(float Side1, float Side2, float base)
{
    float P = (Side1 + Side2 + base) / 2;
    return  M_PI * pow((Side1* Side2* base) / (4 * sqrt(P * (P - Side1) * (P - Side2) * (P - base))), 2);
}

void PrintResults(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    float Side1, Side2, base;
    ReadArbitraryTriangle(Side1, Side2, base);
    PrintResults(CalcCercleArea(Side1, Side2, base));
}