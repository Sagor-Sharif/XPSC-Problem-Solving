#include <bits/stdc++.h>
using namespace std;


long long getLeft(long long start,long long sesh,long long mid)
{
    long long total = (sesh * (sesh + 1)) / 2ll;
    long long midSum = (mid * (mid + 1)) / 2ll;
    long long left = midSum - (((start - 1) * (start)) / 2ll);

    return left;
}
long long getRight(long long start,long long sesh,long long mid)
{
    long long total = (sesh * (sesh + 1)) / 2ll;
    long long midSum = (mid * (mid + 1)) / 2ll;
    long long left = midSum - (((start - 1) * (start)) / 2ll);

    long long right = total - midSum;
    return right;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        long long l=k,r =k+n-1;
        long long ans = 1e18;

        while(l<=r)
        {
            long long mid = (l+r)/2;

            long long left = getLeft(k, k+n-1,mid);
            long long right =getRight(k,k+n-1,mid);

            ans =min(ans,abs(left-right));

            if(left < right)
            {
                l = mid +1;
            }
            else
            {
                r = mid-1;
            }


        }
        cout<<ans<<endl;

    }

    return 0;
}
