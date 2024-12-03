// Define a class Person with private members for name and age. 
// Write a friendfunction isOlder that takes two Person objects as parameters and 
// returns true if the first person is older than the second person, and false otherwise.

#include <iostream>
using namespace std;

class Person {
private:
    string Name;
    int Age;
public:
    void setdata(){
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Age: ";
        cin >> Age;
    }       
    friend bool isOlder(Person p1, Person p2);
};
bool isOlder(Person p1, Person p2){
    if(p1.Age > p2.Age){
        return true;
    }
    else{
        return false;
    }
}
int main() 
{
    Person p1;
    p1.setdata();
    Person p2;
    p2.setdata();
    bool old = isOlder(p1,p2);
    if (old == 1){
            cout << "The first person is older than the second person";
        }else{
            cout << "The second person is older than the first person";
        }
    
    return 0;
}