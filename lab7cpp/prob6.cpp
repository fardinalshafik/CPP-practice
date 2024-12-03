// Create a class named Person with data members to store the name and age of a
// person. Create another class named Student with data members to store the student ID
// and GPA. Create a third class named StudentAthlete that inherits from both the
// Student and Person classes and has a data member to store the sport played by the
// student athlete. Write a program to create a StudentAthlete object and print out their
// name, age, student ID, GPA, and sport.

#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
    string name;
    int age;
    public:
    Person(string n, int a){
        name = n;
        age = a;
    }
    string getName() { return name; }
    int getAge() { return age; }
};
class Student
{
    private:
    string studentID;
    float GPA;
    public:
    Student(string id, float g){
        studentID = id;
        GPA = g;
    }
    string getid(){
        return studentID;
    }
    float getGPA(){
        return GPA;
    }
};

class StudentAthlete : public Person, public Student{
    private:
    string sport;
    public:
    StudentAthlete(string n, int a, string id, float g, string s) : Person(n,a),Student(id,g){
        sport = s;
    }
    void print(){
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Student ID: " << getid() << endl;
        cout << "GPA: " << getGPA() << endl;
        cout << "Sport: " << sport << endl;
    }
};

int main(){
    StudentAthlete s1("Fardin Al Shafik",22,"23203117",3.96,"Football");
    s1.print();

    return 0;
}