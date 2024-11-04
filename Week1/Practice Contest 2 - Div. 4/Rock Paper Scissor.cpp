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
        string chef;
        string chefin;
        cin>>chef;
        cin>>chefin;
        int chef_point=0,chefin_point=0;
        for(int i=0; i< n; i++)
        {
            if(chef[i] == 'R')
            {
                if(chefin[i] == 'S')
                {
                    chef_point++;
                }
                else if(chefin[i] == 'P')
                {
                    chefin_point++;
                }
            }
            else if(chef[i] == 'P')
            {
                if(chefin[i] == 'R')
                {
                    chef_point++;
                }
                else if(chefin[i] == 'S')
                {
                    chefin_point++;
                }
            }
            else if(chef[i] == 'S')
            {
                if(chefin[i] == 'P')
                {
                    chef_point++;
                }
                else if(chefin[i] == 'R')
                {
                    chefin_point++;
                }
            }
        }
        int final_point=0;
        if(chef_point > chefin_point)
        {
            cout<<"0"<<endl;
        }
        else if( chef_point == chefin_point)
        {
            cout<<"1"<<endl;
        }
        else
        {
            while(chef_point<=chefin_point)
            {
                final_point++;
                chef_point++;
                chefin_point--;
            }
            cout<<final_point<<endl;
        }
    }
    return 0;
}

