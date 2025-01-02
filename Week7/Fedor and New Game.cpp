#include<bits/stdc++.h>
using namespace std;

int countOne(int n)
{
    int c = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        c++;
    }
    return c;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> soldiers(m + 1);

    for (int i = 0; i <= m; i++)
    {
        cin >> soldiers[i];
    }

    int count = 0;

    for (int i = 0; i < m; i++)
    {
        int res = soldiers[i] ^ soldiers[m];

        if (countOne(res) <= k)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
