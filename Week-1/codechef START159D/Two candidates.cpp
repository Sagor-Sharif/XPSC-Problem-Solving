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
        int n,x;
        cin>>n>>x;
        int A[n],B[n],a_win=0,b_win=0,d_sum=0;

        for(int i=0; i< n; i++)
        {
            cin>>A[i];
        }
        for(int i=0; i< n; i++)
        {
            cin>>B[i];
        }

        vector<int>d(n,2000);
        for(int i=0; i< n; i++)
        {
            if(A[i] <= B[i])
            {
                d[i]= (B[i]-A[i])+1;
                d_sum+=d[i];
                if(A[i] < B[i])
                {
                    b_win++;
                }
            }
            else if(A[i] > B[i])
            {
                a_win++;
            }
        }

        if(a_win>b_win )
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(x !=0)
        {
            sort(d.begin(),d.end());
            for(int i=0; i< n; i++)
            {
                //cout<<d[i]<<endl;
                if(d[i] <=x && d[i] != 2000)
                {
                    a_win++;
                    x-=d[i];
                    if(d[i] != 1)
                    {
                        b_win--;
                    }
                }
            }
            //cout<<a_win<<" "<<b_win<<endl;
            if(a_win>b_win)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }

        }
        else
        {
           cout<<"NO"<<endl;
        }
    }
    return 0;
}
