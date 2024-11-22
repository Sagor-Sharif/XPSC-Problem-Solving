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
        char arr[n];
        for(int i=0; i< n; i++)
        {
            cin>>arr[i];
        }
        int first_length =0;
        int second_length = 0;
        for(int i=0; i< n; i++)
        {
            if(arr[i] == 'B')
            {
                first_length = i;
                break;
            }
        }
        for(int i=n-1; i>=0 ; i--)
        {
            if(arr[i] == 'B')
            {
                second_length = i;
                break;
            }
        }
        first_length++;
        second_length++;
        cout<<(second_length-first_length)+1<<endl;
    }
    return 0;
}
