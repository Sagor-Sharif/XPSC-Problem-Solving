#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<string> app(t);
    map<string,int> finl;
    for(int i=0; i< t; i++)
    {
        cin>>app[i];
        finl[app[i]] = 0;
    }
    for(int i=t-1; i>=0 ; i--)
    {
        if( finl[app[i]] == 0)
        {
            int sz = app[i].size();
            cout<<app[i][sz-2]<<app[i][sz-1];
            finl[app[i]] = 1;
        }
    }
    cout<<endl;

    return 0;
}

