#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin>>n>>k;
    vector<long long>number(n);
    for(long long i=0; i< n; i++)
    {
        cin>>number[i];
    }
    long long long_segment=0;
    long long l=0,r=0;
    long long sum=0;
    while(r<n)
    {
        sum+=number[r];
        if(sum<=k)
        {
            long_segment = max(long_segment,(r-l+1));
            r++;
        }
        else
        {
            sum-= number[l];
            l++;
            r++;
        }
    }
    if(long_segment!=0)
    {
        cout<<long_segment<<endl;
    }
    else
    cout<<"0\n";
    return 0;
}


