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
        int arr[n];
        vector<int> leftsum(n,0);
        vector<int> rightsum(n,0);
        for(int i=0; i< n; i++)
        {
            cin>>arr[i];
            if(i==0)
            {
                leftsum[i]=arr[i];
            }
            else
            {
                leftsum[i] =leftsum[i-1]+arr[i];
            }
        }
        for(int i=n-1; i>= 0; i--)
        {
            if(i==n-1)
            {
                rightsum[i]=arr[i];
            }
            else
            {
                rightsum[i] =rightsum[i+1]+arr[i];
            }
        }
        bool p =false;
        for(int i=0; i< n; i++)
        {
            if(rightsum[i] %2==0 && leftsum[n-i-1] % 2==0)
            {
                cout<<n-i<<endl;
                p=true;
                break;
            }
            else if(rightsum[i] %2==0)
            {
                cout<<n-i<<endl;
                p=true;
                break;
            }
            else if(leftsum[n-1-i] %2==0)
            {
                cout<<n-i<<endl;
                p=true;
                break;
            }
        }
        if(p==false)
        {
            cout<<"0"<<endl;
        }

    }



    return 0;
}
