#include <iostream>

using namespace std;

struct strTaskDuration
{
    int Days, Hours, Minits, Seconds;
};

int ReadNum(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    return Number;
}

strTaskDuration Task(int Sec)
{
    strTaskDuration TaskDuration;
    int SecPerDay = 24*60*60, SecPerHour = 60 * 60, SecPerMinit = 60 ,Remander = 0;
    TaskDuration.Days = floor(Sec / SecPerDay);
    Remander = Sec % SecPerDay;
    TaskDuration.Hours = floor(Remander / SecPerHour);
    Remander = Remander % SecPerHour;
    TaskDuration.Minits = floor(Remander / SecPerMinit);
    TaskDuration.Seconds = Remander % SecPerMinit;
    return TaskDuration;
}

void PrintResult()
{
    int TotalSec = ReadNum("Please enter the Number of seconds : ");

    strTaskDuration TaskDuration = Task(TotalSec);

    cout << TaskDuration.Days << " Days, " 
         << TaskDuration.Hours << " Hours, " 
         << TaskDuration.Minits << " Minits and " 
         << TaskDuration.Seconds << " Seconds\n";
}

int main()
{
    PrintResult();
}