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

        vector<int> song_1(n);
        string rating(n, ' ');
        set<pair<int, int>,greater<int>> one, zero;

        for (int i = 0; i < n; i++) {
            cin >> song_1[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> rating[i];
            if (rating[i] == '1') {
                one.insert({song_1[i], i});
            } else {
                zero.insert({song_1[i], i});
            }
        }

        // Output the contents of the `one` set
        cout << "One set:" << endl;
        for (auto on : one) {
            cout << on.first << " " << on.second << endl;
        }

        // Output the contents of the `zero` set
        cout << "Zero set:" << endl;
        for (auto z : zero) {
            cout << z.first << " " << z.second << endl;
        }
    }
    return 0;
}
