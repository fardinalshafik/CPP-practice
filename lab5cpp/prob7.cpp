// Define a class LinkedList with private members for the list elements and head
// pointer. Write a friend function reverse that takes a LinkedList object as a
// parameter and reverses the order of the list elements.

#include <iostream>
using namespace std;

class LinkedList
{
private:
    int list;
    int head;

public:
    void setdata(){
        cout << "Enter the number of list elements: ";
        cin >> list;
        cout << "Enter the list elements: ";
        for (int i = 0; i < list; i++)
        {
            int data;
            cin >> data;
            
        }
    }
};