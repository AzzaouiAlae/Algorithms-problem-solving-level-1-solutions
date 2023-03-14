#include <iostream>

using namespace std;

enum enDaysOfTheWeek{Manday = 1, Tusday = 2, Wednesday = 3, Thursday = 4, Friday = 5, saturday = 6, sunday = 7};

int ReadNumberInRange(string Message, int From, int To)
{
    int Number;
    do {
        cout << Message;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

string MyDay(int NumInRange)
{
    switch (NumInRange)
    {
    case Manday: return "Manday";
    case Tusday: return "Tusday";
    case Wednesday: return "Wednesday";
    case Thursday: return "Thursday";
    case Friday: return "Friday";
    case saturday: return "saturday";
    case sunday: return "sunday";
    default: return "";
    }
}

void PrintResult()
{
    string smg = "Please enter your day (1/7) : ";

    cout << "\nToday is : " << MyDay(ReadNumberInRange(smg, 1, 7)) << endl;
}

int main()
{
    PrintResult();
}