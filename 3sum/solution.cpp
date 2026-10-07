#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> out;
        for (int i = 0; i < nums.size() - 3; i++) {
            unordered_map<int, int> seen;
            int target = -nums[i];

            for (int j = i + 1; j < nums.size(); j++) {
                int r = target - nums[j];
                if (seen.contains(r)) {
                    out.push_back({nums[i], nums[j], nums[seen[r]]});
                } else {
                    seen[r] = j;
                }
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
