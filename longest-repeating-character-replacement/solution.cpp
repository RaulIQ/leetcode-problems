#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int seen[26] = {0};
        int i = 0;
        seen[s[i] - 'A']++;
        pair<int, int> maxp = {s[i], seen[s[i] - 'A']};
        int max_len = 1;
        for (int j = 1; j < s.size(); j++) {
            seen[s[j] - 'A']++;

            if (maxp.second < seen[s[j] - 'A']) {
                maxp.second = seen[s[j] - 'A'];
                maxp.first = s[j];
            }

            int len = j - i + 1;

            if ((len - maxp.second) <= k) {
                max_len = max(max_len, len);
                continue;
            } else {
                if (maxp.first == s[i]) {
                    maxp.second--;
                }
                seen[s[i] - 'A']--;
                i++;
            }
        }

        return max_len;
    }
};

int main() {
    Solution sol;

    string s = "ABAB";
    auto result = sol.characterReplacement(s, 2);

    cout << result << endl;

    return 0;
}
