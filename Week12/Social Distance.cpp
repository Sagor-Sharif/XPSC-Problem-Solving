#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<int> chair(n);

        for(int i=0; i< n; i++)
        {
            cin>>chair[i];
        }

        sort(chair.rbegin(),chair.rend());
        ll chair_need = chair[0];
        ll first_position = m-chair[0];
        ll current_position = 0;
        bool possible = true;
        for(int i=0; i< n-1; i++)
        {
            current_position+=  chair[i]+1;
            if(current_position>=first_position)
            {
                no
                possible = false;
                break;
            }
            if(i==n-1 && current_position+chair[i]>=m)
            {
                no
                possible = false;
                break;
            }

        }
        if(possible == true)
            yes

        }

    return 0;
}



