#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1,s2;

    cin>>s1>>s2;

    int ps1 = 0;
    int ps2 = 0;
    int emt = 0;

    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] == '+')
        {
            ps1++;
        }
        if(s2[i] == '+')
        {
            ps2++;
        }
        if(s2[i] == '?')
        {
            emt++;
        }
    }

    int  counter = 0;


    for(int i=0; i< (1<<emt); i++)
    {

        if(__builtin_popcount(i) + ps2 == ps1)
        {
            counter++;
        }
    }

    cout<<fixed<<setprecision(9)<<(double)counter/(1<<emt)<<endl;





    return 0;
}