#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    map<string,string> server;
    map<string,string> tmp;
    for(int i=1; i<= n; i++)
    {
        string name,ip;
        cin>>name>>ip;
        tmp[ip] = name;
    }
    for(int i=0; i< m; i++)
    {
        string name,ip;
        cin>>name>>ip;
        ip.pop_back();
        //cout<<ip<<endl;

        cout<<name<<" "<<ip<<"; #"<<tmp[ip]<<endl;
    }

    return 0;
}

