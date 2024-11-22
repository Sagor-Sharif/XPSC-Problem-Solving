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
        if(n==2)
        {
            cout<<"2"<<endl<<"1 2"<<endl;
            //break;
        }
        else
        {
            cout<<"2"<<endl;
            cout<<n-2<<" "<<n<<endl;
            int number = n-1;
            n--;
            cout<<number<<" "<<n<<endl;
            number = (number+n)/2;
            n--;
            while(n--)
            {
                if(n==0)
                    break;
                cout<<number<<" "<<n<<endl;
                number = (number+n)/2;
            }
        }
    }
    return 0;
}

