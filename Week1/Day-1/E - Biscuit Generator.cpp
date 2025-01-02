#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,t;
    cin>>a>>b>>t;
    int biscut = t/a;
    biscut *=b;
    cout<<biscut<<endl;




    return 0;
}
