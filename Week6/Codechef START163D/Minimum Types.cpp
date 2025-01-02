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
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        vector<long long>b(n);
        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i< n; i++)
        {
            int number;
            cin>>number;
            b[i]=number*a[i];
        }
        sort(b.rbegin(),b.rend());
        long long cost=0;
        for(int i=0; i< n; i++)
        {
            cost+=b[i];
            if(cost>=x)
            {
                cout<<i+1<<endl;
                break;
            }
        }
        if(cost<x)
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}


