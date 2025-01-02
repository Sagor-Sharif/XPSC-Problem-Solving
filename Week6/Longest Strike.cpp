#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>A(n);

        for(int i=0; i< n; i++)
        {
            cin>>A[i];
        }

        sort(A.begin(),A.end());

        map<int,int>occ;

        for(int i=0; i< n; i++)
        {
            occ[A[i]]++;
        }

        int L=-1,R=-1;
        int l=-1,r;
        for(int i=0; i< n; i++)
        {
            if(occ[A[i]] < k)
            {
                continue;
            }
            if(l==-1)
            {
                l=A[i];
            }
            if(i==n-1 || A[i+1] - A[i]>1 || occ[A[i+1]] < k)
            {
                r=A[i];

                if(r-l>=R-L)
                {
                    R=r;
                    L=l;
                }
                l=-1,r=-1;
            }
        }
        if(L==-1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<L<<" "<<R<<endl;
        }
    }



    return 0;
}



