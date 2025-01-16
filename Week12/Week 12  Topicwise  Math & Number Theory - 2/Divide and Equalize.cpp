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
        vector<int>a(n);

        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }
        unordered_map<int,int> freq;

        for(int i=0; i< n; i++)
        {
            int x = a[i];
            while(x%2==0)
            {
                freq[2]++;
                x/=2;
                //cout<<2<<" ";
            }

            for(int j=3; j*j <=x ; j+= 2)
            {
                while(x%j==0)
                {
                    freq[j]++;
                    x/=j;
                    //cout<<j<<" ";
                }

            }

            if(x>2)
            {
                freq[x]++;
                //cout<<x<<" ";
            }

        }

        bool possible = true;
        for(auto[w,z]:freq)
        {
            if(z%n != 0)
            {
                possible =false;
                break;
            }
        }

        if(possible == true)
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



