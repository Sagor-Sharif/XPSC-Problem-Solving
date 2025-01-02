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
        string s;
        cin>>s;
        int l=0,r=k;
        int current_recolor=0;
        for(int i=0; i< k; i++)
        {
            if(s[i]=='W')
            {
                current_recolor++;
            }
        }
        r++;
        int m=current_recolor;
        for(int i=k;i<n;i++)
        {
            if(s[i-k]=='W')
            {
                current_recolor--;
            }
            if(s[i]=='W')
            {
                current_recolor++;
            }
            m = min(m,current_recolor);
        }
        cout<<m<<endl;
    }
    return 0;
}
