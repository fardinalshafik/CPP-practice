// Design a C++ class to represent a Rectangle. The class should have the following attributes:
// length, breadth, area, perimeter. The class should also have the following methods: getLength(),
// getBreadth(), getArea(), getPerimeter(), setLength(), setBreadth(), drawRectangle(). The class
// should have a constructor that initializes the length, breadth, area and perimeter. Write a C++
// program to create a Rectangle object and set the length and breadth. Then, calculate the area and
// perimeter of the rectangle and print it on the console.

#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;
    float area , perimeter;
    public:
    Rectangle(){};
    Rectangle(int a, int b){
        width = a;
        height = b;
        area = width * height;
        perimeter = 2 * (width + height);
    }
    int getLength() {
        return width;
    }
    int getBreadth() {
        return height;
    }
    float getArea() {
        return area;
    }
    float getPerimeter() {
        return perimeter;
    }
    void setLength(int a){
        width = a;
    }
    void setBreadth(int b){
        height = b;
    }
    void setArea(){
        area = width * height;
    }
    void setPerimeter(){
        perimeter = 2 * (width + height);
    }
    void drawRectangle(){
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
    }
};

int main(){
    Rectangle r(10, 20);
    r.drawRectangle();

    Rectangle r2;
    r2.setLength(100);
    r2.setBreadth(200);
    r2.setArea();
    r2.setPerimeter();
    r2.drawRectangle();

    return 0;
}