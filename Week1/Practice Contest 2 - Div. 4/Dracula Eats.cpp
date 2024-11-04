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
        int day,total_day=0;
        cin>>day;
        if(day>=2)
        {
            day-=2;
            total_day++;
        }
        for(int i=7; i<= day; i+=7)
        {
            total_day++;
        }
        cout<<total_day<<endl;
    }
    return 0;
}

