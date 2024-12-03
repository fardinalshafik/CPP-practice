// I want to create a project about student managment systems where a student can admit himself by giving his information 
// such as his name and his desire depertment then he can enroll course and after that he can add or drop his course .

#include <iostream>
#include<vector>

using namespace std;

class Student
{
    protected:
    string firstName;
    string lastName;
    int studentId;

    public:
    Student (){
        
    }
    Student(string fName, string lName){
        firstName = fName;
        lastName = lName;
    }

};

class Admission : protected Student
{protected:
    int semester;
    int year;
    string department;
    int rollnumber;

public:
    Admission (){
       
    }
    Admission(string firstName, string lastName): Student(firstName, lastName) {
        
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter Semester: \n1.Spring \n2.Summer \n3.Fall" << endl;
        cout <<"Enter your choice: ";
        cin >> semester; 
        cout << "Department name: ";
        cin >> department;
        cout << "Roll number: ";
        cin >> rollnumber;
        studentId = (year%100)*1000000 + semester*100000 + 3000 + rollnumber;
    }
    void display(){
        cout << "Successfully Admitted. "<<endl;
        cout << "Name: "<< firstName << " "<< lastName <<endl;
        cout << "Student Id: " << studentId << endl;
    }

};

class Enrollment : public Student 
{
public:
    Enrollment();
};

class AddCourse
{};

class DropCourse
{};

// 

int main(){
    int choice;
    string firstName, lastName;

    Admission sms;
    vector<Admission> students;

    do {
        cout << "\n\tStudent Management System Menu\n";
        cout << "\n\t1. Add a new student\n";
        cout << "\t2. Enroll a student in a course\n";
        cout << "\t3. Drop a course for a student\n";
        cout << "\t4. Display information of all students\n";
        cout << "\t5. Quit\n";
        cout << "\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter first name of student: ";
                cin >> firstName;
                cout << "Enter last name of student: ";
                cin >> lastName;
                sms = Admission(firstName, lastName);
                sms.display();
                break;
            case 2:
        //         cout << "Enter student ID: ";
        //        // cin >> studentID;
        //         cout << "Enter course name: ";
        //      //   cin >> courseName;
        //   //     sms.enrollStudent(studentID, courseName);
        //         break;

        int studentID;
        cout << "Enter student ID: ";
        cin >> studentID;

        // Find student by ID
        bool found = false;
        for (Admission& student : students) {
          if (student.studentId == studentID) {
            found = true;
            // Enroll student in a course (call a separate function)
            Enrollment(student); // Replace with your enrollment logic
            break;
          }
        }
        if (!found) {
          cout << "Student with ID " << studentID << " not found." << endl;
        }
        break;
      // ... other cases
    
            case 3:
                cout << "Enter student ID: ";
             //   cin >> studentID;
                cout << "Enter course name: ";
            //    cin >> courseName;
          //      sms.dropCourse(studentID, courseName);
                break;
            case 4:
        //        sms.displayAllStudents();
                break;
            case 5:
                cout << "Exiting program. Goodbye!";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    } while (choice != 5);


    return 0;
}