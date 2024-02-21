#include <iostream>
using namespace std;

inline double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << base << " raised to the power of " << exponent << ": " << power(base, exponent) << endl;

    return 0;
}
