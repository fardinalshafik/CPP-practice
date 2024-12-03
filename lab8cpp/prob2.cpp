// 2. In a magical library, there's a "Book" class with a numeric attribute representing the number
// of pages left to read. Overload the unary ~ operator to create a method to flip the book to its
// last page. When the operator is used on the book, it should set the page number to the
// maximum value representing the last page.

#include<iostream>
using namespace std;

class Book 
{
private:
    int pageLeft;
public:
    Book();
    Book(int p){pageLeft = p;}

    Book operator~(){
        pageLeft--;
        return *this;
    }
    void display(){
        cout << "Page Left: " << pageLeft << endl;
    }

};

int main(){
    Book b1(100);
    b1.display();

    ~b1;
    b1.display();
    
    return 0;
}