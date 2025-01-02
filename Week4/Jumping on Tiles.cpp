#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int string_size = s.size();

        vector<pair<int, int>> value;
        for (int i = 0; i < string_size; i++)
        {
            int char_value = s[i] - 'a' + 1;
            value.push_back({char_value, i + 1});
        }
        vector<int> result;
        int start_value = value[0].first;
        int end_value = value[string_size - 1].first;
        int total_value = 0;
        int total_moves = 1;
        bool srt =false;
        //result.push_back(1);
        if (start_value <= end_value)
        {
            sort(value.begin(), value.end());

//            for(auto p:value)
//            {
//                cout<<p.first<<" "<<p.second<<endl;
//            }

            for(int i=0; i< string_size-1; i++)
            {
                pair<int,int> p1=value[i];
                pair<int,int> p2=value[i+1];
                if(srt == false && p1.second == 1 && p1.first>=start_value)
                {
                    //cout<<i+1<<" Move: "<<p1.second<<" - "<<p2.second<<endl;
                    srt = true;
                    result.push_back(p1.second);
                    total_value+= p2.first - p1.first;
                    total_moves++;
                }
                else if(p1.second != 1 && p1.first>=start_value)
                {
                    //cout<<i+1<<" Move: "<<p1.second<<" - "<<p2.second<<endl;
                    result.push_back(p1.second);
                    total_value+= p2.first - p1.first;
                    total_moves++;
                }
                if(p2.second == string_size)
                {
                    if(result[result.size()-1] != string_size)
                    {
                        //cout<<i+1<<" Move: "<<p1.second<<" - "<<p2.second<<endl;
                        result.push_back(p2.second);
                        //total_moves++;
                    }
                    break;
                }
            }

        }
        else
        {
            sort(value.rbegin(), value.rend());

//            for(auto p:value)
//            {
//                cout<<p.first<<" "<<p.second<<endl;
//            }

            for(int i=0; i< string_size-1; i++)
            {
                pair<int,int> p1=value[i];
                pair<int,int> p2=value[i+1];
                if(srt == false && p1.second == 1 && p1.first<=start_value)
                {
                    //cout<<i+1<<" Move: "<<p1.second<<" - "<<p2.second<<endl;
                    srt = true;
                    result.push_back(p1.second);
                    total_value+= p1.first - p2.first;
                    total_moves++;
                }
                else if(p1.second != 1 && p1.first<=start_value)
                {
                    //cout<<i+1<<" Move: "<<p1.second<<" - "<<p2.second<<endl;
                    result.push_back(p1.second);
                    total_value+= p1.first - p2.first;
                    total_moves++;
                }
                if(p2.second == string_size)
                {
                    if(result[result.size()-1] != string_size)
                    {
                        //cout<<i+1<<" Move: "<<p1.second<<" - "<<p2.second<<endl;
                        result.push_back(p2.second);
                        //total_moves++;
                    }
                    break;
                }
            }
        }
        cout<<total_value<<" "<<total_moves<<endl;
        for(int number:result)
        {
            cout<<number<<" ";
        }

        cout << '\n';
    }

    return 0;
}
