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

        int a=1;
        int b=0;
        int cnt =0;

        while(a*2<=n)
        {
            a = a*2;
            cnt++;
        }

        int ans =1;
        bool c =false;

        for(int i=cnt-1; i >= 0; i--)
        {
            if(n&1<<i)
            {
                b=b | (a<<i);
                c =true;
            }
            else
            {
                if(c)
                {
                    ans = ans*2;
                }
            }

        }

        cout<<ans<<endl;


    }


    return 0;
}


