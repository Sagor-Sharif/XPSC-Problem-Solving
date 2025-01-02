#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,bool> name;
    while(n--)
    {
        vector<bool> ch(123,false);
        string s;
        cin>>s;
        int time=2;
        for(int i=0; i<s.size(); i++)
        {
            ch[s[i]] =true;
        }
        if(s.size() == 1)
        {
            for(int i=97; i< 123; i++)
            {
                if(ch[i] == false)
                {
                    cout<<char(i)<<s<<endl;
                    break;
                }
            }
        }
        else
        {
            bool print =false;
            cout<<s[0];
            for(int i=1; i<s.size(); i++)
            {
                if(s[i] == s[i-1] && print == false)
                {
                    for(int i=97; i< 123; i++)
                    {
                        if(ch[i] == false)
                        {
                            cout<<char(i);
                            print =true;
                            break;
                        }
                    }
                }
                cout<<s[i];
            }
            if(print ==false)
            {
                for(int i=97; i< 123; i++)
                {
                    if(ch[i] == false)
                    {
                        cout<<char(i);
                        print =true;
                        break;
                    }
                }
                //cout<<s;
            }
            cout<<endl;
        }
    }
    return 0;
}

