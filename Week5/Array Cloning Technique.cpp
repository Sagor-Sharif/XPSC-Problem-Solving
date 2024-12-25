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

        vector<int>A(n);
        map<int,int>mp;

        int max_fre=0;

        for(int i=0; i< n; i++)
        {
            cin>>A[i];
            mp[A[i]]++;

            max_fre = max(max_fre , mp[A[i]]);
        }

        if(max_fre == n)
        {
            cout<<"0\n";
            continue;
        }

        int match_left = n - max_fre;

        int opt = 0;

        while(match_left)
        {
            if(match_left >= max_fre)
            {
                opt++;
                match_left -= max_fre;
                opt+= max_fre;
                max_fre+= max_fre;
            }
            else
            {
                opt++;
                opt+= match_left;
                match_left = 0;
            }
        }

    cout<<opt<<endl;
    }



    return 0;
}


