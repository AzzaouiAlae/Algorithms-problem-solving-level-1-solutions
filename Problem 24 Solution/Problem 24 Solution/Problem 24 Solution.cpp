#include <iostream>

using namespace std;

short ReadAge()
{
    short Age;
    cout << "Please enter your Age : ";
    cin >> Age;

    return Age;
}

bool ValidateNumerInRange(short Number, short From, short To)
{
    return Number >= From && Number <= To;
}

void PrintResult(short Age)
{    
    if (ValidateNumerInRange(Age, 18, 45))
        cout << "\nValid Age\n";
    else
        cout << "\nInValid Age\n";
    
}
int main()
{    
    PrintResult(ReadAge());
}