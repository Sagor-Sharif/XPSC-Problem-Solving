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
        vector<int> a(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int max_freq = 0;
        for (auto &p : freq) {
            max_freq = max(max_freq, p.second);
        }

        int re_elements = n - max_freq;
        if (max_freq > re_elements) {
            cout << max_freq - re_elements << endl;
        } else {
            cout << n % 2 << endl;
        }
    }

    return 0;
}
