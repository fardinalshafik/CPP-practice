#include <iostream>
using namespace std;

// Function to generate the next Fibonacci number
int getNextFibonacci(int &first, int &second) {
    int temp = first + second;
    first = second;
    second = temp;
    return first;
}

int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    int first = 0, second = 1;
    cout << "Fibonacci series: ";
    cout << first << " "; // Print the first Fibonacci number

    for (int i = 1; i < n; ++i) {
        int next = getNextFibonacci(first, second);
        cout << next << " "; // Print the next Fibonacci number
    }

    return 0;
}
