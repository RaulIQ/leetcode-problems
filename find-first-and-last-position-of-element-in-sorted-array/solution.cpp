#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> out = {-1, -1};
        if (nums.empty()) return out;

        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int index = i + (j - i) / 2;
            if (nums[index] < target) {
                i = index + 1;
            } else {
                j = index;
            }
        }
        
        if (nums[i] != target) return out;
        out[0] = i;

        j = nums.size() - 1;
        while (i < j) {
            int index = i + (j - i + 1) / 2; 
            if (nums[index] > target) {
                j = index - 1;
            } else {
                i = index;
            }
        }
        out[1] = j;

        return out;
    }
};


int main() {
    Solution sol;

    vector<int> nums = {5,7,7,8,8,10};
    auto result = sol.searchRange(nums, 8);

    for (int n : result) {
        cout << n << ", ";
    }
    cout << endl;

    return 0;
}
