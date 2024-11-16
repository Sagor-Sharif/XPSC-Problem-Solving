#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cno = 1;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({cno, money});
            ml.insert({money, -cno});
            cno++;
        }
        else if (type == 2)
        {
            if (!s.empty())
            {
                int pos = s.begin()->first, money = s.begin()->second;
                ans.push_back(pos);
                s.erase(s.begin());
                ml.erase({money, -pos});
            }
        }
        else
        {
            if (!ml.empty())
            {
                int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
                ans.push_back(pos);
                ml.erase(--ml.end());
                s.erase({pos, money});
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
