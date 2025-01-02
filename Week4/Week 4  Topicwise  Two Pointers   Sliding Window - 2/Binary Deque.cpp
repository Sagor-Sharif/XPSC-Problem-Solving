#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);

        int totalSum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            totalSum += a[i];
        }

        if (totalSum < s)
        {
            cout << -1 << endl;
            continue;
        }
        else if (totalSum == s)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            int maxArray = 0;
            int currentSum = 0;
            int l = 0;

            for (int r = 0; r < n; r++)
            {
                currentSum += a[r];

                while (currentSum > s)
                {
                    currentSum -= a[l];
                    l++;

                }

                if (currentSum == s )
                {
                    maxArray = max(maxArray, r-l+1);
                }
            }
            cout <<n-maxArray << endl;
        }
    }

    return 0;
}
