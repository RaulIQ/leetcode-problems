#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        for (int n : nums) {
            seen[n] += 1;
        }

        vector<pair<int, int>> seen_v;
        for (pair<int, int> e : seen) {
            seen_v.push_back(e);
        }

        sort(seen_v.begin(), seen_v.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });

        vector<int> out;
        for (int i = 0; i < k; i++) {
            out.push_back(seen_v[i].first);
        }

        return out;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 1, 1, 2, 2, 3};
    auto result = sol.topKFrequent(nums, 2);

    for (auto v : result) {
        cout << v << ", ";
    }
    cout << endl;

    return 0;
}
