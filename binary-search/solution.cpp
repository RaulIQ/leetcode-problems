#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size();

        while (i < j) {
            int z = (i + j) / 2;
            if (nums[z] > target) {
                j = z;
            }
            else if (nums[z] < target) {
                i = z + 1;
            } else {
                return z;
            }
        }

        return -1;

    }
};

int main() {
    Solution sol;

    vector<int> nums = {-1,0,3,5,9,12};
    auto result = sol.search(nums, 9);

    cout << result << endl;

    return 0;
}
