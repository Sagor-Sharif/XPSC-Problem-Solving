#include <bits/stdc++.h>


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long t;
    cin >> t;
    while (t--)
    {
        long long n, secLast, sum = 0, last;
        cin >> n;
        vector < long long > v(n);
        for (long long i = 0 ; i < n - 2; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        cin >> secLast;
        secLast -= sum;
        cin >> last;
        last -= secLast;
        cout << last << endl;


    }




    return 0;
}
