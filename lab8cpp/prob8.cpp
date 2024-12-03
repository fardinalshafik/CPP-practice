// 8. A "Balloon" class represents a balloon used in a scientific experiment. Overload the unary
// operator + to increase the balloon's size, and - to decrease its size. The size should be limited
// within a reasonable range.

#include<iostream>
using namespace std;

class Balloon
{
private:
    int size;

public:
    Balloon(){ size = 0; }
    Balloon(int s){ size = s; }
    Balloon operator++(){ 
        size++;
        return *this; 
    }
    Balloon operator--(){ 
        size--; 
        return *this;
    }
    void display(){
        cout << "Balloon size: " << size << endl;
    }

};

int main(){
    Balloon b1(5);
    b1.display();

    ++b1;
    b1.display();

    --b1;
    b1.display();

    return 0;
}