#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool possible(vector<int> a,int n,int k)
{
    multiset<int> s;
    for(auto i:a)
    {
        s.insert(i);
    }

    for(int i=1; i<=k; i++)
    {
        if(s.empty())
        {
            return false;
        }
        int req=k-i+1;

        auto j=s.upper_bound(req);

        if(j==s.begin())
        {
            return false;
        }

        j--;

        s.erase(j);
        if(!s.empty())
        {
            j=s.begin();
            ll v=(*j);
            v+=(req);
            s.erase(j);
            s.insert(v);
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
        int n;
        cin>>n;
        vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int k;
        int l=0,r=n;

        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(possible(a,n,mid))
            {
                k=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<k<<endl;
    }


    return 0;
}



