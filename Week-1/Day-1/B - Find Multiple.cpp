#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    if((c*2) >=a && (c*2) <= b)
    {
        cout<<c*2<<endl;
        return 0;
    }
    else
    {
        for(int i=1; i<= b; i++)
        {
            if((c*i) >=a && (c*i) <= b)
            {
                cout<<c*i<<endl;
                return 0;
            }
            else if((c*i) > b)
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
    }
        cout<<"-1"<<endl;

    return 0;
}
