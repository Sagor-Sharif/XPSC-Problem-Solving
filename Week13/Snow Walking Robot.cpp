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
        string s;
        cin>>s;
        int L=0,R=0,U=0,D=0;

        for(int i=0; i< s.size(); i++)
        {
            if(s[i] == 'L')
            {
                L++;
            }
            else if(s[i] == 'R')
            {
                R++;
            }
            else if(s[i] == 'U')
            {
                U++;
            }
            else
            {
                D++;
            }
        }
        int LR = min(L,R);
        int UD = min(U,D);
        int total =0;

        if(UD >= 1)
        {
            total += LR*2;
        }
        else
        {
            if(LR >=1)
            {
                total += 2;
                LR =1;
            }
        }
        if(LR >= 1)
        {
            total += UD*2;
        }
        else
        {
            if(UD >= 1)
            {
                total += 2;
                UD = 1;
            }
        }

        cout<<total<<endl;

        for(int i=0; i< LR; i++)
        {
            cout<<"R";
        }
        for(int i=0; i< UD; i++)
        {
            cout<<"D";
        }
        for(int i=0; i< LR; i++)
        {
            cout<<"L";
        }
        for(int i=0; i< UD; i++)
        {
            cout<<"U";
        }
        nl



    }



    return 0;
}



