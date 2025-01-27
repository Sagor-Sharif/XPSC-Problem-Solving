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

    int n;
    cin>>n;
    int ans =0;
    if(n%2 == 0)
    {
        ans = n/2;
        cout<<ans;
        nl
        while(ans--)
        {
            cout<<2<<" ";
        }
        nl
    }
    else
    {
        ans = (n-3)/2;
        cout<<ans+1;
        nl
        while(ans--)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }



    return 0;
}



