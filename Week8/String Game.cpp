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
        int zero =0,one =0;
        for(int i=0; i< n; i++)
        {
            if(s[i] == '0')
            {
                zero++;
            }
            else
                one++;
        }

        int min_pairs = min(zero,one);

        if(min_pairs == 0)
        {
            cout<<"Ramos"<<endl;
        }
        else
        {
            if(min_pairs % 2 == 0)
            {
                cout<<"Ramos"<<endl;
            }
            else
                cout<<"Zlatan"<<endl;
        }



    }


    return 0;
}



