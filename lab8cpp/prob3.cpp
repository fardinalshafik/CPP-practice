// 3. Design a "RollerCoaster" class that simulates a ride with excitement levels ranging from 1 to
// 10. Overload the unary operator - to represent a decrease in the excitement level when the
// roller coaster experiences a scary part. Each usage of the operator should decrease the
// excitement level by 1 until it reaches 1.

#include<iostream>
using namespace std;

class RollerCoaster
{
private:
    int excitementLevel;
public:
    RollerCoaster(int el): excitementLevel(el){}
    void display(){
        cout << "RollerCoaster Excitement Level: " <<excitementLevel << endl;
    }
    RollerCoaster operator~(){
        excitementLevel--;
        return *this;
    }

};
 int main() 
 {
    RollerCoaster R1(7);
    R1.display();

    ~R1;
    R1.display();

    return 0;
 }