#include <iostream>
#define M_PI 3.14159265358979323846

using namespace std;

void ReadIsoscelesTriangleSide(float &Side, float &base)
{    
    cout << "Please enter the Triangle Side : ";
    cin >> Side;

    cout << "Please enter the Triangle base : ";
    cin >> base;
}

float CalcCercleArea(float Side, float base)
{
    return  M_PI * (pow(base, 2) / 4) * ((2 * Side - base) / (2 * Side + base));
}

void PrintResults(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    float Side, base;
    ReadIsoscelesTriangleSide(Side, base);
    PrintResults(CalcCercleArea(Side, base));
}