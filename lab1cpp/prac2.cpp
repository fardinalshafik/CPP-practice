#include <iostream>
using namespace std;
inline void checkEvenOdd(int a)
{
    if (a % 2 == 0)
    {
        cout << a << " is an even number." << endl;
    }
    else
    {
        cout << a << " is an odd number." << endl;
    }
}
int main()
{
    int value;
    cout << "Enter many numbers: ";
    while (cin >> value)
    {
        checkEvenOdd(value);
    }
    return 0;
}