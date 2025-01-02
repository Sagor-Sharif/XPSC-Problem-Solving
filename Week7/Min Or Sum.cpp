#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int result = arr[0];

        for (int i = 1; i <  arr.size(); ++i)
        {
            result |= arr[i];
        }

        cout << result << endl;
    }
    return 0;
}
