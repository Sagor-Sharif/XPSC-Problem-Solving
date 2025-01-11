#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{

    if (num <= 1)
        return false;

    for (int a = 2; a* a<= num; a++)
    {
        if (num % a == 0)
            return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;

    int n = s.size();

    set<char> letter;
    map<char,int>ocer;

    vector<char> single;

    char max_char;
    int max_char_count =0;

    for(int i=0; i< n; i++)
    {
        letter.insert(s[i]);
        ocer[s[i]]++;
        if(ocer[s[i]] > max_char_count)
        {
            max_char_count = ocer[s[i]];
            max_char = s[i];
        }
    }


    for(int i=0; i< n; i++)
    {
        if(s[i] != max_char)
        {
            single.push_back(s[i]);
        }
    }


//    for(int i=0; i< single.size(); i++)
//    {
//        cout<<single[i]<<" ";
//    }



    int maxPrime = n/2 ;

    for(int i=3; i<= n/2; i++)
    {

        if(isPrime(i))
        {
            maxPrime++;
        }

    }
    if(n<4)
    {
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
    else if( maxPrime > max_char_count)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        int i;
        for(i=1; i<= n/2; i++)
        {
            if(i%2 == 0 || isPrime(i))
            {
                cout<<max_char;
            }
            else if(!single.empty())
            {
                cout<<single[0];
                single.erase(single.begin());
            }
            else
            {
                cout<<max_char;
            }
        }
        for( ;i <= n; i++)
        {
            if(i%2 ==0)
            {
                cout<<max_char;
            }
            else if(!single.empty())
            {
                cout<<single[0];
                single.erase(single.begin());
            }
            else
            {
                cout<<max_char;
            }
        }
        cout<<endl;
    }




    return 0;
}

