
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            int cunt = n/2;
            if(cunt==k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            int cunt = n/2;
            if(cunt==k)
            {
                cout<<"YES"<<endl;
            }
            else if(cunt+1==k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
