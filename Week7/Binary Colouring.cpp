#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;

        vector<int> v(32);

        for(int i=29; i>=0; i--)
        {
            v[i] = (x >= (1<<i));
            x %= (1<<i);
        }

        for(int i=0, j; i<32;)
        {

            if(!v[i])
            {
                i++;
                continue;
            }

            j = i+1;
            while(v[j])
            {
                v[j] = 0;
                j++;
            }

            if(j > i+1)
            {
                v[j] = 1;
                v[i] = -1;
            }

            i = j;
        }

        cout<<32<<endl;

        for(auto e: v)
        {
            cout<<e<<" ";
        }

        cout<<endl;

    }


    return 0;
}
