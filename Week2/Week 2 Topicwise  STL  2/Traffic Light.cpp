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
        char current ;
        cin>>n>>current;
        int first_g =0,max_time=0,current_time=0;
        bool start = false;
        string s;
        cin>>s;
        s+=s;
        for(char c:s )
        {
            if(current != 'g')
            {

                if(c==current && start == false)
                {
                    current_time=1;
                    start = true;
                }
                else if(c != 'g' && start == true)
                {
                    current_time++;
                }

                if(c=='g')
                {
                    max_time= max(current_time,max_time);
                    current_time=0;
                    start = false;
                }

            }
            else
                break;
        }

        cout<<max_time<<endl;
    }
    return 0;
}

