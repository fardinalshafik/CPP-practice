// 8. Create a Musician class that represents a musician with skills like guitar, vocals, and drums.
// Overload the + operator to combine two musicians, creating a new musician with their
// collective skills.

#include <iostream>
#include <string>

using namespace std;

class Musician
{
private:
    int guitarLevel;
    int vocalsLevel;
    int drumsLevel;

public:
    Musician();
    Musician(int g, int v, int d): guitarLevel(g),vocalsLevel(v),drumsLevel(d) {}
    void display(){
        cout << "Guiter Level: " <<guitarLevel << endl;
        cout << "Vocals Level: " <<vocalsLevel << endl;
        cout << "Drums Level: " <<drumsLevel << endl<<endl;
    }
    Musician operator+(Musician& other){
        return Musician (guitarLevel + other.guitarLevel, vocalsLevel + other.vocalsLevel, drumsLevel + other.drumsLevel);
    }
    
};

int main(){
    Musician m1(1,2,3);
    m1.display();
    Musician m2(4,5,6);
    m2.display();
    Musician m3 = m1 + m2;
    m3.display();
    return 0;
}