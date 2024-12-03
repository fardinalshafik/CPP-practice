// 15. All the banks operating in India are controlled by RBI. RBI has set well-defined
// guidelines (e.g., minimum interest rate, minimum balance allowed, maximum
// withdrawal limit, etc.), which all banks must follow. For example, suppose RBI has
// set the minimum interest rate applicable to a saving bank account to be 4% annually;
// however, banks are free to use a 4% interest rate or to set any rates above it.
// Write a program to implement bank functionality in the above scenario.
// Note: Create a few classes, namely Customer, Account, RBI (Base Class), and a few
// derived classes (SBI, ICICI, PNB, etc.). Assume and implement required member
// variables and functions in each class.

#include<iostream>

using namespace std;

class Customer{

};

class Account {

};

class RBI {
protected:
    int minimum_interest_rate;
    int interest_rate;
    int minimum_balance_allowed;
    int maximum_withdrawal_limit;


};