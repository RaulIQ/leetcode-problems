#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> out;
        sort(nums.begin(), nums.end());

        int size = static_cast<int>(nums.size());
        for (int i = 0; i + 2 < size; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int t = -nums[i];
            int n = i + 1;
            int j = nums.size() - 1;

            while (n < j) {
                int sum = nums[n] + nums[j];
                if (sum < t) {
                    n++;
                } else if (sum > t) {
                    j--;
                } else {
                    out.push_back({nums[i], nums[j], nums[n]});
                    n++;
                    j--;

                    while (n < j && nums[n] == nums[n - 1]) {
                        n++;
                    }
                    while (n < j && nums[j] == nums[j + 1]) {
                        j--;
                    }
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
