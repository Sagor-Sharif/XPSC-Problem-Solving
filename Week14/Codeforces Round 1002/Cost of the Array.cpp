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
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);

        for(int i=0; i< n; i++)
        {
            cin>>arr[i];
        }

        if(n == k)
        {
            int index = 1;
            bool possible =false;
            for(int i = 1; i< n; i+=2)
            {
                if(arr[i] != index)
                {
                    possible = true;
                    break;
                }
                else
                    index++;
            }
            if(possible == true)
            {
                cout<<index<<endl;
            }
            else
                cout<<index<<endl;

        }
        else
        {
            int index = 1;
            bool possible = false;

            for(int i=1; i< n-(n-k); i++)
            {

                for(int j = i; j<=i+(n-k); j++)
                {
                    if(arr[j] != index)
                    {
                        possible = true;
                        break;
                    }
                }
                if(possible == true)
                {
                    break;
                }

                index++;
            }

            if(possible == true)
            {
                cout<<index<<endl;
            }
            else
                cout<<index<<endl;

        }





    }



    return 0;
}



