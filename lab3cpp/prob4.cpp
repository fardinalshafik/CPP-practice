#include <iostream>
using namespace std;

class MenuItem
{
private:
    string item_name;
    double price;
    string description;

public:
    void set_data(string iTem, double pRice, string dEscription)
    {
        item_name = iTem;
        price = pRice;
        description = dEscription;
    }
    void display()
    {
        cout << item_name << endl
             << price << endl
             << description << endl
             << endl;
    }
};

int main()
{
    MenuItem food1;

    food1.set_data("Cheeseburger", 10.99, "Juicy beef patty with melted cheese.");
    cout << "Food Menu 1 : " << endl
         << endl;
    food1.display();

    return 0;
}
