// Define a class BankAccount with private members for account balance and
// account number. Write a friend function that takes a BankAccount object as a
// parameter and returns the account balance.

#include<iostream>
using namespace std;

class BankAccount {
private:
    int acc_number;
    int acc_balance;
public:
    void setdata(){
        cout << "Enter the number: ";
        cin >> acc_number;
        cout << "Enter the balance: ";
        cin >> acc_balance;
    }
    friend int HiFardin(BankAccount a);
};
int HiFardin(BankAccount a){
    return a.acc_balance;
}

int main(){
    BankAccount p1;
    p1.setdata();
    int balance = HiFardin(p1);
    cout << "The ammount: "<< balance;
    return 0;
}