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

        for (int i = 0; i < n; i++)
        {
            if ((i & 1) != 0)
            {

                for (int j = n; j >= 1; j--)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
            else
            {

                for (int j = 1; j <= n; j++)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
