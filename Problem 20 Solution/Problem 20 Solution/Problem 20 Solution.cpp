#include <iostream>
#define M_PI 3.14159265358979323846

using namespace std;

float ReadSquar()
{
    float SquarSide;
    cout << "Please enter the Squar Side : ";
    cin >> SquarSide;
    return SquarSide;
}

float CalcCercleArea(float Diameter)
{
    return M_PI * pow(Diameter/2, 2);
}

void PrintResults(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    PrintResults(CalcCercleArea(ReadSquar()));
}