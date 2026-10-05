#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int best = INT_MIN;
        int len = 0;
        int left = 0;
        unordered_map<char, int> storage;
        for (int right = 0; right < s.size(); right++) {
            if (storage[s[right]] > 0) {
                while (s[left] != s[right]) {
                    len--;
                    storage[s[left]]--;
                    left++;
                }
                len--;
                storage[s[left]]--;
                left++;
            } 
            storage[s[right]]++;
            len++;
            best = max(best, len);
        }


        return best == INT_MIN ? 0 : best;
    }
};

int main() {
    Solution sol;

    string s = "";

    double n = sol.lengthOfLongestSubstring(s);

    cout << n << endl;

    return 0;
}
