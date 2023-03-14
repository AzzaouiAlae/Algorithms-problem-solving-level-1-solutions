#include <iostream>

using namespace std;

enum enMonth
{
    Jan = 1, Fab = 2, Mar = 3, Apr = 4, May = 5, June = 6, 
    Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12
};

int ReadNumberInRange(string Message, int From, int To)
{
    int Number;
    string wrong = "";
    do {
        cout << wrong << Message;
        cin >> Number;
        wrong = "Wrong!! ";
    } while (Number < From || Number > To);
    return Number;
}

string MyMonth(enMonth Month)
{
    switch (Month)
    {
    case Jan: return "Januarary";
        
    case Fab: return "Fabrary";
        
    case Mar: return "March";
        
    case Apr: return "April";
        
    case May: return "May";
        
    case June: return "June";
        
    case Jul: return "July";
        
    case Aug: return "August";
        
    case Sep: return "September";
        
    case Oct: return "Octobre";
        
    case Nov: return "November";
        
    case Dec: return "December";
        
    default: return "";    
    }
}

void PrintResult()
{
    string msg = "Please enter number of Month (1/12) : ";
    cout << "It is : " << MyMonth((enMonth)ReadNumberInRange(msg, 1, 12)) << endl;
}

int main()
{
    PrintResult();
}