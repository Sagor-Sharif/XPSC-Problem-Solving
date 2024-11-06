#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    map<string,int> mp;
    while(t--)
    {
        string name;
        cin>>name;
        if(mp.find(name) == mp.end())
        {
            mp[name] = 1;
            cout<<"OK"<<'\n';
        }
        else
        {

            int n = mp[name];
            cout<<name<<n<<'\n';
            mp[name]++;
        }



    }
    return 0;
}

