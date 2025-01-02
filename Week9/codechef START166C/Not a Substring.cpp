#include<bits/stdc++.h>
using namespace std;



bool isSubstring(const string& s, const string& t)
{
    return t.find(s) != string::npos;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        string t1;

        for (int i = 0; i < n; i++)
        {
            t1 += '(';
        }
        for (int i = 0; i < n; i++)
        {
            t1 += ')';
        }

        string t2;

        for (int i = 0; i < n; i++)
        {
            t2 += "()";
        }

        if (!isSubstring(s, t1))
        {
            cout << "YES" << endl;
            cout << t1 << endl;
        }
        else if (!isSubstring(s, t2))
        {
            cout << "YES" << endl;
            cout << t2 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

