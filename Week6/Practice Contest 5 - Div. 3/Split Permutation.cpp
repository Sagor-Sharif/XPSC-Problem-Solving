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
        if(n<4)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            if(n%2==0)
            {
                int N=n;
                for(int i=1; i<=n/2; i++)
                {

                    cout<<i<<" "<<N<<" ";
                    N--;
                }
            }
            else
            {
                cout<<n<<" ";
                int N=n-1;

                for(int i=1; i<=n/2; i++)
                {
                    cout<<i<<" "<<N<<" ";
                    N--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
