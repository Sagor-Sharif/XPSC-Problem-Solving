#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int max_numer =0;

    if(a>b)
    {
        max_numer = a;
        a--;
        if(a>b)
        {
            max_numer+=a;
        }
        else
            max_numer+=b;
    }
    else
    {
        max_numer = b;
        b--;
        if(b>a)
        {
            max_numer+=b;
        }
        else
        {
            max_numer+=a;
        }
    }

    cout<<max_numer<<endl;



    return 0;
}
