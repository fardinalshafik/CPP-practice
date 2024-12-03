// Create a class named Animal with a data member to store the name of the animal.
// Create another class named Cat that inherits from the Animal class and has a data
// member to store the number of lives of a cat. Write a program to create a Cat object
// and print out its name and number of lives.

#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    Animal(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

class Cat : public Animal {
    int lives;
    public:
    Cat(string n, int l) : Animal(n) {
        lives = l;
    }
    void print (){
        cout << getName() << " has " << lives << " lives." << endl;
    }
};

int main(){
    Cat cat("Tom", 3);
    cat.print();

    return 0;
}