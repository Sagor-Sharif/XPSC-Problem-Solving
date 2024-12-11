#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin>>n>>k;
    long long sum=0;
    vector<long long>number(n);
    vector<long long>sufix;
    vector<long long>prefix(n);
    for(long long i=0; i< n; i++)
    {
        cin>>number[i];
        if(i==0)
        {
            sufix.push_back(number[i]);
        }
        else
        {
            sufix.push_back(sufix[i-1]+number[i]);
        }
    }
    long long j=0;
    for(int i=n-1; i>=0; i--)
    {
        if(i==n-1)
        {
            prefix[i]=(number[i]);
        }
        else
        {
            prefix[i]=(prefix[i+1]+number[i]);
        }
    }
    long long sc=0,pc=0,c1=0,c2=0;
    for(int i=0; i< n; i++)
    {
        cout<<sufix[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i< n; i++)
    {
        cout<<prefix[i]<<" ";
    }
    for(int i=0; i< n; i++)
    {
        if(sufix[i]>=k)
        {
            sc++;
        }
        if(prefix[i]>=k)
        {
            pc++;
        }
        if(sufix[i]-prefix[i]>=k)
        {
            c1++;
        }
        else if(prefix[i]-sufix[i]>=k)
        {
            c2++;
        }

    }
    long long total=sc+pc+c1+c2;
    if(sufix[n-1] >= k)
    {
        total--;
    }


    cout<<total<<endl;
    return 0;
}


