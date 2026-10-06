#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) { 
        int sum = nums[0]; 
        int i = 0; int j = 1;
        int len = 1;
        if (sum >= target) {
            return 1;
        }



    }
};

int main() {
    Solution sol;

    vector<int> nums = {4, 0, 4, 3, 3};
    int target = 7;

    double n = sol.minSubArrayLen(target, nums);

    cout << n << endl;

    return 0;
}
