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
        int k,n,m;
        cin>>k>>n>>m;
        vector<int>mono(n),poly(m);

        for(int i=0; i< n; i++)
        {
            cin>>mono[i];
        }
        for(int i=0; i< m; i++)
        {
            cin>>poly[i];
        }
        int mo=0,po=0;
        vector<int>ans;
        bool possible =true;
        while(mo <n || po <m)
        {

            if((mo < n && po <  m) && (mono[mo] <= poly[po]))
            {
                if(k<mono[mo] )
                {
                    possible = false;
                    break;
                }
                else if( mono[mo] == 0 )
                {
                    ans.push_back(mono[mo]);
                    k++;
                    mo++;

                }
                else
                {
                    ans.push_back(mono[mo]);
                    mo++;

                }


            }
            else if( (mo < n && po <  m) && (mono[mo] >= poly[po]))
            {
                if(k < poly[po])
                {
                    possible = false;
                    break;
                }
                else if(poly[po] == 0)
                {
                    ans.push_back(poly[po]);
                    k++;
                    po++;

                }
                else
                {
                    ans.push_back(poly[po]);
                    po++;

                }

            }
            else if(mo < n)
            {
                if(k<mono[mo] )
                {
                    possible = false;
                    break;
                }
                else if( mono[mo] == 0 )
                {
                    ans.push_back(mono[mo]);
                    k++;
                    mo++;

                }
                else
                {
                    ans.push_back(mono[mo]);
                    mo++;

                }
            }
            else if( po < m)
            {
                if(k < poly[po])
                {
                    possible = false;
                    break;
                }
                else if(poly[po] == 0)
                {
                    ans.push_back(poly[po]);
                    k++;
                    po++;

                }
                else
                {
                    ans.push_back(poly[po]);
                    po++;

                }
            }

        }
        if(possible == false)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0; i< ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            nl
        }







    }



    return 0;
}



