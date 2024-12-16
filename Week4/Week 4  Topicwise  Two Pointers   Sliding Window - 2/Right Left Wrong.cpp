#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<long long> pref(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    pref[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + arr[i];
    }
    int r = n - 1;
    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'L')
        {
            while(r > i && s[r] != 'R')
            {
                r--;
            }
            if(r > i)
            {
                if(i>0)
                {
                    ans+=pref[r]-pref[i-1];
                }
                else
                {
                    ans+=pref[r];
                }
                //cout<<ans<<endl;
                r--;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

