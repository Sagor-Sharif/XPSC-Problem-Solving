#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>a(n),b(n);

        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i< n; i++)
        {
            cin>>b[i];
        }

        vector<int> c = a;
        sort(c.begin(),c.end());
        sort(b.begin(),b.end());

        unordered_map<int, queue<int>> mapping;
        for (int i = 0; i < n; i++)
        {
            mapping[c[i]].push(b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << mapping[a[i]].front() << " ";
            mapping[a[i]].pop();
        }
        cout<<endl;



    }
    return 0;
}


