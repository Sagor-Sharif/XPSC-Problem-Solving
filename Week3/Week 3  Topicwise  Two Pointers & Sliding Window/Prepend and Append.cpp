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
        string s;
        cin>>s;
        int sz=n;
        for(int i=0; i< n; i++)
        {
            if(s[i]==s[n-1-i])
            {
                cout<<sz<<endl;
                break;
            }
            else
            {
                sz-=2;
            }
            if(i == n-1-i || i > n-1-i)
            {
                cout<<"0"<<endl;
                break;
            }
        }

    }
    return 0;
}

