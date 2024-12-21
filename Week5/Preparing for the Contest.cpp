#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int i,j;
        for(i=1;i<=k;i++)
        {
            cout<<i<<" ";
        }
        for(j=n;j>=i;j--)
        {
            cout<<j<<" ";
        }
    cout<<endl;
    }

    return 0;
}


