#include <iostream>

using namespace std;

int ReadPrositiveNum(string Message)
{
    int Number;
    
    do {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

bool Login()
{
    string Wrong = "";
    while (true)
    {
        int PIN = ReadPrositiveNum(Wrong + "Please enter Your PIN Code : ");

        if (PIN == 1234)
            return true;
        else
        {
            Wrong = "Wrong PIN!! ";
            system("color 4F");
        }            
    }
    
}

void ATM()
{
    if (Login())
    {
        cout << "\nYour Balance is : " << 7500 << "\n";
        system("color 2F");
    }
    
}

int main()
{
    ATM();
}