#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> song_1(n);
        string rating(n, ' ');
        priority_queue<pair<int,int>> one,zero;

        for (int i = 0; i < n; i++)
        {
            cin >> song_1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> rating[i];
            if (rating[i] == '1')
            {
                one.push({song_1[i], i});
            }
            else
            {
                zero.push({song_1[i], i});
            }
        }
        while(!one.empty() && !zero.empty())
        {
            auto op =one.top();
            //cout<<"One: "<<op.first<<endl;
            if(!zero.empty())
            {
                auto zp= zero.top();
                //cout<<"zero: "<<zp.first<<endl;
                if(op.first<zp.first)
                {
                    //cout<<song_1[op.second]<<" "<<song_1[zp.second]<<endl;
                    swap(song_1[op.second],song_1[zp.second]);
                    zero.pop();
                    zero.push({op.first,zp.second});
                }
            }
            one.pop();
        }
        for(int i=0; i< n; i++)
        {
            cout<<song_1[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
