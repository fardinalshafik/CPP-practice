#include<iostream>
using namespace std;

class employee
{
private:
    string name;
    int salary;
    string joining;

public:
    void getdata();
    void putdata();

};
void employee::getdata()
{
    cout<<"Enter your name : ";
    getline(cin,name);
    cin.ignore();
    cout<<"Enter your salary : ";
    cin>>salary;
    cin.ignore();
    cout<<"Enter your joining date : ";
    getline(cin,joining);
}

void employee::putdata()
{
    cout<<name<<" "<<salary<<" "<<joining<<"\n";
}

int main()
{
    employee emp[10];
    cout<<"Enter the employees information :"<<"\n";
    for(int i=0;i<10;i++)
    {
        emp[i].getdata();
    }

    cout<<"\n"<< "The employees information :"<<endl;
    for(int i=0;i<10;i++)
    {
        emp[i].putdata();
    }
    return 0;
}