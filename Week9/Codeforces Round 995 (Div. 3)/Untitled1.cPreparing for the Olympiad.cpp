#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int max_diff = 0;

        for(int i=0; i< n; i++)
        {
            int def=a[i];
            if(i < n-1)
            {
                def= a[i] - b[i+1];
            }

            max_diff = max(max_diff , max_diff+def);
        }
        cout<<max_diff<<endl;
    }

    return 0;
}
