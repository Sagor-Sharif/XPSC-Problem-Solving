#include<bits/stdc++.h>
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

        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        map<int, int> maxPenaltyPerDay;

        for (int i = 0; i < n; i++)
        {
            int penalty = i + 1;
            int day = A[i];


            if (maxPenaltyPerDay.find(day) == maxPenaltyPerDay.end() || maxPenaltyPerDay[day] < penalty)
            {
                maxPenaltyPerDay[day] = penalty;
            }
        }


        int totalPenalty = 0;
        for (auto& entry : maxPenaltyPerDay)
        {
            totalPenalty += entry.second;
        }

        cout << totalPenalty << endl;


    }




    return 0;
}
