#include<iostream>
using namespace std;

class Bank
{
private:
    string AccName, AccHoldName;
    float AccBal;
public:
    Bank(){
        cout <<"Enter the account type: ";
        cin>> AccName;
        cout <<"Enter the account holder name: ";
        cin>> AccHoldName;
        cout <<"Enter the Balance amount: ";
        cin>> AccBal;
    }
    Bank(string a,string b,float c=0){
        AccName = b;
        AccHoldName = a;
        AccBal = c;
    }
    Bank(Bank &r){
        cout << "Enter the type: ";
        cin >> AccName;
        AccHoldName = r.AccHoldName;
        cout << "Enter the amount: ";
        cin >> AccBal;
    }
    void deposit(){
        float t;
        cout << "Enter the amount you want to deposit: ";
        cin >> t;
        AccBal += t;
        cout << "Updated Current amount: "<< AccBal<< endl;
    }
    void withdraw(){
        float d;
         cout << "Enter the amount you want to withdraw: ";
        cin >> d;
        AccBal-= d;
        cout << "Updated Current amount: "<< AccBal<< endl;
    }
    void getBalance(){
        cout<< "Current Amount: "<<AccBal;
    }
    void displayAccountDetails(){
        cout << "Account Details: "<<endl<<" Name: "<<AccHoldName<<endl << " Account type: "<<AccName<<endl << " Balance: "<< AccBal<<endl;
    }
    ~Bank(){
    cout << "Finished"<<endl;}
};
int main(){
 //   Bank a("Fardin","DPS",5000);
    Bank a;
    Bank c("Fahad","International",15000);

    a.withdraw();
    a.displayAccountDetails();
    a.deposit();
    a.displayAccountDetails();

    Bank b(a);
    b.deposit();
    b.displayAccountDetails();

    c.displayAccountDetails();
    return 0;

}
