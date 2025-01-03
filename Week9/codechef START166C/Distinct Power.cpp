#include<bits/stdc++.h>
using namespace std;


vector<int> calculateRanks(const vector<int>& arr)
{
    vector<int> ranks(arr.size());

    vector<pair<int, int>> powerWithIndex;

    for (int i = 0; i < arr.size(); i++)
    {
        powerWithIndex.push_back({arr[i], i});
    }


    sort(powerWithIndex.begin(), powerWithIndex.end(), greater<>());

    for (int rank = 0; rank < powerWithIndex.size(); rank++)
    {
        ranks[powerWithIndex[rank].second] = rank + 1;
    }

    return ranks;
}

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

        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        set<vector<int>> distinctRanks;

        for (int i = 0; i < n; i++)
        {
            vector<int> temp = A;
            temp.erase(temp.begin() + i);

            vector<int> rankArray = calculateRanks(temp);

            distinctRanks.insert(rankArray);
        }

        cout << distinctRanks.size() << endl;




    }




    return 0;
}
