// 6. Design a Currency class that represents different currencies and their values in USD.
// Overload the * operator to convert an amount from one currency to another.

#include <iostream>
#include <string>

using namespace std;

class Currency
{
private:
    string name;
    double amount;
    float value;
public:
    Currency(string n, double a, float v)
    {
        name = n;
        amount = a;
        value = v;
    }
    Currency operator*(Currency & a){
        double converted = amount*(1/value)*a.value;
        return Currency(a.name, converted,a.value) ;
    }

    void display(){
        cout << "Value: " << amount << endl;
    }
};

int main(){
    Currency usd("USD", 100, 1);
    Currency tk("TAKA", 300, 112);

    Currency converted = tk * usd ;
    converted.display();

    return 0;
}