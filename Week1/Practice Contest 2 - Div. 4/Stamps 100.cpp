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
        bool p=false;
        int one=0;
        for(int i=0; i< n; i++)
        {
            if(s[i] == '1')
            {
                one =i;
                break;
            }
        }
        if( n-(one+1) > 1)
        {
            for(int i=0; i< n; i++)
            {
                if(p == false && s[i] == '1')
                {
                    cout<<"1";
                    p=true;
                }
                else
                {
                    cout<<"0";
                }
            }
        }
        else
        {
            cout<<s;
        }
        cout<<endl;
    }
    return 0;
}

