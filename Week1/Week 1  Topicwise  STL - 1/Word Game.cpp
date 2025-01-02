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
        vector<string> person1(n);
        vector<string> person2(n);
        vector<string> person3(n);
        for(int i=0; i< n; i++)
        {
            cin>>person1[i];
        }
        for(int i=0; i< n; i++)
        {
            cin>>person2[i];
        }
        for(int i=0; i< n; i++)
        {
            cin>>person3[i];
        }

        map<string, int> freq;
        for (const auto& word : person1) freq[word]++;
        for (const auto& word : person2) freq[word]++;
        for (const auto& word : person3) freq[word]++;

        int p1 = 0, p2 = 0, p3 = 0;

        for (const auto& word : person1)
        {
            if (freq[word] == 1) p1 += 3;
            else if (freq[word] == 2) p1 += 1;
        }

        for (const auto& word : person2)
        {
            if (freq[word] == 1) p2 += 3;
            else if (freq[word] == 2) p2 += 1;
        }

        for (const auto& word : person3)
        {
            if (freq[word] == 1) p3 += 3;
            else if (freq[word] == 2) p3 += 1;
        }

        cout << p1 << " " << p2 << " " << p3 << endl;
    }



    return 0;
}

