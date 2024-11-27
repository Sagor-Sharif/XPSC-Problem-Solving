#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    map<long long,long long> A;
    for(int i=0; i< n; i++)
    {
        int a;
        cin>>a;
        A[a]++;
    }
    map<long long,long long> B;
    for(int i=0; i< m; i++)
    {
        int b;
        cin>>b;
        B[b]++;
    }
    long long last_j=0,total_c=0;

    for(auto[x,y]:B)
    {
        long long c = A[x];
        total_c+=(y*c);
    }
    cout<<total_c<<endl;
    return 0;
}

