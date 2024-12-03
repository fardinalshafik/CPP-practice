// Define a class Circle with private members for radius and center point. Write a
// friend function findCircumference that calculates and returns the circumference
// of the circle.

#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
    int radius;
    int centerX;
    int centerY;

public:
    void setdata()
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Enter the x-coordinate of the center of the circle: ";
        cin >> centerX;
        cout << "Enter the y-coordinate of the center of the circle: ";
        cin >> centerY;
    }
    friend float findCircumference(Circle c);
};

float findCircumference(Circle c)
{
    return 2 * M_PI * c.radius;
}

int main()
{
    Circle c;
    c.setdata();
    cout << "The circumference of the circle is: " << findCircumference(c) << endl;
    return 0;
}