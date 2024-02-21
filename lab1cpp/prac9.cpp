#include <iostream>

using namespace std;

inline double calculate(double num1, double num2, char operation) {
  switch (operation) {
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '*':
      return num1 * num2;
    case '/':
      return num1 / num2;
    default:
      return -1;
  }
}

int main() {
  double num1, num2;
  char operation;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter operation (+, -, *, /): ";
  cin >> operation;

  cout << "Enter second number: ";
  cin >> num2;

    double result = calculate(num1, num2, operation);
    if(result == -1){
        cout << "Invalied Input";
    }else {
        cout << "Result: " << result << endl;
    }
  return 0;
}
