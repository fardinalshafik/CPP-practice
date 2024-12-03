#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void setdata()
    {
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
    }
    friend int findArea(Rectangle r);
};
int findArea(Rectangle r)
{
    return r.length * r.width;
}
int main()
{
    Rectangle r1;
    r1.setdata();
    cout << "The area of the rectangle is: " << findArea(r1) << endl;
    return 0;
}
