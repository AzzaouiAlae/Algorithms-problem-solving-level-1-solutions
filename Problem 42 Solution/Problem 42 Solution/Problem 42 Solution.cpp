#include <iostream>

using namespace std;

int ReadPositiseNumber(string Message, int From = 0)
{
    int Number;
    do {
        cout << Message;
        cin >> Number;
    } while (Number < From);
    return Number;
}

int DaysToSecends(int Days)
{
    return Days * 24 * 60 * 60;
}

int HoursToSecends(int Hours)
{
    return Hours * 60 * 60;
}

int MinitsToSecends(int Minits)
{
    return Minits * 60;
}

int TotalSecends(int Days, int Hours, int Minits, int Secends)
{
    return DaysToSecends(Days) + HoursToSecends(Hours) + MinitsToSecends(Minits) + Secends;
}
void PrintResult()
{
    int Days = ReadPositiseNumber("Please enter Number of days : ");
    int Hours = ReadPositiseNumber("Please enter Number of Hours : ");
    int Minits = ReadPositiseNumber("Please enter Number of Minits : ");
    int Secends = ReadPositiseNumber("Please enter Number of Secends : ");

    int Total = TotalSecends(Days, Hours, Minits, Secends);

    cout << "Total Secends = " << Total << endl;
}

int main()
{
    PrintResult();
}