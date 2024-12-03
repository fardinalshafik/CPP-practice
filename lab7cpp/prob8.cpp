// Create a class named Vehicle with data members to store the number of wheels and
// the top speed of a vehicle. Create another class named Engine with a data member to
// store the horsepower of the engine. Create a third class named Car that inherits from
// both the Vehicle and Engine classes and has a data member to store the number of
// doors. Write a program to create a Car object and print out its number of wheels, top
// speed, horsepower, and number of doors.

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

class Engine {
private:
    int horsePower;
    public:
    Engine(int hp) {
        horsePower = hp;
    }
    int getHorsePower() { return horsePower; }
};

class Car : public Vehicle, public Engine {
private:
    int doors;
public:
    Car(int w, int ts,int hp, int d):Vehicle(w, ts), Engine(hp) {
        doors = d;
    }
    void print() {
        cout << "Number of wheels: " << getWheels() << endl;
        cout << "Top speed: " << getSpeed() << endl;
        cout << "Horse power: " << getHorsePower() << endl;
        cout << "Number of doors: " << doors << endl;
    }
};

int main(){
    Car c1(4,180,1500,2);
    c1.print();

    return 0;
}