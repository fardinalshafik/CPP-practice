// 1. Alice is developing a calculator application in C++. She wants to allow the user to
// perform operations on integers, doubles, and long doubles. To accomplish this, she uses
// function overloading to define different versions of the calculate() function that take
// different parameter types.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Calculator
{
    public:
    void calculate(int a, int b);
    void calculate(double a, double b);
    void calculate(long double a, long double b);
};

void Calculator::calculate(int a, int b){
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl<< endl;
}

void Calculator::calculate(double a, double b){
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl<< endl;
}

void Calculator::calculate(long double a, long double b){
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl << endl;
}

int main()
{
    Calculator calc;
    calc.calculate(1, 2);
    calc.calculate(1.0, 2.0);
    calc.calculate(1.0L, 2.0L);
    return 0;
}
