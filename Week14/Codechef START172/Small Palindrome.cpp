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
        int x, y;
        cin >> x >> y;

        string result;

        for (int i = 0; i < x / 2; i++)
        {
            result += '1';
        }

        for (int i = 0; i < y; i++)
        {
            result += '2';
        }

        for (int i = 0; i < x / 2; i++)
        {
            result += '1';
        }
        cout << result << endl;

    }


    return 0;
}



