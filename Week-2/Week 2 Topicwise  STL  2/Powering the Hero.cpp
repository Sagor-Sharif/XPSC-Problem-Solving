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
        long long total_power =0;
        priority_queue<int> pow;
        while(n--)
        {
            int power;
            cin>>power;
            if(power != 0)
            {
                pow.push(power);
            }
            else if(power == 0 && !pow.empty())
            {
                total_power+=  pow.top();
                pow.pop();
            }
        }
        cout<<total_power<<endl;
    }
    return 0;
}

