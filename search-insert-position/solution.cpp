#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            int len = i + j;
            int i_n = len / 2;
            if (nums[i_n] > target) {
                j = i_n;
            } else if (nums[i_n] < target){
                i = i_n + 1;
            } else {
                return i_n;
            }
        }

        if (nums[i] >= target) {
            return i;
        } else {
            return i + 1;
        }
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1,3,5,6};
    auto result = sol.searchInsert(nums, 2);

    cout << result << endl;

    return 0;
}
