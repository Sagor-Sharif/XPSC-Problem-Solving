#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    vector<int>A(n);

    for(int i=0; i< n; i++)
    {
        cin>>A[i];
    }int maxBit = 4;

    for(int i=0; i< (1<<n) ; i++)
    {
        int sum =0;
        for(int j =0;j<n;j++)
        {
            if((i>>j) & 1)
            {
                sum+=A[j];
            }
            else
                sum-= A[j];
        }
        if(sum==0)
        {
            cout<<"YES\n";
            return 0;
        }
        else if(sum % 360 == 0)
        {
            cout<<"YES\n";
            return 0;
        }

    }


    cout<<"NO\n";

    return 0;
}



