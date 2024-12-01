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
        int op_one=0,op_zero=0;
        bool zero=false,one=false;
        for(int i=0; i< n; i++)
        {
            if(s[i]=='0' && zero==false)
            {
                if(one==true)
                {
                    op_one++;
                    one=false;
                }
                zero=true;
            }
            else if(s[i]=='1' && one==false )
            {
                if(zero==true)
                {
                    op_zero++;
                    zero=false;
                }
                one=true;
            }
            if(s[i] == '0' && i==n-1)
            {
                if(zero == true)
                {
                    op_zero++;
                }
                else if(one == true)
                {
                    op_one++;
                    op_zero++;
                }
            }
            else if(s[i] == '1' && i==n-1)
            {
                if(one == true)
                {
                    op_one++;
                }
                else if(zero == true)
                {
                    op_one++;
                    op_zero++;
                }
            }
        }
        //cout<<op_one<<" "<<op_zero<<endl;
        cout<<min(op_one,op_zero)<<endl;
    }
    return 0;
}

