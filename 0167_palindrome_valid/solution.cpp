#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            int summ = nums[i] + nums[j];
            if (summ == target) {
                return {i, j};
            } else if (summ < target) {
                i++;
            } else {
                j--;
            }
        }

        return {};
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 7, 11, 15};
    auto result = sol.twoSum(nums, 9);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
