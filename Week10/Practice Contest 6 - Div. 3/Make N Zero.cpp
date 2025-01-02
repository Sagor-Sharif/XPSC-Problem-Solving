#include<bits/stdc++.h>
using namespace std;

bool canMakeZero(int n)
{
    if (n == 0)
    {
        return true;
    }

    if (n < 0)
    {
        return false;
    }

    return canMakeZero(n - 3) || canMakeZero(n - 4);
}

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

        if (canMakeZero(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }



    return 0;

}



