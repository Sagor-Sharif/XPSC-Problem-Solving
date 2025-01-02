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
    for(int i=0; i< m; i++)
    {
        cin>>b[i];
    }
    int last_j=0;
    int last_c=0;
    for(int i=0; i< m; i++)
    {
        int c=0;
        for(int j=last_j; j< n; j++)
        {
            if(b[i] > a[j])
            {
                c++;
                last_j =j+1;
            }
            else
            {
                last_j =j;
                break;
            }
        }
        cout<<c+last_c<<" ";
        last_c+=c;
    }
    return 0;
}

