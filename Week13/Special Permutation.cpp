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


        int n;
        cin>>n;
        if(n<4)
        {
            cout<<-1<<endl;
        }
        else
        {
            vector<int> ans = {3,1,4,2};

            for (int i = 5; i <=n; i++)
            {
                if(i%2 == 0)
                {
                    ans.push_back(i);
                }
                else
                {
                    ans.insert(ans.begin(),i);
                }

            }




            for(int i=0; i< n; i++)
            {
                cout<<ans[i]<<" ";
            }
            nl
        }

    }



    return 0;
}



