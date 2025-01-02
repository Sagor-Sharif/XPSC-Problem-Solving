#include<bits/stdc++.h>
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

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;

        for(int i=0; i< k; i++)
        {
            int current_gcd = gcd(x,y);
            if(x>y)
            {
                x =current_gcd;
            }
            else
                y=current_gcd;


            int current_lcm = lcm(x,y);
            if(x<y)
            {
                x =current_lcm;
            }
            else
                y=current_lcm;
        }


        cout<<x+y<<endl;
    }

    return 0;
}
