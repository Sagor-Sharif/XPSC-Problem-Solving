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
        int n;
        cin>>n;

        vector<int>a(n);
        int total=0;
        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }
        int indx =0;
        while(a.size() > 1)
        {

            int current_score =0;
            for(int j = indx; j<a.size()-1 ; j++)
            {
                current_score = abs(a[j] - a[j+1]);

                if(current_score > 0)
                {
                    indx = j;
                    break;
                }
            }

            total += current_score;
            a.erase(a.begin()+indx);
            a.erase(a.begin()+indx);

            if(indx -1 >= 0)
            {
                indx-=1;
            }
        }

        cout<<total<<endl;

    }



    return 0;
}



