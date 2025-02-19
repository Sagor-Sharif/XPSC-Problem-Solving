#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        char s1[n][n];

        for(int i=0; i< n; i++)
        {
            for(int j=0; j< n; j++)
            {
                cin>>s1[i][j];
            }
        }

        vector<string>ans;

        for(int i=0; i< n; i+=k)
        {
            string current;
            if(i%k == 0)
            {
                for(int j=0; j< n; j+=k)
                {
                    current.push_back(s1[i][j]);
                }

            }
            ans.push_back(current);


        }

        for(int i=0; i< ans.size(); i++)
        {
            cout<<ans[i]<<endl;
        }


    }



    return 0;
}



