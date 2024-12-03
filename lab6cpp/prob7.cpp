// 7: Design a C++ class to represent a Triangle. The class should have the following attributes: base,
// height, area, perimeter. The class should also have the following methods: getBase(), getHeight(),
// getArea(), getPerimeter(), setBase(), setHeight(), drawTriangle(). The class should have a
// constructor that initializes the base, height, area and perimeter. Write a C++ program to create a Triangle object and set the base and height. Then, calculate the area and perimeter of the triangle
// and print it on the console.

#include <iostream>
using namespace std;

class Triangle
{
    int base, height;
    float area=1, perimeter;
    public:
    Triangle(){};
    Triangle(int a, int b){
        base = a;
        height = b;
        area = .5*(a*b);
        perimeter = a+b;
    }
    int getBase(){return base;}
    int getHeight(){return height;}
    float getArea(){return area;}
    float getPerimeter(){return perimeter;}
    void setBase(int a){base = a;}
    void setHeight(int b){height = b;}
    void setArea(){area = .5*(base*height);}
    void setPerimeter(){perimeter = base+height;}
    void drawTriangle(){
        cout<<"Base: "<<base<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Area: "<<area<<endl;
        cout<<"Perimeter: "<<perimeter<<endl;
    }
};

int main(){
    Triangle a(7,5);
    a.drawTriangle();

    Triangle b;
    b.setBase(5);
    b.setHeight(10);
    b.setArea();
    b.setPerimeter();
    b.drawTriangle();

    return 0;
}