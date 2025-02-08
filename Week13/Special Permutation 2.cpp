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

    while(t--)
    {
        int n,a,b;
        cin >>n>>a>>b;
        vector<int> p;

        p.push_back(a);

        for (int j = n; j > 0; j--)
        {
            if (j != a && j != b)
            {
                p.push_back(j);
            }
        }

        p.push_back(b);

        int minelement = *min_element(p.begin(), p.begin() + n / 2);
        int maxelement = *max_element(p.begin() + n / 2, p.end());

        if (p.size() == n &&  minelement == a && maxelement == b)
        {
            for (int num : p)
            {
                cout << num << " ";
            }
            cout << endl;
        }

        else
        {
            cout << -1 << endl;
        }


    }

    return 0;
}



