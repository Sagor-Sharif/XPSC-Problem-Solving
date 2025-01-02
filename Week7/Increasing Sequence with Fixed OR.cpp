#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        vector<long long>ans;

        long long maxBit = __lg(n);

        ans.push_back(n);

        for(long long k= 0; k <= maxBit; k++)
        {
            if((n>>k) & 1)
            {
                long long valu = (n -(1LL << k));
                if(valu>0)
                    ans.push_back(valu);
            }

        }

        cout<<ans.size()<<endl;
        for(long long i = ans.size()-1; i>=0; i--)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
