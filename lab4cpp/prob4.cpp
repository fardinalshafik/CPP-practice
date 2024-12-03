#include<iostream>

class Students
{
    char Name[30];
    int ParticipationStatus;
public:
    void getdata();
    void putdata();
};
void Students::getdata()
{
    std::cout<< "Enter Name: ";
    std::cin>> Name;
    std::cout<< "Enter Participation Status: ";
    std::cin>> ParticipationStatus;
}
void Students::putdata()
{
    if(ParticipationStatus==1)
    {
        std::cout<< "Name: "<<Name <<std::endl;
        std::cout << "Participation Status: Yes"<< std::endl;
    }
}

int main()
{
    Students stu[5];
    int i;

    std::cout<<"For attending \nParticipationStatus will be 1.\nif not then 0 "<<std::endl;
    for(i=0; i<5; i++)
    {
        std::cout << "Students "<<i+1<< " :\n";
        stu[i].getdata();
    }
    for(i=0; i<5; i++)
    {
        stu[i].putdata();
    }


    return 0;
}
