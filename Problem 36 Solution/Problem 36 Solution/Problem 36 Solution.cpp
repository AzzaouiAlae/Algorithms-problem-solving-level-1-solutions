#include <iostream>

using namespace std;

enum enOpType
{
    Add = '+', Sub = '-', Multiply = '*', Devide = '/'
};

float ReadNum(string Message)
{
    float Number;
    cout << Message;
    cin >> Number;
    return Number;
}

enOpType ReadOpType()
{    
    char OpType = '+'; 

    cout << "Please enter Operation Type ( + - * / ) : ";
    cin >> OpType;
    return (enOpType)OpType;    
}

struct SimpleCalculator
{
    float Num1;
    enOpType OperationType;
    float Num2;
};

SimpleCalculator ReadNmsAndoPeration()
{
    SimpleCalculator Calc;
    Calc.Num1 = ReadNum("Pleae enter Number1 : ");
    Calc.OperationType = ReadOpType();
    Calc.Num2 = ReadNum("Pleae enter Number2 : ");
    return Calc;
}

float Calculate(SimpleCalculator Calc)
{
    switch (Calc.OperationType)
    {
    case Add : return Calc.Num1 + Calc.Num2;
    case Sub: return Calc.Num1 - Calc.Num2;
    case Multiply: return Calc.Num1 * Calc.Num2;
    case Devide: return Calc.Num1 / Calc.Num2;
    default:
        return Calc.Num1 + Calc.Num2;
    }
    /*if (Calc.OperationType == Add)
        return Calc.Num1 + Calc.Num2;
    else if (Calc.OperationType == Sub)
        return Calc.Num1 - Calc.Num2;
    else if (Calc.OperationType == Multiply)
        return Calc.Num1 * Calc.Num2;
    else 
        return Calc.Num1 / Calc.Num2;*/
}

void PrintResult()
{
    SimpleCalculator Calc;

    Calc = ReadNmsAndoPeration();

     cout << "Totale = " << Calculate(Calc) << endl;  
}

int main()
{
    PrintResult();
}