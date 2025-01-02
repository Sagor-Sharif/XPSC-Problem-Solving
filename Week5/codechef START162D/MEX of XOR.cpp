#include <bits/stdc++.h>
using namespace std;

int findMEX(int L, int R, int X)
{
    vector<int> xorSet;
    for (int i = L; i <= R; i++)
    {
        xorSet.push_back(i ^ X);
    }
    sort(xorSet.begin(),xorSet.end());
    int mex = 0,i=0,n;
    for(int n:xorSet)
    {
        if(n!=i)
        {
            return i;
        }
        else
        {
            i++;
        }
        mex=n;
    }
    return mex+1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int L, R, X;
        cin >> L >> R >> X;
        int mex = findMEX(L, R, X);
        cout << mex << endl;
    }
    return 0;
}
