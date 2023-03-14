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

short ReadUntilAgeBetween(short From, short To)
{
    short Age;
    string wrong = "";
    do
    {
        cout << wrong;
        Age = ReadAge();
        wrong = "Wrong! ";
    } while (!ValidateNumerInRange(Age, From, To));
    return Age;
}

void PrintResult(short Age)
{    
        cout << "\nValid Age\n";  
}

int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));
}