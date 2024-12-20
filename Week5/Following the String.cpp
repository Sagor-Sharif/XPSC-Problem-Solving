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
        int n;
        cin>>n;

        vector<int>trace(n);

        for(int i=0; i< n; i++)
        {
            cin>>trace[i];
        }
        map<char,int>mp;
        for(int i=0; i< 26; i++)
        {
            char c = 'a'+i;
            mp.insert({c,0});

        }

        for(int i=0; i< n; i++)
        {
            int value = trace[i];

            for(int j=0;j<26;j++)
            {
               char c= 'a'+j;
                if(mp[c] == value)
                {
                    cout<<c;
                    mp[c]++;
                    break;
                }
            }

        }
        cout<<endl;



    }



    return 0;
}


