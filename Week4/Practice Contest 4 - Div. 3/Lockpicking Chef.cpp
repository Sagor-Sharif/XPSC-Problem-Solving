#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;

        string S, K;
        cin >> S >> K;

        int min_moves = INT_MAX;

        for (int i = 0; i <= N - M; i++)
        {
            int current_moves = 0;
            for (int j = 0; j < M; j++)
            {
                char a =S[i + j];
                char b =K[j];
                int x = a - '0';
                int y = b - '0';

                current_moves += min((y - x + 10) % 10, (x - y + 10) % 10);
            }
            min_moves = min(min_moves, current_moves);
        }

        cout << min_moves <<endl;
    }

    return 0;
}
