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

        int arr[n][n];
        int l=1,u=n*n;

        for(int i=0; i< n; i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<n;j++)
                {
                    if(j%2 == 0)
                    {
                        arr[i][j] = l;
                        l++;
                    }
                    else
                    {
                        arr[i][j] = u;
                        u--;
                    }

                }
            }
            else
            {
                for(int j=n-1;j>=0;j--)
                {
                    if(j%2 == 0)
                    {
                        arr[i][j] = u;
                        u--;
                    }
                    else
                    {
                        arr[i][j] = l;
                        l++;
                    }
                }
            }
        }



        for(int i=0; i< n; i++)
        {
            for(int j=0;j< n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}

