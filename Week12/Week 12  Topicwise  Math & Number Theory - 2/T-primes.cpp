#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

const ll LIMIT = 1000000;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<bool> isPrime(LIMIT + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= LIMIT; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= LIMIT; j += i)
            {
                isPrime[j] = false;
            }
        }
    }


    unordered_set<ll> tPrimes;

    for (ll i = 2; i <= LIMIT; i++)
    {
        if (isPrime[i])
        {
            tPrimes.insert(1LL * i * i);
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (tPrimes.count(a[i]))
        {
            yes
        }
        else
        {
            no
        }
    }



    return 0;
}
