#include <bits/stdc++.h>
using namespace std;

void solve(int N, int K) {
    if (K == 1) {
        cout << -1 << endl;
        return;
    }
    vector<vector<int>> P(K);
     for( int i = 1; i <= N; i++ )
        {
            P[i%K].push_back(i);
        }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int N, K;
        cin >> N >> K;
        solve(N, K);
    }
    return 0;
}
