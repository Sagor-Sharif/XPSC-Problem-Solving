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

        for(int i=0; i< n; i++)
        {
            cin>>A[i];
        }

        long long  total_opt =0;
        int i;
        for(i=0; i< n; i++)
        {
            if(A[i] != 0)
            {
                break;
            }
        }

        for( ; i< n-1; i++)
        {
            if(A[i] != 0)
            {
                total_opt+= A[i];
            }
            else
            {
                total_opt++;
            }
        }

        cout<<total_opt<<endl;

    }
    return 0;
}


