#include <iostream>
#define M_PI 3.14159265358979323846

using namespace std;

float ReadRay()
{
    float Ray;
    cout << "Please enter the Ray of Cercle : ";
    cin >> Ray;
    return Ray;
}

float CalcCercleArea(float Ray)
{
    return M_PI * pow(Ray, 2);
}

void PrintResults(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{       
    PrintResults(CalcCercleArea(ReadRay()));
}