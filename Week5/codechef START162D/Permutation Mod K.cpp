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
        int n,k;
        cin>>n,k;
        vector<int> per(n);
        for(int i=1; i<= n; i++)
        {
            per[i-1] =1;
        }
        if(n==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int j=0;
            for(int i=0; i< n; i++)
            {
                if(per[i]%k == i+1)
                {


                }
            }
        }
    }
    return 0;
}

