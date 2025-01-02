#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,bool> name;
    while(n--)
    {
        string s;
        cin>>s;
        if(name[s] == false)
        {
            name[s] = true;
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


    }
    return 0;
}
