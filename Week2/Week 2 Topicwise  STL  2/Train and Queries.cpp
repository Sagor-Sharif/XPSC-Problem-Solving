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
        cin>>n>>k;
        map<int,vector<int>> mp;
        for(int i=0; i< n; i++)
        {
            int num;
            cin>>num;
            mp[num].push_back(i);
        }
        while(k--)
        {
            int first,last;
            cin>>first>>last;
            if(mp.find(first) != mp.end()&& mp.find(last)!= mp.end())
            {
                int first_index,last_index;
                first_index = mp[first][0];
                int sz = mp[last].size()-1;
                last_index = mp[last][sz];
                cout<<first_index<<" "<<last_index<<endl;
                if(first_index<last_index)
                {
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

