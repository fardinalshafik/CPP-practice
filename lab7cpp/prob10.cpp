// Create two classes named “Mammals” and “MarineAnimals.” Create another class
// called “BlueWhale,” which inherits both the above classes. Now, create a function in
// each of these classes that prints "I am a mammal,” "I am a marine animal," and "I
// belong to both the categories: Mammals as well as Marine Animals," respectively.
// Now, create an object for each of the above classes and try calling
// – a function of Mammals by the object of Mammal
// – a function of MarineAnimal by the object of MarineAnimal
// – a function of BlueWhale by the object of BlueWhale
// – a function of each of its parents by the object of BlueWhale

#include <iostream>
#include <string>

using namespace std;

class Mammals{
    public:
    void print(){
        cout << "I am a mammal" << endl;
    }
};

class MarineAnimals{
    public:
    void print(){
        cout << "I am a marine animal" << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals{
    public:
    void print(){
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};

int main(){
    Mammals m;
    MarineAnimals ma;
    BlueWhale b;

    m.print();
    ma.print();
    b.print();
    

    return 0;
}