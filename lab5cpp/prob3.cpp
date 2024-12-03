// Define a class Complex with private members for real and imaginary parts. Write
// a friend function add that takes two Complex objects as parameters and returns
// the sum of the two complex numbers.

#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    void setdata(){
        cout << "Enter real and imaginary parts of complex number: ";
        cin >> real >> imag;
    }
    void getdata(){
        cout << "Real part: " << real << endl;
        cout << "Imaginary part: " << imag <<"i"<< endl;
    }
    friend Complex add(Complex &a, Complex &b);
};
Complex add(Complex &a, Complex &b)
    {
        Complex result;
        result.real = a.real + b.real;
        result.imag = a.imag + b.imag;
        return result ;
    }
int main(){
    Complex c1,c2;
    c1.setdata();
    c2.setdata();

    Complex sum = add(c1,c2);
    sum.getdata();


    return 0;
}