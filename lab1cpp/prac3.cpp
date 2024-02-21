#include<iostream>
using namespace  std;
inline int calctof(double ct){
    double ft = 9*ct/5+32;
        cout << "So The temperature of Fahrenheit: " << ft ;
}
inline int calftoc(double ft){
    double ct = (ft-32)*5/9;
        cout << "So The temperature of Celsius: " << ct ;
}

int main()
{
    int tu;
    cout << "1.Celsius \n2.Fahrenheit \nEnter temperature unit: ";
    cin >> tu ;

    double ct, ft;
    if(tu ==1){
        cout << "Enter the temperature of Celsius: ";
        cin >> ct;
        calctof(ct);
    }
    else{
        cout << "Enter the temperature of Fahrenheit: ";
        cin >> ft;
        calftoc(ft);
    }
return 0;
} 
