#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s,t;
    cin>>s>>t;
    int number=0;
    if(s<t || (s>t && t == 0))
    {
        for(int i=0; i<= s; i++)
        {
            for(int j =0;j <= s;j++)
            {
                for(int k=0; k<= s; k++)
                {
                    if((i+j+k <= s) && (i*j*k <=t))
                    {
                        number++;
                    }
                }
            }
        }
    }
    else
    {
        for(int i=0; i<= t; i++)
        {
            for(int j =0;j <= t;j++)
            {
                for(int k=0; k<= t; k++)
                {
                    if((i+j+k <= t) && (i*j*k <=t))
                    {
                        number++;
                    }
                }
            }
        }
    }
    cout<<number<<endl;

    return 0;
}
