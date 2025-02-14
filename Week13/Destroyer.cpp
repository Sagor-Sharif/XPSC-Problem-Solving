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
        int n;
        cin>>n;

        vector<int>robots(n);

        for(int i=0; i< n; i++)
        {
            cin>>robots[i];
        }

        vector<int>serial(101);

        for(int i=0; i< n; i++)
        {
            serial[robots[i]]++;
        }

        bool zero = false;
        bool poss =  true;



        for(int i=0; i< 100; i++)
        {
            //cout<<serial[i]<<" ";
            if(serial[i] < serial[i+1])
            {
                poss = false;
                break;
            }

        }
        if(poss == true)
        {
            yes
        }
        else
        {
            no
        }



    }



    return 0;
}



