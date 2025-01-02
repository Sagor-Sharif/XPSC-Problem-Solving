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
        if(n==1)
        {
            cout<<"1"<<endl<<"1 2"<<endl;
        }
        else
        {
            if(n%2==0)
            {
                int loop = n/2;
                cout<<loop<<endl;
                int count1 =1,count2 = n*3;
                for(int i=1; i<= loop; i++)
                {
                    cout<<count1<<" "<<count2<<endl;
                    count1+=3;
                    count2-=3;

                }

            }
            else
            {

                int loop = n/2;
                cout<<loop+1<<endl;
                int count1 =1,count2 = n*3;
                for(int i=1; i<= loop+1; i++)
                {
                    cout<<count1<<" "<<count2<<endl;
                    count1+=3;
                    count2-=3;

                }
            }
        }
    }
    return 0;
}


