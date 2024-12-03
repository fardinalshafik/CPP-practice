// We want to calculate the total marks of each student in a class in Physics, Chemistry,
// and Mathematics and the average marks of the class. The user enters the number of
// students in the class. Create a class named Marks with data members for roll number,
// name, and marks. Create three other classes inheriting the Marks class, namely
// Physics, Chemistry, and Mathematics, which are used to define marks in the
// individual subject of each student. The roll number of each student will be generated
// automatically.

#include<iostream>
#include<string>
using namespace std;

class Physics{
protected:
    int phymark;
public:
    Physics(int n): phymark(n){}
};

class Chemistry{
protected:
    int chmmark;
public:
    Chemistry(int n): chmmark(n){}
};

class Mathematics{
protected:
    int matmark;
public:
    Mathematics(int n): matmark(n){}
};

class Marks: public Physics , Chemistry, Mathematics{
protected:
    int rollNumber;
    static int nextRollNumber;
    string name;
    int marks;
    double average;
    
public:
    Marks();
    Marks(string n, int p, int c, int m): Physics(p) , Chemistry(c), Mathematics(m) {
        rollNumber = nextRollNumber++;
        name = n;

        marks = phymark + chmmark + matmark;
        average = marks/3;
    }
    void print(){
        cout << "Name: " << name << endl <<
        "Roll number: " << rollNumber << endl<<
        "Total Marks: " << marks << endl <<
        "Average Marks: " << average << endl;
    }
};

int Marks::nextRollNumber = 1000;

int main(){

    int num;
    cout << "Number of Student: "  << endl;
    cin>> num;

    for (int i=0; i<num; i++){
        
        string name;
        int p,c,m;
        cout << "Enter the name: "<< endl;
        cin >> name;
        cout << "Enter the marks of Physics: "<< endl;
        cin >> p ;
        cout << "Enter the number of Chemistry: "<< endl;
        cin >> c;
        cout << "Enter the number of Mathematics: "<< endl;
        cin >> m;

        Marks s1(name,p,c,m);
        s1.print();
    }

    return 0;
}
