#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<string> chatList;
    unordered_map<string, bool> inChatList;

    for (int i = 0; i < n; ++i)
    {
        string name;
        cin >> name;

        if (inChatList[name])
        {
            chatList.erase(remove(chatList.begin(), chatList.end(), name), chatList.end());
        }
        chatList.push_front(name);
        inChatList[name];
    }

//    for(int i=0; i< n; i++)
//    {
//        string s;
//        cin>>s;
//        chatList.push_front(s);
//    }
//    cout<< endl;
    for (const auto& name : chatList)
    {
        cout << name << endl;
    }

    return 0;
}
