#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    int digits =0;
    int X= x;
    while(x)
    {
        x= x/10;
        digits++;
    }
    //cout<<digits<<endl;
    if(digits == 4)
    {
        cout<<X<<endl;
    }
    else
    {
        for(int i=digits; i< 4; i++)
        {
            cout<<"0";
        }
        if(digits != 0)
        cout<<X<<endl;
    }
    return 0;
}
