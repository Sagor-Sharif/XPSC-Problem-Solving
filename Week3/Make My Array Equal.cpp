#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
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
        if(n>2)
        {
            cout << canMakeAllEqual(A) << endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
