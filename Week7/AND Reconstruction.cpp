#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {


        int n;
        cin>>n;
        vector<long long>b(n-1);
        for(auto &it:b)cin>>it;
        vector<vector<int>>v(n,vector<int>(30,0));
        for(int i=29; i>=0; i--)
        {
            if(b[0] & (1<<i))
            {
                v[0][i]=1;
                v[1][i]=1;
            }
        }
        bool good =true;
        for(int j=1; j<n-1; j++)
        {
            for(int i=29; i>=0; i--)
            {
                if(b[j] & (1<<i))
                {
                    if(v[j][i]==-1)
                    {
                        cout<<-1<<endl;
                        good =false;
                        break;
                    }
                    v[j][i]=1;
                    v[j+1][i]=1;
                }
            }
            if(good==false)
            {
                break;
            }
            for(int i=29; i>=0; i--)
            {
                if(v[j][i]==1 && v[j+1][i]!=1)
                {
                    v[j+1][i]=-1;
                }
            }

        }
        if(good == false)
        {
            continue;
        }
        for(int i=0; i<n; i++)
        {
            int ans=0;
            for(int j=29; j>=0; j--)
            {
                if(v[i][j]==1)
                {
                    ans|=(1<<j);
                }
            }
            cout<<ans<<" ";
        }
        cout<<endl;


    }

    return 0;
}
