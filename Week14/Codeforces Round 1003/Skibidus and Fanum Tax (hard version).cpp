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
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);

        for(int i=0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i=0; i < m; i++)
        {
            cin >> b[i];
        }

        if (n == 1)
        {
            yes
            continue;
        }

        bool valid = true;
        ll lower = LLONG_MIN;
        ll upper = LLONG_MAX;

        for (int i = 0; i < n-1; ++i)
        {
            int A = a[i];
            int B = a[i+1];

            if (B > A)
            {
                valid = false;
                break;
            }

            ll current_lower = 2LL * A;
            ll current_upper = 1LL * A + B;

            lower = max(lower, current_lower);
            upper = min(upper, current_upper);

            if (lower > upper)
            {
                valid = false;
                break;
            }
        }

        if (!valid)
        {
            for (int i = 0; i < m; ++i)
            {
                no
            }
            continue;
        }

        for (int s : b)
        {
            if (lower <= s && s <= upper)
            {
                yes
            }
            else
            {
                no
            }
        }
    }

    return 0;
}
