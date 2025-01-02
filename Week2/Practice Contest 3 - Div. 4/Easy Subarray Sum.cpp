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
        int n,neg =0,posi=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i< n; i++)
        {

            cin>>v[i];
        }
        int sub_sum=0;
        int ope=0;

        for(int i=0; i< n; i++)
        {
            if(v[i] >0)
            {
                int tmp_sum=0;
                int tmp_ope=0;
                bool neg=false;
                for(int j=i; j< n-1; j++)
                {
                    if(v[i]>0 && neg == true && v[i+1] <0)
                    {
                        sub_sum+=v[i];
                        if(sub_sum< tmp_sum)
                        {
                            sub_sum=tmp_sum;
                            ope=tmp_ope;
                        }
                    }
                    if(v[i]>0)
                    {
                        tmp_sum+=v[i];
                    }
                    else if(neg == false && v[i]<0)
                    {
                        neg=true;
                        tmp_ope++;
                        i=j;
                    }
                    else if(neg == true && v[i]<0)
                    {
                        tmp_ope++;
                        i=j;
                        if(sub_sum< tmp_sum)
                        {
                            sub_sum=tmp_sum;
                            ope=tmp_ope;
                        }
                    }
                    else
                    {
                        tmp_ope++;
                        i=j;
                    }
                }
                if(sub_sum< tmp_sum)
                {
                    sub_sum=tmp_sum;
                    ope=tmp_ope;
                }
            }
        }
        cout<<ope<<endl;

    }
    return 0;
}

