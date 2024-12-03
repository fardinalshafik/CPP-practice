// Create a class named Shape with data members to store the width and height of a
// shape. Create another class named Color with a data member to store the color of a
// shape. Create a third class named ColoredShape that inherits from both the Shape and
// Color classes and has a method to print out the width, height, and color of the shape.
// Write a program to create a ColoredShape object and print out its width, height, and
// color.

#include <iostream>
using namespace std;

class Shape {
private:
    int width;
    int height;
    public:
    Shape(int w, int h) {
        width = w;
        height = h;
    }
    int getWidth() { return width; }
    int getHeight() { return height; }
};

class Color {
    string color;
    public:
    Color(string c) {
        color = c;
    }
    string getColor() { return color; }
};

class ColoredShape : public Shape, public Color {
    public:
    ColoredShape(int w, int h, string c) : Shape(w, h), Color(c) { }
    void print() {
        cout << "Width: " << getWidth() << endl;
        cout << "Height: " << getHeight() << endl;
        cout << "Color: " << getColor() << endl;
    }
};

int main(){
    ColoredShape c1(10, 20, "black");
    c1.print();
    return 0;
}