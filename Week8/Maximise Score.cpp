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

        vector<int>a(n);
        int mx =0,mxIndx ;
        for(int i=0; i< n; i++)
        {
            cin>>a[i];

        }

        int ans = INT_MAX;

        if(n == 1)
        {
            cout<<0<<endl;
            continue;
        }


        ans = abs(abs(a[0] - a[1]));
        ans = min(ans, abs(abs(a[n-1] - a[n-2])));




        for(int i=1; i< n-1; i++)
        {
            int x =abs(a[i]-a[i-1]);
            int y =abs(a[i]-a[i+1]);
            int  z= max(x,y);
            //cout<<x<<" "<<y<<endl;
            ans = min(ans,z);
        }
        cout<<ans<<endl;


    }


    return 0;
}
