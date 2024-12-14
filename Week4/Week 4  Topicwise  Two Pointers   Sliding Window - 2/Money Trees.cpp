#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> fruits(n), heights(n);
        for (int i = 0; i < n; i++)
        {
            cin >> fruits[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];
        }

        long long total_fruit = 0;
        int max_length = 0, l = 0;

        for (int r = 0; r < n; r++)
        {

            total_fruit += fruits[r];


            if (r > l && heights[r - 1] % heights[r] != 0)
            {

                l = r;

                total_fruit = fruits[r];
            }


            while (total_fruit > k)
            {
                total_fruit -= fruits[l];
                l++;
            }


            max_length = max(max_length, r - l + 1);
        }

        cout << max_length << "\n";
    }

    return 0;
}
