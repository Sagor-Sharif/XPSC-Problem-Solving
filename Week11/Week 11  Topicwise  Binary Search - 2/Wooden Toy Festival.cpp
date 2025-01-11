#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>a;

bool ispossible(int dif)
{
    long long maxint = a[0]+dif+dif;
    int cnt =1;
    for(int i=0; i< n; i++)
    {
        if(a[i]>maxint)
        {
            cnt++;
            maxint = a[i]+dif+dif;
        }
        if(cnt>3)
        {
            return false;
        }

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
        cin>>n;

        for(int i=0; i< n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());


        int l=0,r=1000000000;
        int ans;
        while(l<=r)
        {
            int mid = (l+r)/2;

            if(ispossible(mid))
            {
                r = mid-1;
                ans =mid;
            }
            else
            {
                l=mid+1;

            }
            //cout<<l<<" "<<r<<" "<<mid<<endl;

        }

        cout<<ans<<endl;

        a.erase(a.begin(),a.end());


    }



    return 0;
}
