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
        int n,a,b,c;
        cin>>n>>a>>b>>c;

        long long three = a+b+c;

        long long day = (n/three )*3 ;
        long long total = three * (n/three);
        //cout<<total<<" "<<day<<endl;
        while(total<=n)
        {
            if(total>=n)
            {
                //cout<<total<<endl;
                break;
            }
            total+=a;
            day++;
            if(total>=n)
            {
                //cout<<total<<endl;
                break;
            }
            total+=b;
            day++;
            if(total>=n)
            {
                //cout<<total<<endl;
                break;
            }
            total+=c;
            day++;
            if(total>=n)
            {
                //cout<<total<<endl;
                break;
            }

        }
        cout<<day<<endl;



    }



    return 0;
}


