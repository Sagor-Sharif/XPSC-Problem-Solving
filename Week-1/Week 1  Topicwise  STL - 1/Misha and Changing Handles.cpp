#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    map<string, string> original_handles;
    map<string, string> current_handles;

    for (int i = 0; i < q; ++i) {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;

        string original_handle = old_handle;
        if (current_handles.find(old_handle) != current_handles.end()) {
            original_handle = current_handles[old_handle];
        }

        original_handles[original_handle] = new_handle;
        current_handles.erase(old_handle);
        current_handles[new_handle] = original_handle;
    }
    cout << original_handles.size() << endl;
    for (const auto& [original, final_handle] : original_handles) {
        cout << original << " " << final_handle << endl;
    }
    return 0;
}
