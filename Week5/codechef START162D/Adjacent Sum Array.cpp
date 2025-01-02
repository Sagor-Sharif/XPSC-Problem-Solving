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
        int n;
        cin>>n;
        vector<int> b(n-1);
        for(int i=0; i< n-1; i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        cout<<"1 ";
        int last=1;
        for(int i=0; i< n-1; i++)
        {
            cout<<b[i]-last<<" ";
            last = b[i]-last;
        }
        cout<<endl;
    }
    return 0;
}

