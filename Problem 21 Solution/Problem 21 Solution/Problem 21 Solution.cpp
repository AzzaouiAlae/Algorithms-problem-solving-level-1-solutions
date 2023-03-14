#include <iostream>
#define M_PI 3.14159265358979323846

using namespace std;

float ReadCircumference()
{
    float Circumference;
    cout << "Please enter the along the Circumference : ";
    cin >> Circumference;
    return Circumference;
}

float CalcCercleArea(float Circumference)
{
    return  pow(Circumference, 2) / (M_PI * 4);
}

void PrintResults(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    PrintResults(CalcCercleArea(ReadCircumference()));
}