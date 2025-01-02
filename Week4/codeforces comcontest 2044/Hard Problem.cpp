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
        int m,a,b,c,am=0,bm=0;
        cin>>m>>a>>b>>c;
        long long total_seat=0;
        if(a<=m)
        {
            total_seat+=a;
            am=m-a;
            if(c<=am)
            {
                total_seat+=c;
                c=0;
            }
            else
            {
                total_seat+=am;
                c=c-am;
                am=0;
            }
        }
        else
        {
            total_seat+=m;
        }
        if(b<=m)
        {
            total_seat+=b;
            bm=m-b;
            if(c<=bm)
            {
                total_seat+=c;

            }
            else
            {
                total_seat+=bm;
            }
        }
        else
        {
            total_seat+=m;
        }


        cout<<total_seat<<endl;
    }



    return 0;
}


