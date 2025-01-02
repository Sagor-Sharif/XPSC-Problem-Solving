#include <iostream>
#include <algorithm>
#include <string>
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
        int x;
        cin>>x;
        int back_dollars = 100-x;
        if(back_dollars != 0 && back_dollars % 10 == 0)
        {
            cout<<back_dollars<<endl;
        }
        else if(back_dollars == 0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            bool p = false;
            while(back_dollars--)
            {
                if(back_dollars != 0 && back_dollars % 10 == 0)
                {
                    cout<<back_dollars<<endl;
                    p=true;
                    break;
                }
            }
            if(p==false)
            cout<<"0"<<endl;
        }

    }

    return 0;
}
