#include<iostream>

class Students
{
public:
    int Hight;
    void getdata();
};
void Students::getdata(){
    std::cin>> Hight;

}


int main(){
    Students stu[50];
    int i, n;
    int Sum = 0;
    double Average;

    std::cout << "Enter the students numbers: ";
    std::cin >> n;

    for(i=0;i<n;i++){
        std::cout << "Hight of Students number "<<i+1<< " is: ";
        stu[i].getdata();
    }
    for(i=0;i<n;i++){
        Sum+= stu[i].Hight;
    }
    Average = Sum/n;
    std::cout << "Average: "<<Average;

    return 0;
}
