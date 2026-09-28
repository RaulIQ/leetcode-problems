#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int fast = 1;
        while (fast < nums.size()) {
            if (nums[slow] != nums[fast]) {
                nums[slow + 1] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow + 1;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    auto result = sol.removeDuplicates(nums);

    cout << result << endl;
    // cout << nums << endl;

    return 0;
}
