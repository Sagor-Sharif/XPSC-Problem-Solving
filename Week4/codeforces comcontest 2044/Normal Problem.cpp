#include <bits/stdc++.h>
using namespace std;


char mirror(char c)
{
    if (c == 'p') return 'q';
    if (c == 'q') return 'p';
    return 'w';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;

        reverse(a.begin(), a.end());


        for (char &c : a)
        {
            c = mirror(c);
        }

        cout << a << "\n";
    }

    return 0;
}
