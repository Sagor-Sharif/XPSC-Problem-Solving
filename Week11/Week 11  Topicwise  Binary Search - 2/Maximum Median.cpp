#include<bits/stdc++.h>
using namespace std;

bool check(int x, int k, int n, vector<int> &nums)
{
    int opt = 0;

    for(int i=n/2; i<n; i++)
    {
        if(x - nums[i] >= 0)
        {
            opt += (x-nums[i]);
        }
        if(opt > k)
            return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<int>a(n);

    for(int i=0; i< n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    int l = 0, r = 9000000000;
    int ans ;
    while(l <= r)
    {
        int mid = l + (r-l) / 2;

        if(check(mid,k,n,a))
        {
            l = mid+1;
            ans = mid;
        }
        else
        {
            r = mid-1;
        }
        //cout<<l<<" "<<r<<" "<<ans<<endl;
    }


cout<<ans<<endl;

    return 0;
}



