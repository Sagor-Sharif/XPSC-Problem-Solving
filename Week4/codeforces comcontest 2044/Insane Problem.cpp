#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        long long count = 0;

        for (long long x = l1; x <= r1; x++)
        {
            long long y = x;

            while (y <= r2)
            {
                if (y >= l2)
                {
                    count++;
                }
                if (y > r2 / k) break;
                y *= k;
            }
        }
        cout << count << "\n";
    }

    return 0;
}

