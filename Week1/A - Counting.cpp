#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<a-b<<endl;
    }
    else if(a >b)
    {
        cout<<"0"<<endl;
    }
    else
        cout<<b-a+1<<endl;




    return 0;
}
