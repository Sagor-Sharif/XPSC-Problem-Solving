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
        int n,c;
        cin>>n>>c;
        vector<int> cookis;
        for(int i=0; i< n; i++)
        {
            int cok;
            cin>>cok;
            if(cok>=c)
            {
                cookis.push_back(cok);
            }
        }

        if(cookis.empty())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            sort(cookis.begin(),cookis.end());
            int total_cok=999999999;
            //cout<<c<<" "<<cookis[0]<<endl;
            for(int i=0; i< cookis.size(); i++)
            {
                int min_cook= cookis[i]%c;
                total_cok = min(total_cok,min_cook);
            }
            cout<<total_cok<<endl;
        }



    }
    return 0;
}

