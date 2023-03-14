#include <iostream>

using namespace std;

float ReadNumber(string Message)
{
    float Number;
    cout << Message;
    cin >> Number;
    return Number;
}

void CalcWeeksAndDays(float Hours, float &Days, float&Weeks)
{
    Weeks = Hours / (24 * 7);    
    Days = Hours / 24;
}

float CalcHoursToDays(float Hours)
{
    return Hours / 24;
}

float CalcHoursToWeeks(float Hours)
{
    return Hours / 24 / 7;
}

float CalcDaysToWeeks(float Days)
{
    return Days / 7;
}

void PrintResult()
{
    float Hours = ReadNumber("Please enter the Number of Hours : "), 
        Days = CalcHoursToDays(Hours),
        Weeks = CalcHoursToWeeks(Hours);

    //CalcWeeksAndDays(Hours, Days, Weeks);

    cout << Weeks << " Weeks\n";
    cout << Days << " Days\n";
}

int main()
{
    PrintResult();
}