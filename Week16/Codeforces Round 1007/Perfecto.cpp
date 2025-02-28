#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;

bool isPerfectSquare(int x)
{
    int s = (int)sqrt(x);
    return (s * s == x);
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
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> permutation(n);
            int sum =2,j=1;
            for (int i = 0; i < n; i++)
            {
                if(!isPerfectSquare(sum) )
                {
                    cout<<sum<<" ";
                }
                else
                {
                    while(isPerfectSquare(sum))
                    {
                        sum+=j;
                        j++;
                    }
                }
                sum+=j;
                j++;
            }
//            for (int i = 0; i < n; i++)
//            {
//                cout << permutation[i] << " ";
//            }
            cout << endl;
        }
    }


    return 0;
}



