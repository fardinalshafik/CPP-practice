#include <iostream>
using namespace std;

class Account
{
private:
    int number;
    string holder_name;
    double balance;

public:
    void set_data(int aNumber, string aHolder_name, double aBalance)
    {
        number = aNumber;
        holder_name = aHolder_name;
        balance = aBalance;
    }
    void display()
    {
        cout <<"Account Number: "<< number << endl
             <<"Holder Name: "<< holder_name << endl
             <<"Balance: "<< balance << endl<<endl;
    }

    void deposit(double addbalance)
    {
        balance += addbalance;
    }
    void withdraw(double subbalance)
    {
        balance -= subbalance;
    }
};

int main()
{
    Account person1;

    person1.set_data(23203117,"Fardin Al Shafik",1000);
    cout << "Fardin's acoount Informatin: "<<endl<<endl;
    person1.display();

    person1.deposit(500);
    cout << "After deposite 500 : "<<endl<<endl;
    person1.display();

    person1.withdraw(200);
    cout << "After withdraw 500 : "<<endl<<endl;
    person1.display();


    return 0;
}
