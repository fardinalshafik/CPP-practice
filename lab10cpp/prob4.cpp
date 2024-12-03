// 4. Dave is creating a graphics library in C++. He wants to allow users to draw shapes with
// different colors and line styles. He uses function overloading to define different versions
// of the drawShape() function that take different combinations of parameters for color and
// line style.

#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void draw() = 0;

};

class Rectangle : public Shape
{
    protected:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b) : length(l), breadth(b) {}

    void draw()
    {
        cout << "Drawing a rectangle of length " << length << " and breadth " << breadth << endl;
    }
};

class Circle : public Shape
{
    protected:
    int radius;
    public:
    Circle(int r) : radius(r) {}
    void draw()
    {
        cout << "Drawing a circle of radius " << radius << endl;
    }
};

int main(){
    Shape *s;
    s = new Rectangle(10,20);
    s->draw();
    s = new Circle(10);
    s->draw();
    return 0; 
}