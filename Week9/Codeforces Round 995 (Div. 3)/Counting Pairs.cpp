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
        long long  n,x,y;
        cin>>n>>x>>y;

        vector<long long>seq(n);
        long long sum=0;
        for(long long i=0; i< n; i++)
        {
            cin>>seq[i];
            sum+= seq[i];
        }
        int total = 0;

        sort(seq.begin(), seq.end());

        for(int i=0; i< n; i++)
        {
            if(sum-seq[i] > x)
            {
                for(int j=i+1; j<n; j++)
                {
                    if( sum-seq[j] > x )
                    {
                        long long current = seq[i]+seq[j];
                        if(sum-current >= x && sum-current<= y)
                        {
                            total++;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                break;
            }
        }
        cout<<total<<endl;
    }



    return 0;
}


