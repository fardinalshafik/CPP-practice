#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int level;
    int score;

public:
    void set_data(string aName, int aLevel, int aScore)
    {
        name = aName;
        level = aLevel;
        score = aScore;
    }
    void display()
    {
        cout << name << endl
             << level << endl
             << score << endl << endl ;
    }

    void increase(int newscore)
    {
        score += newscore;
        level++;
    }
};

int main()
{
    Player person1;

    person1.set_data("Fardin Al Shafik",1,100);
    cout << "Fardin's status: "<<endl<<endl;
    person1.display();

    person1.increase(50);
    cout << "After increase : "<<endl<<endl;
    person1.display();


    return 0;
}
