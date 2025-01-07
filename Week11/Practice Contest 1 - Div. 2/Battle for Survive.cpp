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
        long long sum=0;
        for(int i=0; i< n; i++)
        {
           cin>>a[i];
           sum+=a[i];
        }

        cout<<sum - (2*a[n-2])<<endl;


    }


    return 0;
}



