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
        int n,k;
        vector<int> chr(123,0);
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0; i< n; i++)
        {
            chr[s[i]]++;
        }
        int odd =0,even=0;
        for(int i=97; i<=122 ; i++)
        {
            if(chr[i]%2 != 0)
            {
                odd++;
            }
            else if(chr[i] != 0)
            {
                even++;
            }
        }
        if(n%2 == 0)
        {
            if(odd == k)
            {
                cout<<"YES"<<endl;
            }
            else if(odd<k && ((odd-k)%2 == 0) && (odd-k) <= even)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
        {
            //odd--;
            if(odd == k)
            {
                cout<<"YES"<<endl;
            }
            else if(odd<k && ((odd-k)%2 == 0) && (odd-k) <= even)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }

    }
    return 0;
}
