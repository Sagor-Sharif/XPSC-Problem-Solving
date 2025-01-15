#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<int,int>ans;


        int cnt =0;
        //cout<<1<<" "<<n<<endl;

        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i != n / i)
                    cnt += 2;
                else
                    cnt += 1;
            }
        }

        cout<<cnt<<endl;

    }



    return 0;
}




