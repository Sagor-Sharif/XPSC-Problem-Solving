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
        string s;
        cin>>s;
        vector<char> final_string;
        for(int i=n-1; i>=0 ; i--)
        {
            if(s[i] == '0')
            {
                int number;
                int tmp = s[i-2];
               number = tmp-48;
               number =number*10;
                tmp=s[i-1];
                tmp-=48;
                number += tmp;
                number+=96;
                final_string.push_back(number);
                i-=2;
            }
            else
            {
                int number = s[i];
                number-=48;
                number+=96;
                final_string.push_back(number);
            }
        }
        int sz=final_string.size();
        for(int i=sz-1;i>=0;i--)
        {
            cout<<final_string[i];
        }
        cout<<endl;

    }



    return 0;
}


