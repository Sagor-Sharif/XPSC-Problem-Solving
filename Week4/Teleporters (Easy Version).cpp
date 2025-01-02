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
        int n,c;
        cin>>n>>c;
        vector<int> teleport(n);
        for(int i=0; i< n; i++)
        {
            int cost;
            cin>>cost;
            teleport[i]=cost+i+1;
        }
        sort(teleport.begin(),teleport.end());
        int total=0;
        for(int i=0; i< n; i++)
        {
            if(c>=teleport[i])
            {
                c-=teleport[i];
                total++;
            }
            else
            {
                break;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}


