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

        long long  a[n];
        long long  s=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        vector<int>b(33);

        for(int i=0; i<n; i++)
        {
            long long z=a[i];
            int c=0;

            while(z>0)
            {
                z=z/2;
                c++;
            }
            b[c]++;
        }

        for(int i=0; i<=32; i++)
        {
            if(b[i]>=2)
            {
                 s += (1LL * b[i] * (b[i] - 1)) / 2;
            }

        }
        cout<<s<<endl;


    }
    return 0;
}


