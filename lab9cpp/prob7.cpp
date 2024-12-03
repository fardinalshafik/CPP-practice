// 7. Implement an Alien class that has attributes like strength, technology level, and diplomacy.
// Overload the > operator to determine which alien race is more dominant based on these
// attributes.

#include <iostream>
#include <string>

using namespace std;

class Alien
{
private:
    int strength;
    int technologyLevel;
    int diplomacyLevel;

public:
    Alien(int s, int t, int d);
    int total();
    bool operator>(Alien &other);
    void print();
};
Alien::Alien(int s, int t, int d){
    strength = s;
    technologyLevel = t;
    diplomacyLevel = d;
}
int Alien:: total(){ return strength+technologyLevel+diplomacyLevel; }

bool Alien::operator>(Alien &other){
    return total() > other.total();
}

void Alien::print(){
    cout << "Strength: " << strength << endl << "Technology level : " << technologyLevel << endl
    << "Diplomacy level: " << diplomacyLevel << endl<<endl;
}

int main(){
    Alien Asgardians(80,85,75);
    Asgardians.print();

    Alien Kryptonians(99,75,70);
    Kryptonians.print();

    if(Asgardians > Kryptonians)
        cout << "Asgardians are more dominant than Kryptonians" << endl;
    else
        cout << "Kryptonians are more dominant than Asgardians" << endl;

    return 0;
}