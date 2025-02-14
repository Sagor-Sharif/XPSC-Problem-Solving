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
        vector<int> buckets(n);
        ll sum =0;
        for(int i=0; i< n; i++)
        {
            cin>>buckets[i];
            sum+= buckets[i];
        }
        ll l=1,r = 999999999;
        bool poss =false;
        while(l<=r)
        {
            ll mid = (l+r) / 2;
            ll mm = (ll)mid*mid;
            if(mm == sum)
            {
                poss = true;
                break;
            }
            else if(mid*mid > sum)
            {
                r = mid -1;
            }
            else
            {
                l = mid+1;

            }
        }

        if(poss == true)
        {
            yes
        }
        else
            no

    }



    return 0;
}



