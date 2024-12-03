// Create a class named Animal with data members to store the name and age of the
// animal. Create another class named Pet with a data member to store the owner of the
// pet. Create a third class named PetAnimal that inherits from both the Animal and Pet
// classes and has a data member

#include<iostream>
using namespace std;

class Animal{
protected:
    string name;
    int age;
public:
    Animal() {};
    Animal(string n, int a):name(n), age(a) {}

};

class Pet {
protected:
    string ownerName;
public:
    Pet() {};
    Pet(string n):ownerName(n) {}
    
};

class PetAnimal : public Animal, public Pet{
public:
    PetAnimal() {};
    PetAnimal(string n, int a, string o):Animal(n, a), Pet(o) {}
    void print() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Owner Name: " << ownerName << endl;
    }
};

int main(){
    PetAnimal p1("Tom",3,"Fardin Al Shafik");
    p1.print();

    return 0;
}