#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    long long t;
    cin >> n >> t;

    vector<long long> machines(n);

    for (int i = 0; i < n; i++)
    {
        cin >> machines[i];
    }

    long long left = 1, right = 1e18, result = right;

    while (left <= right)
    {
        long long mid = (left + right) / 2;

        long long totalProducts = 0;

        for (long long time : machines)
        {
            totalProducts += mid / time;
            if (totalProducts >= t)
                break;
        }

        if (totalProducts >= t)
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << result << endl;




    return 0;
}



