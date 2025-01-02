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
        vector<int>a(n),b(n);
        for(int i=0; i< n; i++)
        {
         cin>>a[i];
        }
        for(int i=0; i< n; i++)
        {
         cin>>b[i];
        }
        int total_happy=0;
        for(int i=0; i< n; i++)
        {
            int max_run = max(a[i],b[i]);
            int min_run = min(a[i],b[i]);
            if(min_run*2>=max_run)
            {
                total_happy++;
            }
        }

    cout<<total_happy<<endl;
    }
    return 0;
}


