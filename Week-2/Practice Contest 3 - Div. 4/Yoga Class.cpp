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
        int n,x,y;
        cin>>n>>x>>y;
        int h=0;
        if(x*2 < y)
        {
            if(n%2 != 0)
            {
                h=((n/2)*y)+x;
            }
            else
                h=(n/2)* y;
        }
        else
            h = n*x;
        cout<<h<<'\n';

    }
    return 0;
}

