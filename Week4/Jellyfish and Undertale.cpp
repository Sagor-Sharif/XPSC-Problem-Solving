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
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> tools(n);
        for(int i=0; i< n; i++)
        {
            cin>>tools[i];
        }
        sort(tools.begin(),tools.end());
        long long total_second= b-1;
        for(int i=0; i< n; i++)
        {
            if(tools[i] < a)
            {
                total_second+=tools[i];
            }
            else if(a!=1)
            {
                total_second+=a;
            }
        }
        if(a==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<total_second<<endl;
        }
    }
    return 0;
}

