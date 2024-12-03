#include<iostream>
using namespace std;
class student
{
private:

    int art;
    int phi;
    int bus;
    float avg;
public:
    void getdata();
    void putdata();
};

void student::getdata()
{
    cout<<"Enter marks of ART: ";
    cin>>art;
    cout<<"Enter marks of Philosophy   ";
    cin>>phi;
    cout<<"Enter marks of Business ";
    cin>>bus;

    avg = (art + phi + bus) / 3 ;

}

void student :: putdata()
{
    cout<<"Average marks : "<<avg<<endl;

}

int main()
{
    student stu[10];
     cout<<"Enter the student information :   "<<endl;

     for(int i=0;i<3;i++)
     {
         cout << "Student number: "<<i+1<<endl;
         stu[i].getdata();
     }

     for(int i=0;i<3;i++)
     {
      static int roll=1001;
      cout<<"Roll : "<<roll<< " ";
      stu[i].putdata();
      roll++;
     }
     return 0;

}
