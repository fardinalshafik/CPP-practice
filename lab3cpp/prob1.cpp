#include <iostream>
using namespace std;

class Car
{
private:
    string Make;
    string Model;
    int Year;
    int Mileage;

public:
    void set_data(string aMake,string aModel,int aYear, int aMileage)
    {
        Make = aMake;
        Model = aModel;
        Year = aYear;
        Mileage = aMileage;
    }
    void display()
    {
        cout <<"Make: "<< Make << endl
             <<"Model: "<< Model << endl
             <<"Year: "<< Year << endl
             <<"Mileage: "<< Mileage << endl<<endl;
    }

    void update_mileage(int newMileage)
    {
        Mileage = newMileage;
    }
    bool isLuxury(){
        return (Make == "Mercedes" || Make == "BMW" || Make == "Lexus" || Make == "Audi");
    }

};

int main()
{
    Car car1;

    car1.set_data("Toyota","Camry",2021,10000);
    cout << "Car's Informatin: "<<endl<<endl;
    car1.display();

    car1.update_mileage(10500);
    cout << "After update Mileage: "<<endl<<endl;
    car1.display();

    cout<< "Is this car Luxury Car?"<< endl ;
    if (car1.isLuxury()){
        cout <<"Yes";
    }else{
        cout << "No";
    }


    return 0;
}
