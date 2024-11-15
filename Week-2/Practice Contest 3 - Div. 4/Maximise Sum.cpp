#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,neg_count=0,small_neg=999999999;
        cin>>n;
        long long sum=0;
        for(int i=0; i< n; i++)
        {
            int num;
            cin>>num;
            if(num < 0)
            {
                neg_count++;
                small_neg = min(small_neg, (abs(num)));
                sum+= abs(num);
            }
            else
                sum+= abs(num);
        }
        if(neg_count %2==0)
        {
            cout<<sum<<'\n';
        }
        else
        cout<<sum - (2*small_neg)<<'\n';
    }
    return 0;
}

