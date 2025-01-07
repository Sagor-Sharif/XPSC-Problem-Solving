#include<bits/stdc++.h>
using namespace std;
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
        string s;
        cin>>s;

        map<char,int>ans;

        for(int i=0; i< s.size(); i++)
        {
            if(ans[s[i]] < n)
            {
                ans[s[i]]++;
            }
        }
        int finalAns =ans['A'] + ans['B'] + ans['C'] + ans['D'];
        cout<<finalAns<<endl;

    }



    return 0;
}



