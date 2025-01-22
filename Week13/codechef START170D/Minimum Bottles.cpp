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
        int N, X;
        cin >> N >> X;

        vector<int> A(N);
        int totalWater = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            totalWater += A[i];
        }


        int minBottles = (totalWater + X - 1) / X;
        cout << minBottles << endl;
    }



    return 0;
}
