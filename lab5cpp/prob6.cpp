// Define a class Date with private members for year, month, and day.
// Write a friend function isLeapYear that takes a Date object as a parameter and returns
// true if the year is a leap year, and false otherwise.

#include <iostream>
using namespace std;

class Date {
private:
    int year;
    int month;
    int day;
public:
    void setdata(){
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter day: ";
        cin >> day;
    }
    friend bool isLeapYear(Date d);
};

bool isLeapYear(Date d) {
    if (d.year % 4 == 0) {
        if (d.year % 100 == 0) {
            if (d.year % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}

int main() 
{
    Date d;
    d.setdata();
    bool truthfalse = isLeapYear(d);
    if (truthfalse == 1){
        cout << "This year is a Leap year";
    }else
    {
        cout << "This year is not a Leap year";
    }
    return 0;
}