// Create a class named BankAccount with a data member to store the account balance.
// Create another class named SavingsAccount that inherits from the BankAccount class
// and has a data member to store the interest rate of the account. Write a program to
// create a SavingsAccount object and print out its account balance and interest rate.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount() {
        balance = 0;
    }
    BankAccount(double b){
        balance = b;
    }
    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount() {
        interestRate = 0;
    }
    SavingsAccount(double b, double i):BankAccount(b) {
        interestRate = i;
    }
    void print(){
        cout << "Balance: " << getBalance() << endl;
        cout << "Interest Rate: " << interestRate << endl;
    }
};

int main() {
    SavingsAccount s1(100000,7.5);
    s1.print();
    return 0;
}