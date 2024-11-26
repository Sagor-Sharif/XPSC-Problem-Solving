#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> people(n);
        multiset<pair<long long, long long>> f_p;
        long long total_value = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> people[i - 1];
            if (people[i - 1] == 'R')
            {
                total_value += n - i;
                f_p.insert({i - 1, n - i});
            }
            else
            {
                total_value += i - 1;
                f_p.insert({n - i, i - 1});
            }
        }
        for (auto it= f_p.rbegin(); it!=f_p.rend(); it++)
        {
            auto p = *it;
            long long a = p.first;
            long long b = p.second;
            if (a > b)
            {
                total_value -= b;
                total_value += a;
                cout << total_value << " ";
            }
            else
            {
                cout << total_value << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
