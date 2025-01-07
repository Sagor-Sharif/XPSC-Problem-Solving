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

        priority_queue<int>odd;

        vector<int>even;


        for(int i=0; i< n; i++)
        {
            int number;
            cin>>number;

            if(number % 2 == 0)
            {
                even.push_back(number);
            }
            else
            {
                odd.push(number);
            }
        }

        sort(even.begin(),even.end());

        int siz = min(even.size(),odd.size());
        int even_siz = even.size();

        int opt =0;
        if(odd.size() != 0)
        {

            while(!even.empty())
            {
                if(odd.top() > even[0])
                {
                    odd.push(odd.top() + even[0]);
                    even.erase(even.begin());
                    opt++;
                }
                else
                {
                    opt = even_siz + 1;
                    break;
                }
            }
        }
        cout<<opt<<endl;
    }

    return 0;
}
