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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }
        int opt=0;
        bool strt =false;
        long long sum=0;
        for(int i=0; i< n; i++)
        {
            if(a[i] < 0 && strt == false)
            {
                strt = true;
                //a[i] = a[i]*-1;
            }
            else if(a[i] > 0 && strt == true)
            {
                opt++;
                strt = false;
            }
            if(a[i] <0 )
            {
                a[i] = a[i]*-1;
                sum+=a[i];
            }
            else
            {
                sum+=a[i];
            }
        }
        if(strt == true)
        {
            opt++;
        }

        cout<<sum<<" "<<opt<<endl;

    }
    return 0;
}

