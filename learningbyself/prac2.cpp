#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define the Student class
class Student {
private:
    string name;
    int id;
    string department;
public:
    // Constructor
    Student(string n, int i, string dep) : name(n), id(i), department(dep) {}

    // Member function to display student details
    // Member function to display student details
    void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
    }   


    // Getter function for ID
    int getId() const {
        return id;
    }
};

// Define the Student Management System class
class StudentManagementSystem {
private:
    vector<Student> students;
public:
    // Member function to add a new student
    void addStudent() {
        string name, department;
        int id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter department: ";
        cin >> department;
        students.push_back(Student(name, id, department));
        cout << "Student added successfully!" << endl;
    }

    // Member function to display all students
    void displayAllStudents() {
        if (students.empty()) {
            cout << "No students in the system." << endl;
        } else {
            cout << "List of Students:" << endl;
            for (const Student& student : students) {
                student.display();
                cout << endl;
            }
        }
    }

    // Member function to search for a student by ID
    void searchStudentById(int searchId) {
        bool found = false;
        for (const Student& student : students) {
            if (student.getId() == searchId) {
                cout << "Student found:" << endl;
                student.display();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Student not found." << endl;
        }
    }
};

int main() {
    StudentManagementSystem sms;
    int choice;
    int searchId;

    do {
        cout << "\nStudent Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sms.addStudent();
                break;
            case 2:
                sms.displayAllStudents();
                break;
            case 3:
                cout << "Enter ID to search: ";
                cin >> searchId;
                sms.searchStudentById(searchId);
                break;
            case 4:
                cout << "Exiting program. Goodbye!";
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
