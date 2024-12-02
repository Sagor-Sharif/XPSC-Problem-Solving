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
        int a,b,c;
        cin>>a>>b>>c;
        int time_a = abs(a - 1);
        int time_b = abs(b - c) + abs(c - 1);

        if(time_a<time_b)
        {
            cout<<"1\n";
        }
        else if(time_a>time_b)
        {
            cout<<"2\n";
        }
        else
        {
            cout<<"3\n";
        }
    }
    return 0;
}
