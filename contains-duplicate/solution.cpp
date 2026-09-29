#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            if (seen.contains(nums[i])) {
                return true;
            } else {
                seen[nums[i]] = 1;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3};
    bool res = sol.containsDuplicate(nums);
    cout << res << endl;
    // cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
