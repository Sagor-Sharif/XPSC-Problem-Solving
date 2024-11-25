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
        vector<int>def(n);
        for(int i=0; i< n; i++)
        {
            cin>>def[i];
        }
        long long coin =0;
        for(int i=0; i< n; i++)
        {
            int s = def[i]*x;
            coin+= min(s,y);
        }
        cout<<coin<<endl;
    }
    return 0;
}

