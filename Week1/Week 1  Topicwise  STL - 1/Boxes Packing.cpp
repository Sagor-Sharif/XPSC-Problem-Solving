#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> box(n);
    vector<int> ans(n);
    vector<bool> pos(n,false);
    for(int i=0; i< n; i++)
    {
        cin>>box[i];
        ans[i] = box[i];
    }
    //cout<<ans[0]<<" ";

    sort(box.begin(),box.end());
    sort(ans.begin(),ans.end());

    for(int i=0; i < n-1; i++)
    {
        for(int j=i+1; j< n; j++)
        {
            if(box[i] < box[j] && pos[j] == false)
            {
                int b =  box[i];
                ans.erase(find(ans.begin(),ans.end(),b));
                pos[j] =true;
//                if(j==n-1)
//                {
//                    cout<<ans.size()<<endl;
//                    return 0;
//                }
                break;
            }
        }
    }
    cout<<ans.size()<<endl;
    return 0;
}

