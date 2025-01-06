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

        long long sum =0;
        int one =0;

        for(int i=0; i< n; i++)
        {
            int x;
            cin>>x;
            sum+=x;
            if(x==1)
            {
                one++;
            }
        }

        if(sum>= one+n && n>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }



    return 0;
}



