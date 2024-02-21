#include <iostream>
using namespace std;
inline int factorial(int n){
    if (n < 2){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}
int main() {
    for (int i = 1; i <= 10; i++) {
        int fact = factorial(i);
        if (i < 0) {
            cout << "Invalid input.";
        }else {
            cout << "Factorial of " << i << " is "<< fact << endl;
        }
    }
    return 0;
}