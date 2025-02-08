#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >>n>> m;
        string a,b;

        cin >> a >> b;

        int k = 0, j = 0;
        while (k < n && j < m)
        {
            if (a[k] == b[j])
            {
                k++;
            }
            j++;
        }

        cout << k <<endl;
    }


    return 0;
}
