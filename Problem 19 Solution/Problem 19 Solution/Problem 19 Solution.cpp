#include <iostream>
#define M_PI 3.14159265358979323846

using namespace std;

float ReadDiameter()
{
    float Diameter;
    cout << "Please enter the Diameter of Cercle : ";
    cin >> Diameter;
    return Diameter;
}

float CalcCercleArea(float Diameter)
{
    return (M_PI * pow(Diameter, 2)) / 4;
}

void PrintResults(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    PrintResults(CalcCercleArea(ReadDiameter()));
}