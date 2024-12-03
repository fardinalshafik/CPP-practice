// 4. There's a magical "Tree" class that grows older as time passes. Overload the unary operator
// ++ to represent the tree's age increment. When the operator is used, the tree's age should
// increase by one year.

#include<iostream>
using namespace std;

class Tree
{
    private:
    int age;

    public:
    Tree(int a){
        age = a;
    }
    Tree operator++(){
        age++;
        return *this;
    }
    void display(){
        cout << "Age: "<<age <<endl;
    }
};

int main(){
    Tree Mango(12);
    Mango.display();
    
    ++Mango;
    Mango.display();

    return 0;

}
