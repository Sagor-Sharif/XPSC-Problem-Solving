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
        int n,x,ways=0;
        cin>>n>>x;
        for(int i=1; i<=n; i++)
        {
            if(i != x && (i+x)%2 ==0)
            {
                ways++;
            }
        }
        cout<<ways<<endl;
    }



    return 0;
}

