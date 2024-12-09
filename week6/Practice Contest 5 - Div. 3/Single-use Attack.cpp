#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int h,x,y;
        cin>>h>>x>>y;
        int attack =1;
        h-=y;
        if(h==0)
        {
            cout<<attack<<endl;
        }
        else if(h%x == 0)
        {
            attack += h/x;
            cout<<attack<<endl;
        }
        else
        {
            attack += h/x;
            cout<<attack+1<<endl;
        }
    }
    return 0;
}


