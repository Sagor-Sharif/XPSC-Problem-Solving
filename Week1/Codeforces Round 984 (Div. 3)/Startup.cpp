#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> bottle(k);
        for (int i = 0; i < k; i++) {
            cin >> bottle[i].first >> bottle[i].second;
        }

        sort(bottle.begin(), bottle.end());
        vector<int> money;
        int current_brand = bottle[0].first;
        int current_sum = 0;

        for (int i = 0; i < k; i++) {
            if (bottle[i].first == current_brand) {
                current_sum += bottle[i].second;
            } else {
                money.push_back(current_sum);
                current_brand = bottle[i].first;
                current_sum = bottle[i].second;
            }
        }
        money.push_back(current_sum);
        sort(money.begin(), money.end(), greater<int>());

        int total_money = 0;
        int limit = min(n, (int)money.size());

        for (int i = 0; i < limit; i++) {
            total_money += money[i];
        }
        cout << total_money << endl;
    }

    return 0;
}
