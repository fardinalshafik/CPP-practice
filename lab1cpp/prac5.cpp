#include <iostream>
using namespace std;

inline void leapYear(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        cout << "Leap Year";
    } else {
        cout << "Not a Leap Year";
    }
}

int main() {
    int a;
    cout << "Enter the year: ";
    cin >> a;
    leapYear(a);
    return 0;
}

