#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumSumSubarray(vector<int>& arr, int k)
    {
        long long max_sum =0;
        for(int i=0; i< k; i++)
        {
            max_sum+=arr[i];
        }
        int l= 0,r=k;
        long long sum = max_sum;
        while(r<arr.size())
        {
            sum = (sum-arr[l])+arr[r];
            if(sum > max_sum)
            {
                max_sum = sum;
            }
            l++;
            r++;
        }
        return max_sum;
    }
};
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i< n; i++)
        {
            cin>>arr[i];
        }
        int k;
        cin>>k;
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
