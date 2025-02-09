#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;


int maxStreakValue(vector<int>& arr)
{
    int max_streak = 1, current_streak = 1;
    for (size_t i = 1; i < arr.size(); i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            current_streak++;
        }
        else
        {
            max_streak = max(max_streak, current_streak);
            current_streak = 1;
        }
    }
    return max(max_streak, current_streak);
}

int findMaxPossibleStreak(int n, int x, vector<int>& arr)
{

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int max_streak = maxStreakValue(arr);

    for (int i = 0; i < n; i++)
    {
        int original = arr[i];
        arr[i] *= x;
        max_streak = max(max_streak, maxStreakValue(arr));
        arr[i] = original;
    }

        cout << max_streak << endl;
    }


    return 0;
}


