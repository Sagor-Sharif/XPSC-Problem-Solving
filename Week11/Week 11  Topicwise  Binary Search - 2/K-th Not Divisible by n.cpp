#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;


    while(t--)
    {
        int n, k;
        cin >> n >> k;

        int x = k / (n - 1);

        int rem_valu = k - x * (n - 1);

        if (!rem_valu)

            cout << n*x - 1 << '\n';
        else
            cout << n*x + rem_valu << '\n';

    }



    return 0;
}



