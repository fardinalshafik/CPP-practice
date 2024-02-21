#include <iostream>
using namespace std;

inline double calculateTax(double income) {
    if (income <= 10000) {
        return 0.0;
    } else if (income <= 50000) {
        return 0.1 * (income - 10000);
    } else if (income <= 100000) {
        return 0.2 * (income - 50000) + 4000; 
    } else {
        return 0.3 * (income - 100000) + 20000;
    }
}

int main() {
    double income;
    cout << "Enter your income: TK.";
    cin >> income;

    double tax = calculateTax(income);
    cout << "Income tax: TK." << tax << endl;

    return 0;
}
