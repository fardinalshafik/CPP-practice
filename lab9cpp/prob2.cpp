// 2. Implement a Potion class that represents a magical potion with properties like potency and
// duration. Overload the * operator to combine two potions, creating a new potion with
// increased potency and cumulative duration.

#include <iostream>
#include <string>

using namespace std;

class Potion
{
private:
    int potency;
    int duration;

public:
    Potion(int p, int d){
        potency = p;
        duration = d;
    }
    void display(){
        cout << "Potency: " << potency << ", duration: " << duration <<endl;
    }

    Potion operator*(const Potion& p){
        Potion newPotion(potency + p.potency, duration + p.duration);
        return newPotion;
    }
};

int main(){
    Potion potion1(10, 10);
    potion1.display();
    cout << endl;

    Potion potion2(20, 20);
    potion2.display();
    cout << endl;

    Potion potion3 = potion1 * potion2;
    potion3.display();
    return 0;
}