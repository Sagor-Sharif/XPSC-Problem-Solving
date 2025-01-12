#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<long long > a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long l = 0;
        long long r = 2e9;
        long long ans = 0;
    int i=0;
        while (l <= r)
        {
            long long mid = (l + r) / 2LL;
            long long tmp = 0;

            for (int i = 0; i < n; i++)
            {
                if(a[i] < mid)
                    tmp += mid - a[i];

                if(tmp>x)
                    break;
            }

            if (x >= tmp)
            {
                l = mid+1;
                ans = mid;
            }
            else
            {
                r = mid-1;
            }

            //cout<<l<<" "<<r<<" "<<ans<<endl;

        }


        cout << ans << endl;
    }



    return 0;
}
