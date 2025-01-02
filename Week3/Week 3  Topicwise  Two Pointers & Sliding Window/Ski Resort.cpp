
#include <iostream>
#include <vector>
using namespace std;

long long countVacationWays(int n, int k, int q, vector<int>& a) {
    long long totalWays = 0;
    int consecutiveDays = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] <= q) {
            consecutiveDays++;
        } else {
            if (consecutiveDays >= k) {
                totalWays += (long long)(consecutiveDays - k + 1);
            }
            consecutiveDays = 0;
        }
    }

    // Handle the last segment
    if (consecutiveDays >= k) {
        totalWays += (long long)(consecutiveDays - k + 1);
    }

    return totalWays;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << countVacationWays(n, k, q, a) << endl;
    }

    return 0;
}
