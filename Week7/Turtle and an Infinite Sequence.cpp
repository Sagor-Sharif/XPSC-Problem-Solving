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

        int n,m;
        cin>>n>>m;

        long long r =n+m;
        long long l = max(n-m,0);

        long long ans =0;
        long long val =0;

        for(int i=0; i< 31; i++)
        {
            if(((1<<i) & l)==0)
            {
                long long check = (l | (1<<i)) - val;

                if(check <= r)
                    ans |= (1<< i);
            }
            else
            {
                ans |= (1<<i);
                val |= (1<<i);
            }

        }
        cout<<ans<<endl;


    }



    return 0;
}



