#include <bits/stdc++.h>
using namespace std;

void makeLuckyNumbers(vector<long long>& luckyNumbers, string current, int maxDigits)
{
    if (current.length() > maxDigits) return;

    if (!current.empty())
    {
        luckyNumbers.push_back(stoll(current));
    }

    makeLuckyNumbers(luckyNumbers, current + "4", maxDigits);
    makeLuckyNumbers(luckyNumbers, current + "7", maxDigits);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<long long> luckyNumbers;

    makeLuckyNumbers(luckyNumbers, "", to_string(n).length());

    int count = 0;
    for (long long number : luckyNumbers)
    {
        if (number <= n)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
