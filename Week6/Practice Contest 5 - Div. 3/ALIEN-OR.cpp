#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int binaryToDecimal(const string &s)
{
    int decimal = 0;
    int length = s.size();
    for (int i = 0; i < length; i++)
    {
        if (s[length - i - 1] == '1')
        {
            decimal += (1 << i);
        }
    }
    return decimal;
}

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

        vector<int> decimal(n);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            decimal[i] = binaryToDecimal(s);
        }

        bool isValid = true;

        for (int j = 1; j < (1 << k); j++)
        {
            bool canForm = false;
            for (int mask = 1; mask < (1 << n); mask++)
            {
                int orResult = 0;
                for (int i = 0; i < n; i++)
                {
                    if (mask & (1 << i))
                    {
                        orResult |= decimal[i];
                    }
                }
                if (orResult == j)
                {
                    canForm = true;
                    break;
                }
            }
            if (!canForm)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
