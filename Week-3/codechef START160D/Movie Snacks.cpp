#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;

    if((x+y) < z)
    {
        cout<<(x*2)+(y*3)<<endl;
    }
    else
        cout<<(z*2)+y<<endl;
    return 0;
}
