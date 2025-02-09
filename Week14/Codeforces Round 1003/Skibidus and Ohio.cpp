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
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<char>ans;
        for(int i=0; i< n; i++)
        {
            ans.push_back(s[i]);

        }

        int unique_chars = 0;

        while(true)
        {


            bool change = false;
            for (int i = 0; i < ans.size()-1; i++)
            {
                if(ans[i] == ans[i+1])
                {
                    //cout<<ans[i]<<endl;
                    change = true;
                    if(i-1 >= 0)
                    {
                        ans[i] = ans[i-1];
                        ans.erase(ans.begin()+i+1);
                    }
                    else if( i+2 < n)
                    {
                        ans[i] = ans[i+2];
                        ans.erase(ans.begin()+i+1);
                    }
                    else
                    {
                        ans.erase(ans.begin()+i+1);
                    }

                }
            }


            if(change == false)
            {
                break;
            }
        }

        cout << ans.size() << endl;
    }


    return 0;
}



