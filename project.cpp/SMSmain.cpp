#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define the Course class by Apshora and Husbey 
class Course {
private:
    string name;
    string code;
public:
    // Constructor
    Course(string n, string c) : name(n), code(c) {}

    // Getter function for course name
    string getName() const {
        return name;
    }

    // Getter function for course code
    string getCode() const {
        return code;
    }
};

// Define the Student class by Apshora and Husbey 
class Student {
private:
    string name;
    int id;
    string department;
    vector<Course> courses;
public:
    // Constructor
    Student(string n, int i, string dep) : name(n), id(i), department(dep) {}

    // Member function to display student details
    void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Courses Enrolled:" << endl;
        if (courses.empty()) {
            cout << "No courses enrolled." << endl;
        } else {
            for (const Course& course : courses) {
                cout << "Course Name: " << course.getName() << ", Course Code: " << course.getCode() << endl;
            }
        }
    }

    // Getter function for ID
    int getId() const {
        return id;
    }

    // Member function to enroll in a course
    void enrollCourse(const Course& course) {
        courses.push_back(course);
        cout << "Enrolled in course: " << course.getName() << endl;
    }

    // Member function to drop a course
    void dropCourse(const string& code) {
        for (auto it = courses.begin(); it != courses.end(); ++it) {
            if (it->getCode() == code) {
                courses.erase(it);
                cout << "Dropped course with code: " << code << endl;
                return;
            }
        }
        cout << "Course with code " << code << " not found." << endl;
    }
};

// Define the Student Management System class by Fardin 
class StudentManagementSystem {
private:
    vector<Student> students;
    vector<Course> courses;
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
    void displayAllStudents() const {
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
    void searchStudentById(int searchId) const {
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

    // Member function to add a new course
    void addCourse() {
        string name, code;
        cout << "Enter course name: ";
        cin >> name;
        cout << "Enter course code: ";
        cin >> code;
        courses.push_back(Course(name, code));
        cout << "Course added successfully!" << endl;
    }

    // Member function to display all courses
    void displayAllCourses() const {
        if (courses.empty()) {
            cout << "No courses in the system." << endl;
        } else {
            cout << "List of Courses:" << endl;
            for (const Course& course : courses) {
                cout << "Course Name: " << course.getName() << ", Course Code: " << course.getCode() << endl;
            }
        }
    }

    // Member function to enroll a student in a course
    void enrollStudentInCourse(int studentId, const string& courseCode) {
        for (auto& student : students) {
            if (student.getId() == studentId) {
                for (const Course& course : courses) {
                    if (course.getCode() == courseCode) {
                        student.enrollCourse(course);
                        return;
                    }
                }
                cout << "Course with code " << courseCode << " not found." << endl;
                return;
            }
        }
        cout << "Student with ID " << studentId << " not found." << endl;
    }

    // Member function to drop a course for a student
    void dropCourseForStudent(int studentId, const string& courseCode) {
        for (auto& student : students) {
            if (student.getId() == studentId) {
                student.dropCourse(courseCode);
                return;
            }
        }
        cout << "Student with ID " << studentId << " not found." << endl;
    }
};

// By Antu and Rasel 
int main() {
    StudentManagementSystem sms;
    int choice;
    int searchId;
    string courseCode;

    do {
        cout << "\nStudent Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Add Course\n";
        cout << "5. Display All Courses\n";
        cout << "6. Enroll Student in Course\n";
        cout << "7. Drop Course for Student\n";
        cout << "8. Exit\n";
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
                sms.addCourse();
                break;
            case 5:
                sms.displayAllCourses();
                break;
            case 6:
                cout << "Enter Student ID: ";
                cin >> searchId;
                cout << "Enter Course Code: ";
                cin >> courseCode;
                sms.enrollStudentInCourse(searchId, courseCode);
                break;
            case 7:
                cout << "Enter Student ID: ";
                cin >> searchId;
                cout << "Enter Course Code: ";
                cin >> courseCode;
                sms.dropCourseForStudent(searchId, courseCode);
                break;
            case 8:
                cout << "Exiting program. Goodbye!";
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}
