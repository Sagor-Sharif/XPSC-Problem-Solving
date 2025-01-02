#include<bits/stdc++.h>
using namespace std;
int n,m;
char arr[1005][1005];
void go(int i,int j)
{
    if(arr[i])


}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,total_count=0;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;

        for(int i=0; i< n; i++)
        {
            for(int i=0; i< m; i++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0; i< n; i++)
        {
            for(int i=0; i< m; i++)
            {
                if(arr[i][j]=='1')
                {
                    go(i,j);
                }
            }
        }


    }
    return 0;
}
