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
        string s,t;

        cin>>s>>t;

        if(s[0] == '1' || s == t)
        {
            cout<<"YES\n";
            continue;
        }
        int firstOne = -1;

        for(int i=0; i< n; i++)
        {
            if(s[i] == '1')
            {
                firstOne = i+1;
                cout<<"YES\n";
                break;
            }
            else if(s[i] != t[i])
            {
                cout<<"NO\n";
                break;
            }
        }


    }



    return 0;
}



