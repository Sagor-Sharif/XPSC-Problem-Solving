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
    long long total=0;
    long long l=0,r=0;
    long long sum=0;
    while(r<n)
    {
        sum+=number[r];
        if(sum<=k)
        {
            total+= r-l+1;
        }
        else
        {
            while(sum>k)
            {
                sum-= number[l];
                l++;
            }
            if(sum<=k)
            {
                total+= r-l+1;
            }
        }
        r++;
    }
    cout<<total<<endl;
    return 0;
}


