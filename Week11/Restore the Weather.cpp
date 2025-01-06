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

        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i< n; i++)
        {

            for(int j=i+2; j<n; j++)
            {
                if(a[i] > a[j])
                {
                    swap(a[i],a[j]);
                }
            }
        }
        bool sorted = true;
        for(int i=0; i< n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                sorted = false;
                break;
            }
        }

        if(sorted == true)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }



    return 0;
}



