#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    string s;
    cin>>s;
    int n = s.size();
    vector<pair<int,int>>left(n),right(n);

    if(s[0] == 'L')
    {
        left[0] = {1,0};
    }
    else
    {
        left[0] = {0,1};
    }
    for(int i=1; i< n; i++)
    {
        if(s[i] == 'L')
        {
            left[i] = {left[i-1].first+1, left[i-1].second };
        }
        else
        {
            left[i] = {left[i-1].first, left[i-1].second+1 };
        }

    }

    if(s[n-1] == 'L')
    {
        right[n-1] = {1,0};
    }
    else
    {
        right[n-1] = {0,1};
    }

    for(int i = n-2; i >=0 ; i--)
    {
        if(s[i] == 'L')
        {
            right[i] = {right[i+1].first+1, right[i+1].second };
        }
        else
        {
            right[i] = {right[i+1].first, right[i+1].second+1 };
        }

    }

//        for(auto x:left)
//        {
//            cout<<x.first<<" "<<x.second<<endl;
//        }
//        nl
//        for(auto x:right)
//        {
//            cout<<x.first<<" "<<x.second<<endl;
//        }

    for(int i=0; i< n-1; i++)
    {

        pair<int,int> left_pair = left[i], right_pair = right[i+1];

        if(left_pair.first != right_pair.first && left_pair.second != right_pair.second)
        {
            cout<<i+1<<endl;
            return 0;
        }

    }
    cout<<-1<<endl;




    return 0;
}



