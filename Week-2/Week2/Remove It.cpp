#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,n;
    cin>>n>>x;
    vector<int> number;
    for(int i=0; i< n; i++)
    {
        int a;
        cin>>a;
        if(a != x)
            number.push_back(a);
    }
    for(int i=0; i< number.size(); i++)
    {
        cout<<number[i]<<" ";
    }
    cout<<'\n';
    return 0;
}

