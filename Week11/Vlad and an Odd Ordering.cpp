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
        int n,k;
        cin>>n>>k;

        for(int i=1; i<=(log2(n)+1); i++)
        {
            long long x=pow(2,i);
            long long y=(n+(x/2))/x;
            if(k<=y)
            {
                if(k==1)
                {
                    cout<<(x/2)<<"\n";
                    break;
                }
                else
                {
                    long long ans=(x/2)+((k-1)*x);
                    cout<<ans<<"\n";
                    break;
                }
            }
            else
            {
                k-=y;
            }
        }

    }



    return 0;
}



