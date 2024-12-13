#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>door(100,0);
    for(int i=1; i<= 100; i++)
    {
        for(int j=i-1;j<100;j+=i)
        {
            if(door[j]==1)
            {
                door[j] = 0;
            }
            else
            {
                door[j] = 1;
            }
        }
    }
    int cnt=0;
    for(int i=0; i< 100; i++)
    {
        cout<<i+1<<" : "<<door[i]<<endl;
        if(door[i]==1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;



    return 0;
}


