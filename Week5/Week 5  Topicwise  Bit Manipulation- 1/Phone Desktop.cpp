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
        int x,y;
        cin>>x>>y;

        int screen =0;
        int cell_left =0;

        if(y % 2 == 0)
        {
            screen = y/2;
        }
        else
        {
            screen = y/2 + 1;
        }

        cell_left = (screen * 15) - (y*4);

        if(cell_left < x)
        {
            x-= cell_left;

            if(x % 15 == 0)
            {
                screen += x/15;
            }
            else
            {
                screen += x/15 + 1;
            }
        }


        cout<<screen<<endl;

    }
    return 0;
}


