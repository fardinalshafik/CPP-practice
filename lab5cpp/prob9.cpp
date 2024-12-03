// Define a class Vector with private members for x, y, and z components. Write a
// friend function that takes two Vector objects as parameters and returns the dot
// product.

#include<iostream>
using namespace std;

class Vector {
private: 
    int x;
    int y;
    int z;
public:
    void setdata(){
        cout << "Enter the value of x: ";
        cin >> x;
        cout << "Enter the value of y: ";
        cin >> y;
        cout << "Enter the value of z: ";
        cin >> z;
    }
    friend int function(Vector a, Vector b);
};
int function(Vector a, Vector b){
    return a.x*b.x +a.y*b.y + a.z*b.z ;
}

int main(){
    Vector v1,v2;
    v1.setdata();
    v2.setdata();
    int dot = function(v1,v2);
    cout << "The dot product: "<<dot;
    return 0;
}