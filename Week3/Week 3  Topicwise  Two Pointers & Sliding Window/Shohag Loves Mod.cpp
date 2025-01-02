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
        int last_number=2;
        cout<<"2 3 ";
        for(int i=3; i<=n; i++)
        {
            cout<<(i*2)+i-1<<" ";
        }

    cout<<endl;

    }
    return 0;
}

