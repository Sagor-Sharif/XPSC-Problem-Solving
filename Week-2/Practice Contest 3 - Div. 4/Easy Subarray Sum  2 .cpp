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

        vector<int> arr(n);
        long long sum = 0;
        int min_abs_val = INT_MAX;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += abs(arr[i]);
            min_abs_val = min(min_abs_val, abs(arr[i]));
        }
        // Count negative numbers
        int negative_count = count_if(arr.begin(), arr.end(), [](int x) { return x < 0; });

        // If the number of negative values is even, we can achieve the max sum directly
        if (negative_count % 2 == 0) {
            cout << sum << '\n';
        } else {
            // If odd, subtract twice the smallest absolute value to make the sum maximum
            cout << sum - 2 * min_abs_val << '\n';
        }
    }

    return 0;
}
