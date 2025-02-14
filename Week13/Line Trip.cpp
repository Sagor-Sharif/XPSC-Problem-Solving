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
        int n,x;
        cin>>n>>x;
        vector<int>station(n);

        for(int i=0; i< n; i++)
        {
            cin>>station[i];
        }
        int tank = station[0];

        for(int i=0; i< n-1; i++)
        {
            tank = max(tank,station[i+1] - station[i]);
        }
        tank = max(tank,(x - station[n-1])*2 );

        cout<<tank<<endl;


    }


    return 0;
}



