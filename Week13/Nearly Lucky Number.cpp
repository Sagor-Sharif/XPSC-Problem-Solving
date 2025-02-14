#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll n;
    cin>>n;

    int cnt =0;
    while(n)
    {
        int x = n%10;
        if(x == 4 || x == 7)
        {
            cnt++;
        }
        n /= 10;
    }
    if(cnt == 4 || cnt == 7)
    {
        yes
    }
    else
        no

        return 0;
}



