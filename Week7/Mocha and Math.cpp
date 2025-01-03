#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int ans = accumulate(arr.begin(), arr.end(), arr[0], std::bit_and<int>());
        cout<<ans<<endl;
    }


    return 0;
}



