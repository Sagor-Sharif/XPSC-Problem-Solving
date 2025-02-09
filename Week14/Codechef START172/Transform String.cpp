#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        int n = a.size(), m= b.size();

        vector<bool> mark(n,false);

        int j = m-1;
        for(int i=n-1; i >= 0; i--)
        {
            if(j >= 0 && a[i] == b[j])
            {
                mark[i] = true;
                j--;
            }
            else if(j <0)
            {
                break;
            }
        }

        if(j >= 0)
        {
            cout<<-1<<endl;
            continue;
        }
        ll marks = 0;
        ll cost = 0;

        for(int i=0; i< n; i++)
        {
            if(mark[i] == true)
            {
                marks++;
            }
            else
            {
                cost+= marks+1;
            }
        }

    cout<<cost<<endl;


    }



    return 0;
}

