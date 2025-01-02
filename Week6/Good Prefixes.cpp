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
        vector<int>A(n);

        for(int i=0; i< n; i++)
        {
            cin>>A[i];
        }

        int total =0;

        int mx = A[0];

        long long sum =0;
        if(A[0] == 0)
        {
            total++;
        }
        for(int i=1; i< n; i++)
        {
            sum+=A[i];
            if(mx < A[i])
            {
                sum+=mx-A[i];
                mx = A[i];
            }

            if(mx == sum)
            {
                total++;
            }


        }

        cout<<total<<endl;
    }



    return 0;
}


