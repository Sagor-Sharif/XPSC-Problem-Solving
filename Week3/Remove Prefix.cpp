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
        vector<int> number(n);
        for(int i=0; i< n; i++)
        {
            cin>>number[i];
        }
        map<int,int> fre;
        bool p= false;
        for(int i=n-1; i>=0 ; i--)
        {
            if(fre[number[i]] == 1)
            {
                cout<<i+1<<endl;
                p=true;
                break;
            }
            else
            {
                fre[number[i]] = 1;
            }
        }
        if(p==false)
            cout<<"0"<<endl;
    }
    return 0;
}

