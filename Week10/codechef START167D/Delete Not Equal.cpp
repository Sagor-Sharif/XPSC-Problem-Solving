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
        int n;
        cin>>n;

        string s;
        cin>>s;
        int zero=0;
        int one = 0;

        for(int i=0; i< s.size(); i++)
        {

            if(s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        if(zero == 0 || one == 0)
        {
            cout<<max(zero,one)<<endl;
        }
        else
            cout<<"1\n";
    }



    return 0;
}



