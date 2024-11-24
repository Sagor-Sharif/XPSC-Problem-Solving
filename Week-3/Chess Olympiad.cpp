#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    int total_game = x+y+z;
    float team_a=x+(y*0.5);
    float team_b=z+(y*0.5);

    if(team_a+(4-total_game) > team_b)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;




    return 0;
}

