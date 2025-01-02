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

    map<long long, long long> freq;

    long long l = 0, good_segments = 0;

    for (long long r = 0; r < n; r++)
    {
        freq[a[r]]++;


        while (freq.size() > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
            {
                freq.erase(a[l]);
            }
            l++;
        }
        //cout<<good_segments<<endl;
        good_segments += (r - l + 1);
       // cout<<good_segments<<" "<<r-l+1<<endl;

    }

    cout << good_segments << "\n";
    return 0;
}
