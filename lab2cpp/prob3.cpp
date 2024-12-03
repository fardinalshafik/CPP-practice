#include <iostream>
using namespace std;

void funsala(int (&arry)[5], int p)
{
    cout << "Before bonus: "<<endl;
    for (int i=0; i<5; i++)
    {
        cout << arry[i]<< endl;
    }
    cout <<"After bonus: "<<endl;
    for (int i=0; i<5; i++)
    {
        arry[i] += arry[i]*p/100;
        cout << arry[i]<< endl;
    }

}

int main()
{
    int salary[5]= {10000,15000,20000,17000,12000};

    int per;
    cout << "Enter a percentage: ";
    cin >> per;

    funsala(salary,per);
    return 0;
}
