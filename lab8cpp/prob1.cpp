// Alice owns a mischievous dog named Max who loves to play hide-and-seek. Implement a
// class "Dog" with an overloaded unary operator to represent Max's excitement level. When
// Alice uses the ++ operator on Max, his excitement level should increase. When she uses the --
// operator, it should decrease. If the excitement level goes above 100 or below 0, an error
// should be raised.

#include<iostream>
using namespace std;

class Dog
{
    int excitement_level;
    public:
    Dog(){excitement_level = 0;}
    Dog (int el){
        excitement_level = el;
    }
    Dog operator++(int){
        if(excitement_level < 100){
            excitement_level++;
        }
        else{
            cout<<"Error: Excitement level cannot be greater than 100"<<endl;
        }
        return *this;
    }
    Dog operator-(){
        if(excitement_level > 0){
            excitement_level--;
        }
        else{
            cout<<"Error: Excitement level cannot be less than 0"<<endl;
        }
        return *this;
    }
    void display(){
        cout << "Excitement level: "<< excitement_level<<endl;
    }
    
};
int main(){
    Dog d1(55),d2,d3;
    d1.display();

    d2=d1++;
    d2.display();

    d3= -d1;
    d3.display();
    
    return 0;
}