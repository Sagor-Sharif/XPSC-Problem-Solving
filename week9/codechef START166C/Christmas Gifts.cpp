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
        int a,b,c;
        cin>>a>>b>>c;
        int total_area = a*b*2 + a*c*2 + b*c*2;
        int total_wrap_box = 1000/total_area;

        cout<<total_wrap_box<<endl;


    }



    return 0;
}

