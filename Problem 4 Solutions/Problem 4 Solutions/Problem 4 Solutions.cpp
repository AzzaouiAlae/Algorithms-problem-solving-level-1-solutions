#include <iostream>

using namespace std;

//short ReadAge()
//{
//    short Age;
//    cout << "Enter your Age: ";
//    cin >> Age;
//    return Age;
//}
//
//bool HasDriverLicense()
//{
//    string check = "";
//
//    cout << "Did you has driver Licence? (y/n): ";
//    cin >> check;
//    return (check == "y" || check == "Y");
//}
//
//void HireDriver(bool HasDriverLicense, short Age)
//{
//    if (Age >= 21 && HasDriverLicense)
//        cout << "Hired\n";
//    else
//        cout << "Reject\n";
//}

struct stInfo
{
    int Age;
    bool HasDriverLicense;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please enter your age: ";
    cin >> Info.Age;

    string DriverLicence;
    cout << "Do you have Driver License? (0/1): ";
    cin >> Info.HasDriverLicense;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return Info.Age >= 21 && Info.HasDriverLicense;
}

void PrintRusult(stInfo Info)
{
    //if (IsAccepted(Info))
    //    cout << "Hired\n";
    //else
    //    cout << "Reject\n";   

    IsAccepted(Info) ? cout << "Hired\n" : cout << "Reject\n";
}

int main()
{
    //HireDriver(HasDriverLicense(), ReadAge());

    PrintRusult(ReadInfo());
}