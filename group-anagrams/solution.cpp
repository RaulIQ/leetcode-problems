#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> storage;
        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort(key.begin(), key.end());

            storage[key].push_back(i);
        }

        vector<vector<string>> out;

        for (auto& [key, val] : storage) {
            vector<string> out_in;
            for (int i : val) {
                out_in.push_back(strs[i]);
            }
            out.push_back(out_in);
        }

        return out;
    }
};

int main() {
    Solution sol;

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> out = sol.groupAnagrams(strs);

    cout << "[";
    for (size_t i = 0; i < out.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < out[i].size(); j++) {
            cout << "\"" << out[i][j] << "\"";
            if (j + 1 < out[i].size()) cout << ", ";
        }
        cout << "]";
        if (i + 1 < out.size()) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
