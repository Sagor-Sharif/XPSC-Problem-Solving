#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> marge;
    for(int i=0; i< n; i++)
    {
        int a;
        cin>>a;
        marge.push_back(a);
    }
    for(int i=0; i< m; i++)
    {
        int a;
        cin>>a;
        marge.push_back(a);
    }
    sort(marge.begin(),marge.end());
    for(int i=0; i< n+m; i++)
    {
        cout<<marge[i]<<" ";
    }
    cout<<endl;

    return 0;
}

