#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    multiset<long long> window;
    long long l = 0, good_segments = 0;

    for (long long r = 0; r < n; r++)
    {

        window.insert(a[r]);

        while (*window.rbegin() - *window.begin() > k)
        {
            window.erase(window.find(a[l]));
            l++;
        }

        good_segments += (r - l + 1);
    }

    cout << good_segments << "\n";

    return 0;
}
