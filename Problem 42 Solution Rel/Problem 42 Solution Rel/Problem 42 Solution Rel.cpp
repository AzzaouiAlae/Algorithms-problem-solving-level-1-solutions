#include <iostream>

using namespace std;

struct strTaskDuration
{
    int Days, Hours, Minits, Seconds;
};

int ReadNumber(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    return Number;
}

strTaskDuration ReadTakDuration()
{
    strTaskDuration Task;
    Task.Days = ReadNumber("Please enter Number of days : ");
    Task.Hours = ReadNumber("Please enter Number of Hours : ");
    Task.Minits = ReadNumber("Please enter Number of Minits : ");
    Task.Seconds = ReadNumber("Please enter Number of Seconds : ");
    return Task;
}

int TaskDurationInSec(strTaskDuration Task)
{
    return (Task.Days * 24 * 60 * 60) + 
           (Task.Hours * 60 * 60) + 
           (Task.Minits * 60) + 
            Task.Seconds;
}

void PrintResult()
{
    strTaskDuration Task = ReadTakDuration();    

    cout << "\nTotal Seconds = " << TaskDurationInSec(Task) << endl;
}

int main()
{
    PrintResult();
}