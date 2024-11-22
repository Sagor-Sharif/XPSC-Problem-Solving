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
        int n,m,q;
        cin>>n>>m>>q;
        set<int>  teacher;
        for(int i=0; i< m; i++)
        {
            int j;
            cin>>j;
            teacher.insert(j);
        }
        while(q--)
        {
            int david;
            cin>>david;
            auto right = teacher.upper_bound(david);
            int r,l;
            if(right != teacher.end())
            {
                r = *right;
                if(right != teacher.begin())
                {
                    --right;
                   l = *(right);
                }
                else
                    l=0;
            }
            else
            {
                r=0;
                l = *(--right);
            }
            //cout<<"l: "<<l<<" r: "<<r<<endl;
            if(r ==0)
            {
                cout<<n-l<<endl;
            }
            else if(l==0)
            {
                cout<<r-1<<endl;
            }
            else
            {

                cout<<((david-l)+(r-david))/2<<endl;
            }
        }
    }

    return 0;
}

