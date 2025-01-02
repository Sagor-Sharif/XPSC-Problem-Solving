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

        if(n<2 || n%2 !=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int loop = n/2;
            cout<<"YES"<<endl;
            for(int i=0;i<loop;i++)
            {
                char c = 'A'+i;
                cout<<c<<c<<c;
            }
            cout<<endl;
        }
    }
    return 0;
}


