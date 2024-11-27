#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i< n; i++)
    {
        cin>>a[i];
    }
    map<int,int> B;
    for(int i=0; i< m; i++)
    {
        cin>>b[i];
        B[b[i]]++;
    }
    int last_j=0,total_c=0;
    int last_c=0;
    for(int i=0; i< m; i++)
    {
        int c=0;
        for(int j=last_j ; j<n; j++)
        {
            if(b[i]==a[j])
            {
                c++;
            }
            else
            {
                last_j=j;
            }
        }
        total_c+=(B[b[i]]*c);
    }
    cout<<total_c<<endl;
return 0;
}

