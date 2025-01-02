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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        set<int> q;
        for(int i=0; i< m; i++)
        {
            int number;
            cin>>number;
            q.insert(number);
        }
        string c;
        cin>>c;
        sort(c.begin(),c.end());
        int i=0;

        for(auto indx:q)
        {
            s[indx-1] = c[i];
            i++;
            //cout<<indx<<"->"<<c[i]<<endl;
        }
        cout<<s<<endl;



    }
    return 0;
}

