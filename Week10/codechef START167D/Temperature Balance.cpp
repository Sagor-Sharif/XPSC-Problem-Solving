#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long prefix_sum=0;
        long long  ans =0;

        for (int i = 0; i < n; i++)
        {
            prefix_sum +=a[i];
            ans += abs(prefix_sum);

        }



        cout << ans << endl;
    }

    return 0;
}
