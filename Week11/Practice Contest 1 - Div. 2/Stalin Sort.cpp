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
        long long n;
        cin>>n;
        long long arr[n+10];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        long long ans=INT_MAX;
        for(int i=0; i<n; i++)
        {
            long long cnt=0;
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]<arr[j])
                {
                    cnt++;
                }
            }
            ans=min(i+cnt,ans);
        }
        cout<<ans<<endl;
    }



    return 0;
}



