#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
int psize,hsize;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string p,h;
        cin>>p>>h;
        psize =p.size();
        hsize =h.size();
        map<char,int>freq;

        int n = p.size();

        for(int i=0; i< n; i++)
        {
            freq[p[i]]++;
        }
        bool pass = false;
        for(int i=0; i< hsize; i++)
        {


            if(hsize - i >= psize)
            {
                int tmpsize = psize;
                map<char,int> tmpfreq = freq;

                for(int j=i; j< hsize; j++)
                {
                    //cout<<j<<" "<<h[j]<<endl;

                    if(tmpfreq[h[j]] > 0)
                    {
                        tmpfreq[h[j]]--;
                        tmpsize--;
                    }
                    else if( tmpsize == 0)
                    {
                        pass = true;
                        break;
                    }
                    else
                    {
                        pass =false;
                        break;
                    }
                }
                if(pass == true || tmpsize == 0)
                {
                    pass = true;
                    break;
                }
            }
            else
            {
                pass =false;
                break;
            }


        }

        if(pass ==true)
        {
            yes
        }
        else
            no

        }



    return 0;
}



