#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if (k == 1) {
            int maxn = -1111111111;
            for (int c : nums) {
                maxn = max(c, maxn);
            }
            return maxn;
        }

        int max_sum = 0;

        for (int i = 0; i < k; i++) {
            max_sum += nums[i];
        }

        for (int i = 1; (i + k - 1) < nums.size(); i++) {
            int new_sum = max_sum - nums[i - 1] + nums[i + k - 1];
            max_sum = max(max_sum, new_sum);
        }

        return (double)max_sum / (double)k;
    }
};

int main() {
    Solution sol;

    vector<int> prices = {0, 4, 0, 3, 2};

    double n = sol.findMaxAverage(prices, 4);

    cout << n << endl;

    return 0;
}
