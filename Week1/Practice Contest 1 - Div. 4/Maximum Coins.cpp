#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        long long gainedSum = 0, lostSum = 0;

        for (int i = 0; i < x; i++) {
            gainedSum += pow(2,n);
            n--;
        }
        //cout<<gainedSum<<endl;
        while (n > 0) {
            lostSum += pow(2,n);
            n--;
        }
        cout << gainedSum - lostSum << endl;
    }
    return 0;
}
