// Design a C++ class to represent a Circle. The class should have the following attributes: radius,
// area, perimeter. The class should also have the following methods: getRadius(), getArea(),
// getPerimeter(), setRadius(), drawCircle(). The class should have a constructor that initializes the
// radius, area and perimeter. Write a C++ program to create a Circle object and set the radius. Then,
// calculate the area and perimeter of the circle and print it on the console.

#include <iostream>
using namespace std;

class Circle
{
    private:
    int radius;
    float area;
    float perimeter;
public:
    Circle(){};
    Circle(int r){
        radius = r;
        area = 3.14 * r * r;
        perimeter = 2 * 3.14 * r;
    }
    int getRadius(){
        return radius;
    }
    float getArea(){
        return area;
    }
    float getPerimeter(){
        return perimeter;
    }
    void setRadius(int r){
        radius = r;
        area = 3.14 * r * r;
        perimeter = 2 * 3.14 * r;
    }
    void drawCircle(){
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
    }
    ~Circle(){};

};

int main(){
    Circle c1(10);
    c1.drawCircle();

    Circle c2;
    c2.setRadius(20);
    c2.drawCircle();
    return 0;
}