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
        string a,b;
        cin>>a>>b;

        int duble_one = 0,a_one =0,b_one=0;

        for(int i=0; i< n; i++)
        {
            if(a[i]=='1' && b[i]=='1')
            {
                duble_one++;
            }
            else if(a[i] == '1')
            {
                a_one++;
            }
            else if(b[i] == '1')
            {
                b_one++;
            }
        }

        if(duble_one % 2 != 0)
        {
            cout<<"YES"<<endl;
        }
        else if(a_one+b_one > 0 )
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }


return 0;
}



