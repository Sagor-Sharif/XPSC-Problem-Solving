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
        int n,k,total=0;
        cin>>n>>k;
        for(int i=0; i< n; i++)
        {
            int s;
            cin>>s;
            total+=s;
        }
        if(total<n)
        {
            cout<<"NO"<<endl;
        }
        else if(k==0 && (total%n !=0))
        {
            cout<<"NO"<<endl;
        }else if(k==0 && (total%n ==0))
        {
            cout<<"YES"<<endl;
        }
        else if(total >= n && k>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

