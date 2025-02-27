#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = 0;
        for (int r = 0; r < 3; r++)
        {
            if (r > n)
                continue;
            ans += (n - r) / 15 + 1;
        }
        cout << ans << endl;
    }
    return 0;
}

