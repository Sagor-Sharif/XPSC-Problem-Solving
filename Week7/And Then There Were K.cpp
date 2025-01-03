#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {

        int n;
        cin>>n;
        int ans= INT_MAX;
        int two =1;

        while(two*2 <= n)
        {
            two *= 2;
        }
        cout<<two-1<<endl;


    }
    return 0;
}



