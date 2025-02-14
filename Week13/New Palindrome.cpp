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

        map<char,int>letters;

        int even =0;
        int odd =0;

        for(int i=0; i< s.size(); i++)
        {
            letters[s[i]]++;
        }
        vector<int>ans(51);
        int maxodd =0;
        for(auto[a,b]:letters)
            {
                ans[b]++;
                if(b%2 ==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                    maxodd = max(b,maxodd);
                }

            }
//            bool poss =false;
//            for(int i=1; i< 51; i++)
//            {
//                if(ans[i] >1)
//                {
//                    poss = true;
//                    break;
//                }
//            }
    //cout<<even<<odd<<endl;
            if((even > 0 && maxodd > 1) || even > 1)
            {
                yes
            }
            else
                no


    }


    return 0;
}



