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
            int n;
            cin>>n;
            int f=0,g=0;
            for(int i=1; i< (n/2) +1; i++)
            {
                if(i%2 ==0)
                {
                    f++;
                }
                else
                {
                    g++;
                }
            }
            if(n%2 ==0)
            {
                f++;
            }
            else
                g++;
            if(f>g)
            {
                cout<<"1"<<endl;
            }
            else if(f==g)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }


        }


    return 0;
}
