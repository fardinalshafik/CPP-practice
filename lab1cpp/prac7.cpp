#include <iostream>
using namespace std;
inline void FizzBuzz(int a){
     if (a % 3 == 0 && a % 5 == 0) {
            cout << a << " FizzBuzz ";
        } else if (a % 3 == 0) {
            cout << a << " Fizz ";
        } else if (a % 5 == 0) {
            cout <<a << " Buzz ";
        } else {
            cout << a << " None ";
        }
}
int main() 
{
    for (int i = 1; i <= 100; ++i) {
       FizzBuzz(i);
       cout << endl;
    }
    return 0;
}
