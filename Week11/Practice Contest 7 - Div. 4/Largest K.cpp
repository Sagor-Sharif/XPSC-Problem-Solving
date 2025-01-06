#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        long long left = 0, right = y, answer = 0;

        while (left <= right)
        {
            long long mid = (left + right) / 2;


            if ((x - 1) * mid <= y)
            {
                answer = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        cout << answer << '\n';

    }


    return 0;
}



