#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll ts = 0,te =0;
        for(int i=0; i< n; i++)
        {
            ll a;
            cin>>a;
            ts += a;
        }
        for(int i=0; i< m; i++)
        {
            ll a;
            cin>>a;
            te += a;
        }
        if(ts > te)
        {
            cout<<"Tsondu"<<endl;
        }
        else if(ts < te)
        {
            cout<<"Tenzing"<<endl;
        }
        else
            cout<<"Draw"<<endl;


    }



    return 0;
}



