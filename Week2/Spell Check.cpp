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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 5)
        {
            sort(s.begin(),s.end());
            //cout<<s<<endl;
            if (s == "Timru")
            {
                cout << "YES"<<'\n';
            }
            else
            {
                cout << "NO"<<'\n';
            }
        }
        else
        {
            cout << "NO"<<'\n';
        }
    }

    return 0;
}
