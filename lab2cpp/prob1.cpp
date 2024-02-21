#include <iostream>
using namespace std;
int fibo(int &first, int &second, int &term){
    int temp;
    for(int i=0; i<term; i++){
        cout << first << " ";
        temp = first + second ;
        first = second ;
        second = temp; 
    }
}
int main(){
    int n, a=0 ,b=1;
    cout << "Enter the term of Fibonacci series: ";
    cin >> n;
    cout << "Fibonacci series: ";
    int next = fibo(a,b,n);
    return 0;
}
