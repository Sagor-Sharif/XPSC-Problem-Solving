#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int l = 1, r = n;
    while (m--)
    {
        string tmp,s;
        int i;
        cin >>tmp>>tmp>>s>>tmp>>i;
        if (s == "left")
        {
            r = min(r, i-1);
        }
        else
        {
            l = max(l,i+1);
        }
    }
    if (l > r)
    {
        cout <<"-1"<<endl;
    }
    else
    {
        cout <<r - l + 1 << endl;
    }
    return 0;
}
