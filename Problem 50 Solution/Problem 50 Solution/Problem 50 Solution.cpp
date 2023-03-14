#include <iostream>
#include <string>

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
    for(int i = 0 ; i < 3; i++)
    {
        int PIN = ReadPrositiveNum(Wrong + "Please enter Your PIN Code : ");

        if (PIN == 1234)
            return true;
        else
        {
            Wrong = "Wrong PIN!! you Have " + to_string(3-(i+1)) + " Times\n";
            system("color 4F");
        }
    }
    return false;
}

void ATM()
{
    if (Login())
    {
        cout << "\nYour Balance is : " << 7500 << "\n";
        system("color 2F");
    }
    else
        cout << "\nYour Card is Locked\n";
}

int main()
{
    ATM();
}