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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>lst(m);
        vector<int>ans(k);
        vector<int>miss;
        for(int i=0; i< m; i++)
        {
            cin>>lst[i];
        }

        int reminder =1;
        for(int i=0; i< k; i++)
        {
            cin>>ans[i];
            if(ans[i] != reminder)
            {
                miss.push_back(reminder);
                reminder+=2;
            }
            else
            {
                reminder++;
            }
        }
        if(reminder <= n)
        {
            miss.push_back(reminder);
        }

        if(miss.size() > 1 || k < n-1)
        {
            for(int i=0; i< m; i++)
            {
                cout<<"0";
            }
            cout<<endl;
        }
        else if(miss.size() ==0)
        {
            //cout<<"sixe = 0"<<endl;
            for(int i=0; i< m; i++)
            {
                cout<<"1";
            }
            cout<<endl;
        }
        else
        {
            int x= miss[0];

            for(int i=0; i< m; i++)
            {
                if(lst[i] == x)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}


