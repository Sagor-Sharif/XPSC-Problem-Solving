#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

// Function to calculate the MEX of an array
int calculate_mex(const vector<int>& arr)
{
    unordered_set<int> elements(arr.begin(), arr.end());
    int mex = 0;
    while (elements.find(mex) != elements.end())
    {
        mex++;
    }
    return mex;
}

// Main driver function
int main()
{
    int T; // Number of test cases
    cin >> T;

    while (T--)
    {
        int N; // Size of the array
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        // Calculate the initial MEX
        int mex = calculate_mex(A);


        long long result = 0;
        for (int i = 0; i < N; ++i)
        {
            result += max(A[i], mex);
        }


        cout << result << endl;
    }

    return 0;
}
