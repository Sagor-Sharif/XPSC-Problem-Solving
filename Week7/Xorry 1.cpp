#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        int A=0,B=0;
        int B_pos =0;

        while((1<<B_pos) <= x)
        {
            B_pos++;
        }

        int MSB = 1<<(B_pos - 1);
        B= MSB;
        A = B^x;
        cout<<A<<" "<<B<<endl;

    }


        return 0;
}

