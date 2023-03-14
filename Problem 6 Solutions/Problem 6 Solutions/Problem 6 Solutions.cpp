#include <iostream>

using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
};

strInfo ReadName()
{
    strInfo name;

    cout << "Please enter your First Name: ";
    cin >> name.FirstName;

    cout << "Please enter your Last Name: ";
    cin >> name.LastName;

    return name;
}

string GetFullName(strInfo Name, bool reversed = false)
{
    string fullName = "";
    reversed ? fullName = Name.FirstName + " " + Name.LastName : fullName = Name.LastName + " " + Name.FirstName;
    return fullName;
}

void PrintName(string fullName)
{
    cout << "\nYour full name is: " << fullName << endl;
}

int main()
{
    PrintName(GetFullName(ReadName()));
}