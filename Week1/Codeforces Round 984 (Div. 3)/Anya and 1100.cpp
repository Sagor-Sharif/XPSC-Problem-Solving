#include <bits/stdc++.h>
using namespace std;

bool has1100(const string &s, int pos)
{
    return pos >= 0 && pos + 3 < s.size() && s.substr(pos, 4) == "1100";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int q;
        cin >> q;
        int count1100 = 0;
        for (int i = 0; i < s.size() - 3; ++i)
        {
            if (has1100(s, i))
            {
                count1100++;
            }
        }

        while (q--)
        {
            int i, v;
            cin >> i >> v;
            i--;

            if (s[i] - '0' == v)
            {
                cout << (count1100 > 0 ? "YES" : "NO") << endl;
                continue;
            }

            for (int j = i - 3; j <= i; ++j)
            {
                if (has1100(s, j))
                {
                    count1100--;
                }
            }
            s[i] = v + '0';
            for (int j = i - 3; j <= i; ++j)
            {
                if (has1100(s, j))
                {
                    count1100++;
                }
            }
            cout << (count1100 > 0 ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
