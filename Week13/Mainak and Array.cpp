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
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int max_diff = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            max_diff = max(max_diff, a[i] - a[i + 1]);
        }

        max_diff = max(max_diff, a[n - 1] - a[0]);

        max_diff = max(max_diff, *max_element(a.begin(), a.end()) - a[0]);
        max_diff = max(max_diff, a[n - 1] - *min_element(a.begin(), a.end()));

        cout << max_diff << endl;
    }



    return 0;
}



