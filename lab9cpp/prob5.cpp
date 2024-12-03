// 5. Create a Spaceship class that represents a spaceship with attributes like fuel capacity and
// cargo capacity. Overload the  << operator to display the spaceship's vital information in a
// user-friendly format.

#include<iostream>
using namespace std;

class Spaceship
{
private:
    int fuelCapacity;
    int cargoCapacity;

public:
    Spaceship(int f, int c){
        fuelCapacity = f;
        cargoCapacity = c;
    }

    friend ostream& operator<<(ostream& os,const Spaceship& ship);
};

ostream& operator<<(ostream& os,const Spaceship& ship){
    os << "Fuel Capacity: " << ship.fuelCapacity << endl;
    os << "Cargo Capacity: " << ship.cargoCapacity << endl;
    return os;
}

int main(){
    Spaceship s1(100,50);
    cout << s1 << endl;

    return 0;
}
