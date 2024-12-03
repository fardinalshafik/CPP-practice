#include <iostream>
using namespace std;

void func(int (&s)[5], int f, int q)
{
    cout << "Before purcharge: "<<endl;
    for (int i=0; i<5; i++){
        cout << s[i]<< endl;
    }
    s[f-1]-= q;
    cout << "after purcharge: "<<endl;
    for (int i=0; i<5; i++)
    {
        cout << s[i]<< endl;
    }
}

int main()
{
    int stock[5]= {200,60,25,15,10};
    int p,qnt;
    cout << "Choice a product: ";
    cin >> p;
    cout << "Enter the quantity: ";
    cin >> qnt;

    func(stock,p,qnt);

    return 0;
}
