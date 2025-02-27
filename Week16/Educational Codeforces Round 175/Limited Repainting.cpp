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

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }


        if (k == 0)
        {
            int max_penalty = 0;
            for (int i = 0; i < n; ++i)
            {
                if (s[i] == 'B')
                {
                    max_penalty = max(max_penalty, a[i]);
                }
            }
            cout << max_penalty << '\n';
            continue;
        }

        int max_a = *max_element(a.begin(), a.end());
        int low = 0, high = max_a;
        int ans = max_a;

        auto is_feasible = [&](int P)
        {
            int count = 0;
            bool in_interval = false;
            for (int i = 0; i < n; ++i)
            {
                if (s[i] == 'B' && a[i] > P)
                {
                    if (!in_interval)
                    {
                        count++;
                        in_interval = true;
                    }
                }
                else if (s[i] == 'R' && a[i] > P)
                {
                    in_interval = false;
                }
                else
                {

                }
            }
            return count <= k;
        };

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (is_feasible(mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }


    return 0;
}


