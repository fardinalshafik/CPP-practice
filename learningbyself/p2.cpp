#include<iostream>

using namespace std;

int main(){
    long long n ;
    cin >> n;
    long long arr[n];
    long long sum = 0;
    for(long long i=0; i<n; i++){
        cin>>arr[i];
    }
    for(long long i=0; i<n; i++){
        sum += arr[i];
    }
    if(sum < 0){
        sum*= -1;
        cout << sum ;
    }
    else{
        cout << sum ;
    }
    return 0;
}