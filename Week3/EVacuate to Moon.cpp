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
        long long n,m,h;
        cin>>n>>m>>h;
        vector<long long> cars_power(n),outlets(m);
        for(long long i=0; i< n; i++)
        {
            cin>>cars_power[i];
        }
        for(long long i=0; i< m; i++)
        {
            cin>>outlets[i];
        }
        long long total_power1 =0,total_power2 =0;
        sort(cars_power.rbegin(),cars_power.rend());
        sort(outlets.rbegin(),outlets.rend());
        long long  limit = min(n,m);

        for(long long i=0; i< limit; i++)
        {
            total_power1+= min(cars_power[i],outlets[i]*h);
        }
        for(long long i=limit-1; i >=0; i--)
        {
            total_power2+= min(cars_power[i],outlets[i]*h);
        }
        cout<<max(total_power1,total_power2)<<endl;
    }
    return 0;
}
