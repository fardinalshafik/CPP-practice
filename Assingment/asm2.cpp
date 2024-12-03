// Inventory Management System

// I. CEP Statement:
// In this programming assignment, you will develop an advanced inventory management system for
// a retail store. This system will handle the storage, management, and analysis of inventory data,
// incorporating various functionalities to optimize store operations.
// II. Problem Definition:
// Design and implement a comprehensive inventory management program using C++. The program
// should support adding new items to the inventory, updating item quantities (e.g., upon receipt or
// sale), calculating total inventory values, generating reports on stock levels, and facilitating sales
// transactions.
// III. System Requirements:
// 1. Adding New Items:
// - User can input details of new inventory items, including item name, price, quantity, and other
// relevant attributes.
// - Implement data validation to ensure accurate and consistent item entries.
// 2. Updating Item Quantities:
// - Provide functionalities to update item quantities based on inventory transactions (e.g., sales,
// restocking).
// - Implement error handling to prevent negative or invalid quantity updates.
// 3. Calculating Total Inventory Values:
// - Calculate the total value of the inventory based on item prices and quantities.
// - Display summary statistics such as total inventory cost and retail value.
// 4. Generating Reports on Stock Levels:
// - Develop reporting features to display current stock levels for all items or specific categories.
// - Allow customization of report formats and filtering options (e.g., low stock alerts).
// 5. Facilitating Sales Transactions:
// - Enable users to process sales transactions by updating inventory quantities and recording sales
// details.

// - Implement features for calculating transaction totals, applying discounts, and generating
// receipts.
// - Provide Functionalities to enable customer for returning any product. If the product is a
// discounted item then the product can’t be returned.
// 6. Data Management and Storage:
// - Use appropriate data structures (e.g., arrays, linked lists, or databases) to manage inventory
// data efficiently.

#include<iostream>
#include<string>

using namespace std;

class Item
{
    private: 
    string itemName;
    int itemCode;
    double itemPrice;
    int itemQuantity;

    public:
    Item(){}
    void setItemName(string name){ itemName = name; }
    void setItemCode(int code){ itemCode = code; }
    void setItemPrice(double price){ itemPrice = price; }
    void setQuantity(int quantity){ itemQuantity = quantity; }

    string getItemName(){ return itemName; }
    int getItemCode(){ return itemCode; }
    double getItemPrice(){ return itemPrice; }
    int getQuantity(){ return itemQuantity; }

    void displayItem(){
        cout << "Item Name: " << itemName << endl;
        cout << "Item Code: " << itemCode << endl;
        cout << "Item Price: " << itemPrice << endl;
        cout << "Item Quantity: " << itemQuantity << endl;
    }

};


class Inventory : public Item
{
    private:

    string previousItem[10];
    int previousItemCode[10];

    public:
    int numpreviousitem;
    Inventory(){numpreviousitem=0;}
    void addItem(string name, int code, double price, int quantity);
    void enrollCourse(string course, int code);
    void dropCourse(int code);
    void displayStudentInfo();

};


int main(){
    Inventory inventory[10];

    string fname, lname, dep;
    int year,id;
    
    string course;
    int courseCode;

    int index = 0;
    int roll = 0;
    int choice;

    cout << "\tStudent Management System\n"<<endl;

    do
    {

        cout << "\n\t1. Add a new student\n";
        cout << "\t2. Enroll a student in a course\n";
        cout << "\t3. Drop a course for a student\n";
        cout << "\t4. Display information of all students\n";
        cout << "\t5. Quit\n";

        cout << "\tEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\n\t1. Add a new student\n";
                cout<< "Enter Student First Name: ";
                cin >> fname;
                cout<< "Enter Student Last Name: ";
                cin >> lname;
                cout << "Enter Department Name: ";
                cin >> dep;
                cout<< "Enter Admission Year: ";
                cin >> year;
                student[index].addStudent(fname,lname,dep,year,roll+1);
                index++;
                roll++;
                break;
            case 2:
                cout << "\n\t2. Enroll a student in a course\n";
                cout << "Enter Student ID: ";
                cin >> id;
                cout << "Enter Course Name: " ;
                cin >> course ;
                cout << "Enter Course Code: " ;
                cin >> courseCode ;
                student[id%1000-1].enrollCourse(course,courseCode);
                student[id%1000-1].displayStudentInfo();
                break;
            case 3:
            cout << "\n\t3. Drop a course for a student\n";
                cout << "Enter Student ID: ";
                cin >> id;
                cout << "Enter Course Code: " ;
                cin >> courseCode ;
                student[id%1000-1].dropCourse(courseCode);
                student[id%1000-1].displayStudentInfo();
                break;
            case 4:
                cout << "\n\t4. Display information of all students\n";
                for(int i=0; i<index; i++){
                    student[i].displayStudentInfo();
                }
                break;
            case 5:
                return 0;
                break;
            default:
                cout << "\n\tInvalid Choice\n";
                break;
        }

    } while(choice !=5);

    return 0;
}

void Inventory::addItem(string name, int code, double price, int quantity){
    setItemName(name);
    setItemCode(code);
    setItemPrice(price);
    setQuantity(quantity);
    cout << "Succcessfully Added!" << endl;
    cout << "Item Name: " << getItemName() << endl;
    cout << "Item Code: " << getItemCode() << endl;
    cout << "Item Price: " << getItemPrice() << endl;
    cout << "Item Quantity: " << getQuantity() << endl;
}

void Student::enrollCourse(string course, int code){
    setCourseName(course);
    setCourseCode(code);
    if(numpreviouscouse < 6){
        previousCourse[numpreviouscouse] = course;
        previousCourseCode[numpreviouscouse] = code;
        numpreviouscouse++;

        cout << "Succcessfully Enrolled!" << endl;
    }
    else{
        cout << "Failed to Enroll!" << endl;
        cout << "Maximum number of courses reached!" << endl;
    }


}

void Student::dropCourse(int code){
    for (int i =0; i < numpreviouscouse; i++){
        if(previousCourseCode[i] == code){
            for(int j=i; j<numpreviouscouse; j++){
                previousCourse[j] = previousCourse[j+1];
                previousCourseCode[j] = previousCourseCode[j+1];
            }
            numpreviouscouse--;
            cout << "Succcessfully Dropped!" << endl;
            break;
        }
        else{
            cout << "Failed to Drop!" << endl;
            cout << "Course not found!" << endl;
            break;
        }
    }
    

}

void Student::displayStudentInfo(){
    cout << "Student Name: " << firstName << " " << lastName << endl;
    cout << "Student ID: " << rollNo << endl;
    cout << "Department: " << department << endl;
    cout << "Admission Year: " << admissionYear << endl;
    cout << "Courses:\tCode:" << endl;
    for(int i=0; i<numpreviouscouse; i++){
        cout << "" << previousCourse[i] << "\t\t" << previousCourseCode[i] << endl;
    }
    cout << endl;
}