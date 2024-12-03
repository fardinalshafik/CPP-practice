// Make a Fruit class with a data member to calculate the number of fruits in a basket.
// Create two other classes named Apples and Mangoes to calculate the number of
// apples and mangoes in the basket. Print the number of fruits of each type and the total
// number of fruits in the basket.

#include <iostream>
#include <string>

using namespace std;

class Fruit{ 
    public:
    int num_fruits;
    Fruit(){
        num_fruits = 0;
    }
    Fruit(int n) : num_fruits(n){}
    void print(){
        cout << "Number of fruits: " << num_fruits << endl;
    }
};

class Apples : public Fruit{
    public:
    Apples(int n) : Fruit(n){}
    void print(){
        cout << "Number of apples: " << num_fruits << endl;
    }
    int getApples(){ return num_fruits; }
};

class Mangoes : public Fruit{
    public:
    Mangoes(int n) : Fruit(n){}
    void print(){
        cout << "Number of mangoes: " << num_fruits << endl;
    }
    int getMangoes(){ return num_fruits; }
};

int main(){
    Fruit f(10);
    f.print();
    Apples a(5);
    a.print();
    Mangoes m(3);
    m.print();
    f.num_fruits += a.getApples()+ m.getMangoes();
    cout << "Number of total fruits: " << f.num_fruits << endl;
    
    return 0;
}