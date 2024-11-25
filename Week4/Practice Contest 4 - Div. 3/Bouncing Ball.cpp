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
        int  n;
        cin>>n;
        vector<int> wall(n);
        vector<long long> fTos(n);
        vector<long long> lTos(n);
        for(int i=0; i< n; i++)
        {
            cin>>wall[i];
            if(i==0)
            {
                fTos[i]=wall[i];
            }
            else
            {
                fTos[i]+=fTos[i-1]+wall[i];
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(i==n-1)
            {
                lTos[i] = wall[i];
            }
            else
            {
                lTos[i]+=lTos[i+1]+wall[i];
            }
        }
        int way=0;
        for(int i=0; i< n; i++)
        {
            if(wall[i] == 0)
            {
                if(i-1 >=0 && i+1<n && fTos[i-1]==lTos[i+1])
                {
                    way++;
                }
                else if(i-1 >=0 && i+1<n && fTos[i-1]>lTos[i+1])
                {
                    way++;
                }
                else if(i-1 >=0 && i+1<n && fTos[i-1]<lTos[i+1])
                {
                    way++;
                }
            }
        }
    cout<<way<<endl;

    }
    return 0;
}

