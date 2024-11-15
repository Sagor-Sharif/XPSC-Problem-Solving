#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> contest(n);
    for(int i=0; i< n; i++)
    {
        cin>>contest[i];
    }
    sort(contest.begin(),contest.end());
    int day =0;
    for(int i=0; i<n ; i++)
    {
        if(contest[i] >= day+1)
        {
            day++;
        }
        else
        {
            int j;
            for(j=i+1; j<n; j++)
            {
                if(contest[j] >= day+1)
                {
                    day++;
                    i=j;
                    break;
                }
            }
            if(j==n)
            {
                i=n;
            }
        }
    }
    cout<<day<<endl;
    return 0;
}

