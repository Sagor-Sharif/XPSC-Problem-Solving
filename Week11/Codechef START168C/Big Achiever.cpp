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

        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }
        int mx=0;
        for(int i=0; i< n; i++)
        {
            if(i==0)
            {
                cout<<1<<" ";
                mx=a[i];
            }
            else if(mx<a[i])
            {
                cout<<1<<" ";
                mx = a[i];
            }
            else
                cout<<0<<" ";
        }

        cout<<endl;

    }



    return 0;
}



