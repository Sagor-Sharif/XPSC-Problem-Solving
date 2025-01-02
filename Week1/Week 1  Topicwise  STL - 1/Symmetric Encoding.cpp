#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;

        string r = b;
        sort(r.begin(), r.end());
        r.erase(unique(r.begin(), r.end()), r.end());

        unordered_map<char, char> decode_map;
        int m = r.size();
        for (int i = 0; i < m; ++i)
        {
            decode_map[r[i]] = r[m - i - 1];
        }

        string s;
        for (char ch : b)
        {
            s += decode_map[ch];
        }
        cout << s << endl;
    }

    return 0;
}
