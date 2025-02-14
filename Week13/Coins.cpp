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

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        if(n%2 == 0 && k%2==0)
        {
            yes
        }
        else if(n%2 ==0)
        {
            yes
        }
        else if(n%2 != 0 && k%2 != 0)
        {
            if(n-k >= 2 || n == k)
            {
                yes
            }
            else
                no
        }
        else
        {
            no
        }



    }



    return 0;
}



