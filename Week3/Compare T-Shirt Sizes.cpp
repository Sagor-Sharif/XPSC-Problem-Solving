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
        string a,b;
        cin>>a>>b;
        int a_siz = a.size();
        int b_siz = b.size();

        char al=a[a_siz-1],bl= b[b_siz-1];
        if((al=='S'&&(bl=='M'||bl=='L')) || (al=='M'&&bl=='L'))
        {
            cout<<"<"<<endl;
        }
        else if((al=='L'&&(bl=='S'||bl=='M')) || (al=='M'&&bl=='S'))
        {
            cout<<">"<<endl;
        }
        else
        {
            if(al=='S'&&bl=='S')
            {
                if(a_siz>b_siz)
                {
                    cout<<"<"<<endl;
                }
                else if(a_siz<b_siz)
                {
                    cout<<">"<<endl;
                }
                else
                {
                    cout<<"="<<endl;
                }
            }
            else if(a_siz>b_siz)
            {
                cout<<">"<<endl;
            }
            else if(a_siz<b_siz)
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }
        }
    }
    return 0;
}
