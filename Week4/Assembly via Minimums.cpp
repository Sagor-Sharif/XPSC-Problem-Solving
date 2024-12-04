#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int sz = (n * (n - 1)) / 2;
        vector<int> b(sz);
        for (int i = 0; i < sz; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        vector<int> a;
        int index = 0;
        for (int i = 1; i < n; i++) {
            a.push_back(b[index]);
            index += n - i;
        }

        for (int x : a) {
            cout << x << " ";
        }
        cout << "1000000000\n";
    }

    return 0;
}
