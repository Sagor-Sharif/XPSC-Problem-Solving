#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, Y;
        cin >> X >> Y;

        int remainingA= X%3;
        int remainingB = Y%3;

        int draws = max(remainingA, remainingB);

        cout << draws << endl;
    }

    return 0;
}
