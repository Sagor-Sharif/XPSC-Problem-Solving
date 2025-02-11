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
        int n;
        cin>>n;
        vector<int> players(n);

        for(int i=0; i< n; i++)
        {
            cin>>players[i];
        }

        sort(players.begin(),players.end());
        int ans= 0;
        for(int i=1; i<= 100; i++)
        {
            int current =0;

            int l=0,r=n-1;

            while(l < r)
            {
                if(players[l] + players[r] == i)
                {
                    current++;
                    l++;
                    r--;
                }
                else if( players[l] + players[r] > i )
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
            if(ans < current)
            {
                ans = current;
            }

        }

    cout<<ans<<endl;

    }



    return 0;
}


