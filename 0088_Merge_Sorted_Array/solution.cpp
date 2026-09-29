#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1 = m - 1;
        int i2 = n - 1;
        int tail = m + n - 1;

        while (i2 >= 0) {
            if ((i1 >= 0) && (nums1[i1] >= nums2[i2])) {
                nums1[tail] = nums1[i1];
                i1--;
            } else {
                nums1[tail] = nums2[i2];
                i2--;
            }
            tail--;
        }
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 2, 3, 0, 0};
    vector<int> nums2 = {5, 6};
    int m = 3;
    int n = 2;
    sol.merge(nums1, m, nums2, n);

    // cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
