// 7. Implement a "Player" class with an energy gauge that ranges from 0 to 100. Overload the
// unary operator ! to represent the player's energy being depleted. Each usage of the operator
// should decrease the energy level by a fixed amount.

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    int energy;

public:
    Player(int energy): energy(energy) {}
    Player operator!(){
        energy--;
        return *this;
    }
    void display(){
        cout << "Energy: " << energy << endl;
    }
};

int main()
{
    Player player(95);
    player.display();

    !player;
    player.display();

    return 0;
}