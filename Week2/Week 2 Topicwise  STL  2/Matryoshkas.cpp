#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t;i++)
    {
        int n;
        cin >> n;
        vector<int> dolls(n);
        map<int,int> doll_count;
        set<int> b;
        for (int i = 0; i < n; ++i)
        {
            cin >> dolls[i];
            doll_count[dolls[i]]++;

            b.insert(dolls[i]);
            b.insert(dolls[i] + 1);
        }
        int l = 0;
        int Min_set = 0;
        for (auto x: b)
        {
            int c = doll_count[x];
            Min_set += max(0, c - l);
            l = c;
        }
        cout << Min_set << '\n';
    }
    return 0;
}
