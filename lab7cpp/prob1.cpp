#include <iostream>
using namespace std;

class Person {
private:
    string name;
public:
    Person(){};
    Person(string n) {
        name = n;
    }
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

class student : public Person 
{
private:
    int id;
public:
    student(){};
    student(string n, int i) : Person(n) {
        id = i;
    }
    void setId(int i) {
        id = i;
    }
    int getId() {
        return id;
    }
    void print() {
        cout << "Name: " << getName() << endl;
        cout << "ID: " << getId() << endl;
    }
};

int main(){
    student s1("Fardin Al Shafik", 23203117);
    s1.print();

    student s2;
    s2.setName("Azadur Rahman Rana");
    s2.setId(23203116);
    s2.print();

    return 0;
}