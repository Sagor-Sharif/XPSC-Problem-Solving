#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int number[n],odd = 999999999;
    long long sum=0;
    for(int i=0; i< n; i++)
    {
        cin>>number[i];
        sum+=number[i];
        if((number[i] % 2 != 0) && odd > number[i])
        {
            odd = number[i];
        }
    }
    if(sum %2 == 0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum-odd<<endl;
    }




    return 0;
}
