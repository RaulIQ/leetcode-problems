#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> in;
        for (int i = 0; i < nums.size() - 2; i++) {
            unordered_map<int, int> seen;
            int target = -nums[i];

            for (int j = i + 1; j < nums.size(); j++) {
                int r = target - nums[j];
                if (seen.contains(r)) {
                    in.push_back({nums[i], nums[j], nums[seen[r]]});
                } else {
                    seen[nums[j]] = j;
                }
            }
        }

        vector<vector<int>> out;
        unordered_map<string, int> seen_out;

        for (vector<int> v : in) {
            vector<int> p = v;
            sort(p.begin(), p.end());
            string s;
            for (int i : p) {
                s.append(to_string(i));
            }

            if (!seen_out.contains(s)) {
                out.push_back(v);
                seen_out[s]++;
            }

        }
        return out;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    auto result = sol.threeSum(nums);

    for (auto v : result) {
        for (auto n : v) {
            cout << n << ", ";
        }
        cout << endl;
    }

    return 0;
}
