// 5. Build a "Compass" class that simulates a compass needle pointing to a specific direction.
// Overload the unary operator + to represent a clockwise rotation of the needle by a certain
// angle, and - to represent an anticlockwise rotation by the same angle.


#include<iostream>
using namespace std;

class Compass
{
private:
    int direction ;

public:
    Compass (int d = 360 ){
        direction = d % 360;
    }
    void display(){
        cout << "Compass Direction: " << direction << endl;
    }
    Compass operator+(int x){
        direction = (direction + x) % 360;
        return *this;
    }
    Compass operator-(int x){
        direction = (direction - x) % 360;
        return *this;
    }
};

int main (){
    Compass c1(260), c2;
    c1.display();

    int clockwise=90 ;
    c2= c1 + clockwise;
    c2.display();

    int aniticlockwise=90 ;
    c2 = c1 - aniticlockwise;
    c2.display();

    return 0;
}
