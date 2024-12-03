// Design a C++ class to represent a Book. The class should have the following attributes: book
// title, book author, book price. The class should also have the following methods: getBookTitle(),
// getBookAuthor(), getBookPrice(), setBookTitle(), setBookAuthor(), setBookPrice(). The class
// should have a constructor that initializes the book title, book author and book price. Write a C++
// program to create a Book object and set the book title, book author and book price. Then, display
// the book details on the console.

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string BookTitle, BookAuthor;
    int BookPrice;
public:
    Book(){};
    Book(string t, string a, int p){
        BookTitle = t;
        BookAuthor = a;
        BookPrice = p;
    }
    string getBookTitle(){
        return BookTitle;
    }
    string getBookAuthor(){
        return BookAuthor;
    }
    int getBookPrice(){
        return BookPrice;
    }
    void setBookTitle(string t){
        BookTitle = t;
    }
    void setBookAuthor(string a){
        BookAuthor = a;
    }
    void setBookPrice(int p){
        BookPrice = p;
    }
    void display(){
        cout << "Book Title: " << BookTitle << endl;
        cout << "Book Author: " << BookAuthor << endl;
        cout << "Book Price: " << BookPrice << endl;
    }
    ~Book(){};
};

int main(){
    Book b1("C++ Programming", "Balagurusamy", 500);
    b1.display();

    Book b2;
    b2.setBookTitle("Object-Oriented Programming with C++ ");
    b2.setBookAuthor("Balagurusamy");
    b2.setBookPrice(600);
    b2.display();

    return 0;
}