#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();
    for(int i=0; i< len/2; i++)
    {
        if(s[i]!= s[len-i-1])
        {
            return false;
        }
    }
    return true;
}

vector<int>allPalindrome;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0; i< 32768; i++)
    {
        if(ispalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>cnt(32769);
        for(int i=0; i< n; i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
        }

        long long ans = n;

        for(int i=0; i< n; i++)
        {
            for(int j=0;j< allPalindrome.size();j++)
            {
                int cur = (a[i] ^ allPalindrome[j]);


                    ans+= cnt[cur];

            }
        }

    cout<<ans/2<<endl;

    }

    return 0;
}



