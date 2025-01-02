#include <bits/stdc++.h>
using namespace std;

int calculate_gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int overall_gcd = 0;

        for (int i = 0; i < n; i++)
        {
            int diff = abs(i + 1 - A[i]);

            overall_gcd = calculate_gcd(overall_gcd, diff);
        }

        cout << overall_gcd << endl;
    }

    return 0;
}
