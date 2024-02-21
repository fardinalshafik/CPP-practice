#include <iostream>
using namespace std;

inline int prime(int a) {
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return -1; 
        }
    }
    return 1; 
}

int main() {
    for (int i = 1; i <= 100; i++) {
        int f = prime(i);
        if (f == 1) {
            cout << i << " is a Prime number." << endl;
        } else {
            cout << i << " is not a Prime number." << endl;
        }
    }
    return 0;
}
