#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,l;
    cin>>n>>l;
    vector<int>a(n);
    vector<int>distinct(n);
    set <int> tmp;
    for(int i=0; i< n; i++)
    {
        cin>>a[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        tmp.insert(a[i]);
        distinct[i] = tmp.size();
    }

    while(l--)
    {
        int L;
        cin>>L;
        cout<<distinct[L-1]<<endl;

    }

    return 0;
}

