#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;

bool canKillAllMonsters(ll A, vector<ll>& monsters, ll x)
{
    ll days = 0;
    for (ll hp : monsters)
    {
        if (A < hp + (days * x))
            return false;

        days++;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;

        vector<ll>monsters(n);

        for(int i=0; i< n; i++)
        {
            cin>>monsters[i];
        }

        sort(monsters.rbegin(),monsters.rend());

        ll ans = monsters[0];

        for(int i=0; i< n; i++)
        {
            if(ans < monsters[i]+(x*(i)))
            {
                ans = monsters[i]+(x*(i));
            }
        }

        cout<<ans<<endl;
    }



    return 0;
}



