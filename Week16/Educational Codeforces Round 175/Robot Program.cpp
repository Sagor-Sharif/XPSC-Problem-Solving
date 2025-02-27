#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        string s;
        cin >> n >> x >> k >> s;

        ll ans = 0;
        bool found = false;
        ll steps_used = 0;


        for (ll i = 0; i < n && steps_used < k; i++)
        {
            if (s[i] == 'L')
                x--;
            else
                x++;

            steps_used++;
            if (x == 0)
            {
                ans++;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << 0 << endl;
            continue;
        }

        k -= steps_used;

        if (k <= 0)
        {
            cout << ans << endl;
            continue;
        }


        ll cycle_steps = 0;
        ll pos = 0;

        bool cycle_found = false;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                pos--;
            else
                pos++;

            cycle_steps++;

            if (pos == 0)
            {
                cycle_found = true;
                break;
            }
        }

        if (!cycle_found)
        {
            cout << ans << endl;
            continue;
        }

        ans += k / cycle_steps;
        k %= cycle_steps;


        pos = 0;

        for (ll i = 0; i < k; i++)
        {
            if (s[i] == 'L')
                pos--;
            else
                pos++;

            if (pos == 0)
            {
                ans++;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
