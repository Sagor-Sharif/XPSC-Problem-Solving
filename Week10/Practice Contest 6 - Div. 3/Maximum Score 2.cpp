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

        vector<int>a(n);
        int zero =0;
        int one =0;

        for(int i=0; i< n; i++)
        {
            cin>>a[i];
            if(a[i] == 0)
            {
                zero++;
            }
            else
                one++;
        }

        if(zero<= one)
        {
            cout<<zero<<endl;
        }
        else
        {
            cout<<one<<endl;
        }


    }



    return 0;
}



