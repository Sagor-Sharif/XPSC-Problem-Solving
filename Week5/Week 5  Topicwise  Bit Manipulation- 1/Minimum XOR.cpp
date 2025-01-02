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

        vector<int>A(n);
        int XOR = 0;

        for(int i=0; i< n; i++)
        {
            cin>>A[i];
            XOR ^= A[i];
        }
        int ans =XOR;

        for(int i=0; i< n; i++)
        {
            int c = (XOR ^ A[i]);

            ans = min(ans, c);
        }



        cout<<ans<<endl;
    }



    return 0;
}


