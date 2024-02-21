#include <iostream>
#include<math.h>
using namespace std;
int reverse_dig(int &x, int &y){
    int d, rev1=0;
    int count1 = log10(x)+1;
    for(int i=0; i<count1; i++){
        d= x%10;
        rev1= rev1*10 + d;
        x/=10;
    }
    x = rev1;
    int f, rev2=0;
    int count2 = log10(y)+1;
    for(int j=0; j<count2; j++){
        f= y%10;
        rev2= rev2*10 + f;
        y/=10;
    }
    y= rev2;
}
int swep(int &m, int &n){
    int temp = m;
    m = n;
    n = temp;
}
int main() {
    int a,b;
    cout << "Enter two digits: ";
    cin >> a >> b;
    reverse_dig(a,b);
    swep(a,b);
    cout << "After reverse and swep: " << a << " "<< b;
    return 0;
}
