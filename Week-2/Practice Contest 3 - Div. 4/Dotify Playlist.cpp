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
        int n,k,l;
        cin>>n>>k>>l;
        vector<int> song;
        for(int i=0; i< n; i++)
        {
            int nt,lt;
            cin>>nt>>lt;
            if(lt==l)
            {
                song.push_back(nt);
            }
        }
        if(song.size() < k)
        {
            cout<<"-1"<<'\n';
        }
        else
        {
            sort(song.begin(),song.end(),greater<int>());
            int hour=0;
            for(int i=0; i< k; i++)
            {
                hour+=song[i];
            }
            cout<<hour<<'\n';
        }

    }
    return 0;
}

