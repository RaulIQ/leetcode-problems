#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return 0;
        }

        unordered_map<char, int> map_s;
        unordered_map<char, int> map_t;

        for (int i = 0; i < s.length(); i++) {
            map_s[s[i]]++;
            map_t[t[i]]++;
        }

        return map_s == map_t;
    }
};

int main() {
    Solution sol;

    string s = "a";
    string t = "ab";
    bool res = sol.isAnagram(s, t);
    cout << res << endl;
    // cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
