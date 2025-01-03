#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- )
    {
        long double n, k, extra = 0, sum = 0;
        cin >> n >> k;
        for( long double i = 0; i < n; i++ )
        {
            long double value;
            cin >> value;
            sum += floor(value/k);
            if( value/k != ceil(value/k) )
            {
                extra++;
            }
        }
        bool result = false;
        if( sum == 0 )
        {
            result = true;
        }
        else if( sum < 0 )
        {
            if( sum+extra >= 0 )
            {
                result = true;
            }
        }
        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}
