#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int last_sum = 0;

        for (int i = 0; i < k; i++) {
            last_sum += nums[i];
        }

        int max_sum = last_sum;

        for (int i = 1; (i + k - 1) < nums.size(); i++) {
            last_sum = last_sum - nums[i - 1] + nums[i + k - 1];
            max_sum = max(max_sum, last_sum);
        }

        return (double)max_sum / (double)k;
    }
};

int main() {
    Solution sol;

    vector<int> prices = {4, 0, 4, 3, 3};

    double n = sol.findMaxAverage(prices, prices.size());

    cout << n << endl;

    return 0;
}
