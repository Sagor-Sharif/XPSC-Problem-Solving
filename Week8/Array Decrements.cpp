#include <bits/stdc++.h>
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
        vector<int>a(n),b(n);

        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i< n; i++)
        {
            cin>>b[i];
        }


        int diff=-1,zero_diff=-1;

        bool possible=true;

        for(int i=0; i< n; i++)
        {
            if(a[i]<b[i])
            {
                possible=false;
                break;
            }
            if(b[i]!=0)
            {
                if(diff==-1)
                {
                    diff=a[i]-b[i];
                }
                else
                {
                    if(a[i]-b[i] != diff)
                    {
                        possible=false;
                        break;
                    }
                }
            }
            else
            {
                zero_diff=max(zero_diff,a[i]-b[i]);
            }
        }

        if(possible==false)
        {
            cout<<"NO"<<endl;
            continue;
        }


        if(diff == -1 || zero_diff<=diff)
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
