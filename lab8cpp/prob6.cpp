// 6. Create an "Elevator" class that represents an elevator's current floor number. Overload the
// unary operator ++ to represent the elevator moving up one floor, and -- to represent it moving
// down one floor. Limit the elevator's movement between floors 1 and 10.

#include<iostream>
using namespace std;


class Elevator {
private:
    int floor;
public:
    Elevator(int f) {
        if (floor < 1 || floor > 10) {
            floor = 1;
        }
        floor = f;
    }
    Elevator& operator++() {
        if (floor < 10) {
            floor++;
        }
        return *this;
    }
    Elevator& operator--() {
        if (floor > 1) {
            floor--;
        }
        return *this;
    }
    int display() {
        cout << "Floor Number: " << floor << endl;
    }

};

int main() 
{
    Elevator e(5);
    e.display();

    ++e;
    e.display();
    
    --e;
    e.display();

    return 0;
}