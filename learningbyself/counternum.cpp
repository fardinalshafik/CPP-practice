#include<iostream>
using namespace  std;
int main()
{
    int firstval=0 , otherval=0;
    if(cin >> firstval)
    {
        int cnt =1;
        while (cin >> otherval)
        {
            if(otherval == firstval)
            {
                cnt++;
            }
            else
            {
                cout << firstval << " occures " << cnt << " times " << endl;
                firstval = otherval;
                cnt =1;
            }
        }
        cout << firstval << " occures " << cnt << " times " << endl;
    }
return 0;    
} 

