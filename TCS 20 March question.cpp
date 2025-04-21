#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Enter any number";
    int count=0;
    cin>>count;
    int even =0;
    int odd=0;
    int p=0;
    while(count>0)
    {
        p=count%10;
        if(p%2==0)
        {
            even=even+p;
        }
        else
        {
            odd=odd+p;
        }
        count=count/10;
        
    }
    cout<< even-odd;

    return 0;
}
