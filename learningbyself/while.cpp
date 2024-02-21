#include<iostream>
using namespace std;

int main()
{
    int sum=0 ,value=0 ;
    cout << "Enter numbers " << endl ;
    while(cin >> value )
         sum += value ;
    cout << "The sum is "<< sum;
}