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
        int n,m,k;
        cin>>n>>m>>k;

        vector<int>left(n),right(m);

        for(int i=0; i< n; i++)
        {
            cin>>left[i];

        }
        for(int i=0; i< m; i++)
        {
            cin>>right[i];

        }

        int cnt=0;
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());

        for(int i=0; i< n; i++)
        {
            for(int j=0; j< m; j++)
            {
                if(left[i]+right[j] <= k)
                {
                    //cout<<left[i]<<" "<<right[j]<<endl;
                    cnt++;

                }
                else
                    break;
            }
        }


        cout<<cnt<<endl;


    }



    return 0;
}



