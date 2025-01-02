#include<bits/stdc++.h>
using namespace std;
int n,m;

bool valid(int i,int j)
{
    if(i>=0 && i<n && j>=0 && j<m)
    {
        return true;
    }
    else
        return false;
}
long long right_top(vector<vector<int>>& arr, int i, int j)
{
    if (!valid(i, j))
    {
        return 0;
    }
    return arr[i][j] + right_top(arr, i - 1, j + 1);
}
long long top_left(vector<vector<int>>& arr, int i, int j)
{
    if (!valid(i, j))
    {
        return 0;
    }
    return arr[i][j] + top_left(arr, i - 1, j - 1);
}
long long left_down(vector<vector<int>>& arr, int i, int j)
{
    if (!valid(i, j))
    {
        return 0;
    }
    return arr[i][j] + left_down(arr, i + 1, j - 1);
}
long long down_right(vector<vector<int>>& arr, int i, int j)
{
    if (!valid(i, j))
    {
        return 0;
    }
    return arr[i][j] + down_right(arr, i + 1, j + 1);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m));
        for(int i=0; i< n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        long long sum=0;

        for(int i=0; i< n; i++)
        {
            for(int j=0; j<m; j++)
            {
                long long total_sum=0;
                total_sum+=right_top(arr,i,j);
                total_sum+=top_left(arr,i-1,j-1);
                total_sum+=left_down(arr,i+1,j-1);
                total_sum+=down_right(arr,i+1,j+1);
                if(sum<total_sum)
                {
                    sum=total_sum;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

