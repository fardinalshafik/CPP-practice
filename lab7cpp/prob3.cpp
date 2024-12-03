// Create a class named Vehicle with data members to store the number of wheels and
// the top speed of a vehicle. Create another class named Car that inherits from the
// Vehicle class and has a data member to store the number of doors. Write a program to
// create a Car object and print out its number of wheels, top speed, and number of
// doors.

#include <iostream>
using namespace std;

class Vehicle {
private:
    int wheels;
    int topSpeed;
public:
    Vehicle(int w, int ts) {
        wheels = w;
        topSpeed = ts;
    }
    int getSpeed() { return topSpeed; }
    int getWheels() { return wheels; }
};

class Car : public Vehicle {
private:
    int doors;
public:
    Car(int w, int ts,int d):Vehicle(w, ts) {
        doors = d;
    }
    void print() {
        cout << "Number of wheels: " << getWheels() << endl;
        cout << "Number of top speed: " << getSpeed() << endl;
        cout << "Number of doors: " << doors << endl;
    }
};

int main(){
    Car c1(4,180,4);
    c1.print();

    return 0;
}