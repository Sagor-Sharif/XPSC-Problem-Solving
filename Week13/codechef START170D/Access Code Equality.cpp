#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    string code = "WECNITK";
    if(s==code)
    {
        cout<<"Welcome to Web Club!"<<endl;
    }
    else
        cout<<"Access denied"<<endl;



    return 0;
}



