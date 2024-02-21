#include <iostream>
#include <string>
using namespace std;
inline int count(const string& str, char target) {
  int count = 0;
  for (char c : str) {
    if (c == target) {
      count++;
    }
  }
  return count;
}
int main() {
  string str;
  char target;
  cout << "Enter a string: ";
  getline(cin, str);
  cout << "Enter the character to count: ";
  cin >> target;
  int occurs = count(str, target);
  cout << "The character '" << target << "' occurs " << occurs
       << " times in the string.\n";
  return 0;
}
