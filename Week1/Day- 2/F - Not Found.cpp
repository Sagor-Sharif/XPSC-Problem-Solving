#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<int>letter(123,0);

    for( char ch : s )
    {
        letter[ch] = 1;
    }

    for( int i = 97; i <= 122; i++ )
    {
        if( letter[i] != 1 )
        {
            char ch = i;

            cout << ch << "\n";

            return 0;
        }
    }
    cout << "None" << "\n";
    return 0;
}
