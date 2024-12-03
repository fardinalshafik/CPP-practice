// 1. Create a Superhero class with attributes like strength, speed, and intelligence. Overload the
// + operator to simulate a battle between two superheroes. The hero with the higher
// combined attributes wins the fight.

#include<iostream>
using namespace std;

class Superhero
{
private:
    int strength;
    int speed;
    int intelligence;

public:
    Superhero(int a, int b, int c) {
        strength = a;
        speed = b;
        intelligence = c;
    }
    void display(){
        cout << "Strength: " << strength << endl;
        cout << "Speed: " << speed << endl;
        cout << "Intelligence: " << intelligence << endl<< endl;
    }
    friend bool operator > (Superhero const & a, Superhero const & b);
};

bool operator > (Superhero const & a, Superhero const & b){
    return (a.strength + a.speed + a.intelligence) > (b.strength + b.speed + b.intelligence);
}

int main (){
    Superhero Superman(99,90,60);
    Superman.display();

    Superhero Batman(75,70,95);
    Batman.display();

    if (Superman > Batman){
        cout << "Superman is the winner" << endl;
    }else {
        cout << "Batman is the winner" << endl;
    }

    return 0;
}
