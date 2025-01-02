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
        vector<int> number(n);
        for(int i=0; i< n; i++)
        {
            cin>>number[i];
        }
        vector<string> opt(n);
        for(int i=0; i< n; i++)
        {
            int N;
            cin>>N;
            cin>>opt[i];
        }
        for(int i=0; i< n; i++)
        {
            for(int j=0; j< opt[i].size(); j++)
            {
                if(opt[i][j] == 'U')
                {
                    if(number[i]==0)
                        number[i]= 9;
                    else
                        number[i]--;
                }
                else
                {
                    if(number[i]==9)
                        number[i]= 0;
                    else
                        number[i]++;
                }
            }
            cout<<number[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}

