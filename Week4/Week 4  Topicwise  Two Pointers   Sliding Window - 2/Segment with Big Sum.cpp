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
    long long long_segment=n+1;
    long long l=0,r=0;
    long long sum=0;
    while(r<n||l<n)
    {

        if(sum>=k)
        {
            //cout<<"r: "<<r<<" l: "<<l<<endl;
            long_segment = min(long_segment,(r-l));

            sum-= number[l];

            //cout<<"- "<<number[l]<<endl<<long_segment<<endl;
           l++;
        }
        else
        {
            if(r<n)
            {
               sum+=number[r];
               r++;
            }
            else
            {
                l++;
            }

                //cout<<"+ "<<number[r]<<endl;
               //r++;
        }
    }
    if(long_segment<=n)
    {
        cout<<long_segment<<endl;
    }
    else
    cout<<"-1\n";
    return 0;
}
