#include<bits/stdc++.h>
using namespace std;

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
        vector<int> a(n);
        vector<int>ans;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }


        ans.push_back(a[n-1]);

        for (int i = n-2; i >=0; i--)
        {
            int x = a[i];


            if(x>ans.back())
            {

                ans.push_back(x%10);

                ans.push_back(x/10);

            }
            else
            {
                ans.push_back(x);
            }


        }



        if(is_sorted(ans.rbegin(),ans.rend()))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }



    return 0;
}
