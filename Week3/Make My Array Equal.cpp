#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a!=0 && b!=0 && a>b)
    {
        if(a%b==0)
        {
            return a/b;
        }
        else
            return a*b;
    }
    else if(a!=0 && b!=0)
    {
        if(b%a==0 )
        {
            return b/a;
        }
        else
            return a*b;
    }
    else
    {
        return max(a,b);
    }
}

string canMakeAllEqual(const vector<int>& A)
{
    int gcd_value = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        gcd_value = gcd(gcd_value, A[i]);
    }
    int gcd = gcd_value;

    for (int x : A)
    {
        if (x % gcd != 0)
        {
            return "NO";
        }
    }
    return "YES";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A.rbegin(),A.rend());

        if(n>2)
        {
            cout << canMakeAllEqual(A) << endl;
        }
        else
        {
            if(A[0] ==0 || A[1]==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
