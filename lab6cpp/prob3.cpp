// Design a C++ class to represent a Student. The class should have the following attributes:
// student name, student ID, student marks. The class should also have the following methods:
// getStudentName(), getStudentID(), getStudentMarks(), setStudentName(), setStudentID(),
// setStudentMarks(), calculateGrade(). The class should have a constructor that initializes the
// student name, student ID and student marks. Write a C++ program to create a Student object and
// set the student name, student ID and student marks. Then, calculate the grade of the student and
// print it on the console.

#include <iostream>
using namespace std;

class Student{
private:
    string studentName;
    int studentID;
    int studentMarks;
public:
    Student(){};
    Student(string n, int a, int b){
        studentName = n;
        studentID = a;
        studentMarks = b;
    }
    void setStudentName(string a){
        studentName = a;
    }
    void setStudentID(int a){
        studentID = a;
    }
    void setStudentMarks(int a){
        studentMarks = a;
    }
    string getStudentName(){
        return studentName;
    }
    int getStudentID(){
        return studentID;
    }
    int getStudentMarks(){
        return studentMarks;
    }
    void calculateGrade(){
        int grade = (studentMarks * 100) / 500;
        cout << "Student " << studentName << " has a grade of " << grade << endl;
    }
};

int main(){
    Student s;
    s.setStudentName("Fardin");
    s.setStudentID(101);
    s.setStudentMarks(445);
    s.calculateGrade();
    Student s2("Farhan",102,465);
    s2.calculateGrade();
    return 0;
}