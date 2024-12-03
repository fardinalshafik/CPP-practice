// Create a class named Shape with data members to store the width and height of a
// shape. Create another class named Rectangle that inherits from the Shape class and
// has a method to calculate the area of the rectangle. Write a program to create a
// Rectangle object and print out its area.

#include <iostream>
using namespace std;

class Shape {
private:
    int width;
    int height;
public:
    Shape(){};
    Shape(int w, int h) {
        width = w;
        height = h;
    }
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
};

class Rectangle : public Shape 
{
private:
    int area;
public:
    Rectangle(){};
    Rectangle(int w, int h) : Shape(w, h) {
        area = w * h;
    }
    void setArea(){
        area = getWidth() * getHeight();
    }
    int print(){
        cout << "Area :" << area<< endl;
    }
};

int main(){
    Rectangle r1(10, 20);
    r1.print();

    Rectangle r2;
    r2.setWidth(15);
    r2.setHeight(25);
    r2.setArea();
    r2.print();

    return 0;
}