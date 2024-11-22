#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    set<pair<string, string>> unique_leaves;
    for (int i = 0; i < n; ++i) {
        string species, color;
        cin >> species >> color;
        unique_leaves.insert({species, color});
    }
    cout << unique_leaves.size() << endl;
    return 0;
}
