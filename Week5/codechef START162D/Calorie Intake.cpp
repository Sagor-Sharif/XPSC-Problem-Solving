#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    int calories = y*z;
    if(calories >= x)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<x-calories<<endl;
    }
    return 0;
}
