#include <iostream>

using namespace std;

int ReadNumberInRange(string Message, int From)
{
    int Number;
    string wrong = "";
    do {
        cout << wrong << Message;
        cin >> Number;
        wrong = "Number must be > 0!! ";
    } while (Number < From);
    return Number;
}

enum enPrimeOrNot {
    Prime = 1, NotPrime = 2
};

enPrimeOrNot CheckNumPrime(int Number)
{
    if (Number == 1 || Number == 2)
        return Prime;

    for (int i = 2; i < round(Number / 2); i++)
    {
        if(Number%i == 0)
            return NotPrime;
    }
    return Prime;
}

void PrintResult()
{
    string Mesg = "Please enter Number : ";
    if (CheckNumPrime(ReadNumberInRange(Mesg, 0)) == Prime)
        cout << "\nYour Number is Prime\n";
    else
        cout << "\nYour Number Not Prime\n";
}

int main()
{
    PrintResult();
}