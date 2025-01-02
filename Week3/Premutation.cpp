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
        vector<int> seqn(n-1);
        int mis=0;

        for(int i=0; i<n-1; i++)
        {
            cin>>seqn[i];
        }
        vector<int> tmp(seqn);
        sort(tmp.begin(),tmp.end());
        for(int i=0; i< n; i++)
        {
            if(tmp[i] != i+1)
            {
                mis =i+1;
                break;
            }
        }
        if(mis==0)
        {
            mis=n;
        }
        int befor=0;
        int N=n-1;
        map<int,int> fin;
        while(N--)
        {
            for(int i=0; i< n-1; i++)
            {
                cin>>tmp[i];
                if(tmp[i] == mis)
                {
                    if(i-1 >=0)
                    {
                        fin[tmp[i-1]]++;
                    }
                    else
                    {
                        fin[0]++;
                    }
                }
            }
        }
        if(n==3)
        {
            int c1=0,c2=0,m=1;

            for(auto[b,coun]:fin)
            {
                if(c1<coun && b!=0)
                {
                    c1=coun;
                    befor =b;
                }
                else
                {
                    c2=coun;
                }
                if(m==1&&b==0)
                {
                    m=b;
                }
            }
            if(befor!=0 &&m!=0&& c1==1 && c2==1)
            {
                for(int i=0; i< n-1; i++)
                {
                    cout<<seqn[i]<<" ";
                }
                cout<<mis<<endl;
            }
            else  if(befor==0)
            {
                cout<<mis<<" ";
                for(int i=0; i< n-1; i++)
                {
                    cout<<seqn[i]<<" ";
                }
                cout<<endl;
            }
            else
            {
                for(int i=0; i< n-1; i++)
                {
                    cout<<seqn[i]<<" ";
                    if(seqn[i] == befor)
                    {
                        if(i != n-2)
                        {
                            cout<<mis<<" ";
                        }
                        else
                        {
                            cout<<mis;
                        }
                    }
                }
                cout<<endl;
            }
        }
        else
        {

            int c=0;
            for(auto[b,coun]:fin)
            {
                if(c<coun && b!=0)
                {
                    c=coun;
                    befor =b;
                }

            }
            if(befor == 0)
            {
                cout<<mis<<" ";
                for(int i=0; i< n-1; i++)
                {
                    cout<<seqn[i]<<" ";
                }
                cout<<endl;
            }
            else
            {
                for(int i=0; i< n-1; i++)
                {
                    cout<<seqn[i]<<" ";
                    if(seqn[i] == befor)
                    {
                        if(i != n-2)
                        {
                            cout<<mis<<" ";
                        }
                        else
                        {
                            cout<<mis;
                        }
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}

