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

        vector<int>arr_a(n);
        vector<int>arr_b(n);

        for(int i=0; i< n; i++)
        {
            cin>>arr_a[i];
        }
        for(int i=0; i< n; i++)
        {
            cin>>arr_b[i];
        }

        unordered_set<int>ans;

        for(int i=0; i< n; i++)
        {
            for(int j=0;j<n;j++)
            {
                ans.insert(arr_a[i]+arr_b[j]);
            }
        }

        if(ans.size() >=3)
        {
            yes
        }
        else
            no





    }



    return 0;
}



