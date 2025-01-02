
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Length of array a

        vector<int> a(n); // Input array a
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Output the array b where b_i = a_i
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
