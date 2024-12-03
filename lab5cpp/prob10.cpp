// In Bank X there are many customer. Each customer is identified with their
// AccountNumber. They also have some information related to their account like
// AccountName, AccountBalance, AccountType. When a customer deposit or
// withdraw money then the accountant first find the account and then add or
// subtract the amount of money to or from the AccountBalance.

#include<iostream>
using namespace std;

class Customer {
private:
    char AccountName[30];
    int AccountBalance;
    char AccountType[30];
public:
    void setdata(){
        cout << "Enter the type of account: ";
        cin >> AccountType;
        cout << "Enter the name: ";
        cin >> AccountName;
        cout << "Enter the balance: ";
        cin >> AccountBalance;
    }
    friend void function(Customer a);
};
void function(Customer a){
    cout << "1. Add \n2. Withdraw \nChoose : ";
    int n,money;
    cin >> n;
    if (n==1){
        cout << "Amount: ";
        cin>> money;
        a.AccountBalance += money;
        cout << "Update Amount: " << a.AccountBalance;
    }else if(n==2){
        cout << "Amount: ";
        cin>> money;
        a.AccountBalance -= money;
        cout<< "Update Amount: "<< a.AccountBalance;
    }else {
        cout << "Invalid command";
    }
}
int main(){
    Customer p1;
    p1.setdata();
    function(p1);
    return 0;
}