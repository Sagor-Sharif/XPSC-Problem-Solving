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
        vector<int> a(n);
        vector<int> b(m);

        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i< m; i++)
        {
            cin>>b[i];
        }

        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }

        int b_val = b[0];

        int prev_min = min(a[0], b_val - a[0]);
        int prev_max = max(a[0], b_val - a[0]);

        bool possible = true;

        for (int i = 1; i < n; i++)
        {
            int current_x = a[i];
            int current_y = b_val - a[i];

            bool allowed_x = current_x >= prev_min;
            bool allowed_y = current_y >= prev_min;

            vector<int> current_options;
            if (allowed_x)
            {
                current_options.push_back(current_x);
            }

            if (allowed_y)
            {
                current_options.push_back(current_y);
            }

            if (current_options.empty())
            {
                possible = false;
                break;
            }

            prev_min = *min_element(current_options.begin(), current_options.end());
            prev_max = *max_element(current_options.begin(), current_options.end());
        }

        if(possible == true)
        {
            yes
        }
        else
            no
    }


    return 0;
}
