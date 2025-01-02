#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,p1,p2,p3,t1,t2,power=0,last_time;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    int f,l;
    cin>>f>>l;
    power = (l-f)*p1;
    last_time=l;
    for(int i=0; i< n-1; i++)
    {
        int f,l;
        cin>>f>>l;
        int mideltime = f-last_time;
        if(mideltime <= t1)
        {
            power += mideltime*p1;
        }
        else
        {
            power += t1*p1;
            mideltime -= t1;
            if(mideltime <= t2)
            {
                power += mideltime*p2;
            }
            else
            {
                power += t2*p2;
                mideltime-=t2;
                power+=mideltime*p3;
            }
        }
        power += (l-f)*p1;
        last_time = l;
    }
    cout<<power<<endl;
    return 0;
}

