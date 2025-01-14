#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,c=0,ans=1;

        cin>>n;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            if(x==1)
            {
                c++;
            }
            else if(x==0)
            {
                ans=ans*2;
            }
        }
        cout<<ans*c<<endl;

    }
    return 0;
}
