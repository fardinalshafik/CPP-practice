// Design a C++ class to represent a Shape. The class should have the following attributes: color,
// area, perimeter. The class should also have the following methods: getArea(), getPerimeter(),
// setColor(), drawShape(). The class should have a constructor that initializes the color, area and
// perimeter.Write a C++ program to create a Shape object and set the color and area of the shape.
// Then, draw the shape on the console.

#include <iostream>
using namespace std;

class Shape
{
private:
    string color;
    int area;
    int perimeter;
public:
    Shape(){};
    Shape(string a, int b, int c){
        color = a;
        area = b * c;
        perimeter = 2 * (b + c);
    }
    void getArea(int x, int y);
    void getPerimeter(int x, int y);
    void setColor(string x);
    void drawShape();
};

void Shape::getArea(int x, int y){
    area = x * y;
}
void Shape::getPerimeter(int x, int y){
    perimeter = 2 * (x + y);
}
void Shape::setColor(string x){
    color = x;
}

void Shape::drawShape(){
    cout << "Color: " << color << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}
int main(){
    Shape f("Red",100,100);
    Shape s;
    s.setColor("red");
    s.getArea(10, 10);
    s.getPerimeter(10, 10);
    s.drawShape();
    f.drawShape();

    return 0;
}
