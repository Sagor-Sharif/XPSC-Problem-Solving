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
        int n,k;
        cin>>n>>k;

        vector<int>a(n);

        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }

        int order =0;

        for(int i=0; i< n; i++)
        {
            if(a[i]== order+1)
            {
                order++;
            }
        }

        int unorder = n-order;
        int ans = (unorder + k - 1) / k;

        cout<< ans<<endl;


    }



    return 0;
}



