#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>=127)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }


    return 0;
}



