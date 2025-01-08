#include<bits/stdc++.h>
using namespace std;
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
        vector<int> arr(n);
        for(int i=0; i< n; i++)
        {
            cin>>arr[i];
        }
        set<int>st;
        for(int i=0; i<n; i++)
        {
            st.insert(arr[i]);
        }
        vector<int> v;
        for(auto &it:st)
        {
            v.push_back(it);
        }

        long long ans=0;
        for(int i=0; i<v.size(); i++)
        {
            int  x=v[i];

            auto itt=lower_bound(v.begin(),v.end(),x+n);
            long long d=itt-v.begin()-i;
            ans=max(ans,d);
        }

        cout<<ans<<"\n";

    }



    return 0;
}


