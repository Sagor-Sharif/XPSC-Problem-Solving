#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;

        string S, T;
        cin >> S >> T;

        if (count(S.begin(), S.end(), '0') != count(T.begin(), T.end(), '0'))
        {
            cout << "NO\n";

        }
        else
        {
            int mismatches = 0;
            for (int i = 0; i < N; i++)
            {
                if (S[i] != T[i])
                {
                    mismatches++;
                }
            }

            if ( (count(S.begin(), S.end(), '0') != count(T.begin(), T.end(), '0')) && (mismatches/2) == K)
            {
                cout << "NO\n";
            }
            else if(K<mismatches)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}
