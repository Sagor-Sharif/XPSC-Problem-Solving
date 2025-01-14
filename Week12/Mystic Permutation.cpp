#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

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
        vector<int> p(n);
        for(int i=0; i< n; i++)
        {
            cin>>p[i];
        }

        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }

        multiset<int> nmb;
        for(int i=1; i<= n; i++)
        {
            nmb.insert(i);
        }

        vector<int> ans(n);

        for(int i=0; i< n; i++)
        {
            auto ptr =nmb.begin();

            if(p[i]!=(*ptr))
            {
                ans[i]=(*ptr);
                nmb.erase(ptr);
            }
            else
            {
                if(nmb.size()==1)
                {
                    ans[i] = (*ptr);
                    nmb.erase(ptr);
                    swap(ans[i],ans[i-1]);
                }
                else
                {
                    ptr++;
                    ans[i]=(*ptr );
                    nmb.erase(ptr);
                }
            }
        }

        for(int i=0; i< n; i++)
        {
            cout<<ans[i]<< " ";
        }
        cout<<endl;


    }



    return 0;
}



