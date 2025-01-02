#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        vector<int>A(n);

        for(int i=0; i< n; i++)
        {
            cin>>A[i];
        }

        vector<int>first;
        vector<int>second;

        first.push_back(A[0]);

        for(int i=1; i< n; i++)
        {
            if(A[i-1] <= A[i])
            {
                first.push_back(A[i]);
            }
            else
            {
                second.push_back(A[i]);

                for(int j=i+1; j<n; j++)
                {

                    second.push_back(A[j]);

                }
                break;
            }
        }

        for(int i=0; i< first.size() ; i++)
        {
            second.push_back(first[i]);
        }


        if(is_sorted(second.begin(),second.end()))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}


