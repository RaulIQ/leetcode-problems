#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int best = INT_MAX;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum >= target) {
                best = min(best, right - left +1);
                sum -= nums[left];
                left++;
            }
        }

        if (best == INT_MAX) {
            return 0;
        } else {
            return best;
        }

    }
};

int main() {
    Solution sol;

    vector<int> nums = {1,1,1,1,1,1,1,1};
    int target = 11;

    double n = sol.minSubArrayLen(target, nums);

    cout << n << endl;

    return 0;
}
