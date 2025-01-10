#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int a = 2; a * a <= num; a++)
    {
        if (num % a == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();

    // Frequency of each character
    map<char, int> freq;
    char max_char;
    int max_count = 0;

    for (char c : s)
    {
        freq[c]++;
        if (freq[c] > max_count)
        {
            max_count = freq[c];
            max_char = c;
        }
    }

    // Count the number of "special" positions
    int special_positions = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i) && i * 2 <= n)
            special_positions++;
    }

    // Check if the conditions can be satisfied
    if (n < 4 )
    {
        cout << "YES\n";
        cout<<s<<endl;
        return 0;
    }
    else if( special_positions > max_count )
    {
        cout << "NO\n";
        return 0;
    }


    // Fill the string
    string result(n, ' ');
    int index = 0;

    // Place the maximum frequency character at special positions
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 || (i * 2 <= n && isPrime(i)))
        {
            result[i - 1] = max_char;
            freq[max_char]--;
        }
    }

    // Fill the remaining positions with other characters
    for (int i = 0; i < n; i++)
    {
        if (result[i] == ' ')
        {
            for (auto &entry : freq)
            {
                if (entry.second > 0)
                {
                    result[i] = entry.first;
                    entry.second--;
                    break;
                }
            }
        }
    }

    cout << result << "\n";

    return 0;
}
