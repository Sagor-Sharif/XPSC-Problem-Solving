#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        stack<int> lower_index;
        stack<int> uper_index;

        for (int i = 0; i < len; i++)
        {
            if(s[i] >='A' && s[i] <='Z' && s[i] != 'B')
            {
                uper_index.push(i);
            }
            else if(s[i] >='a' && s[i] <='z' && s[i] != 'b')
            {
                lower_index.push(i);
            }
            if (s[i] == 'b')
            {
                s[i] = '0';
                if(!lower_index.empty())
                {
                    int index = lower_index.top();
                    s[index] = '0';
                    lower_index.pop();
                }
            }
            else if (s[i] == 'B')
            {
                s[i] = '0';
                if(!uper_index.empty())
                {
                    int index = uper_index.top();
                    s[index] = '0';
                    uper_index.pop();
                }
            }
        }

        for (int i = 0; i < len; i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                cout << s[i];
            }
        }
        cout << endl;
        s.clear();
    }

    return 0;
}
