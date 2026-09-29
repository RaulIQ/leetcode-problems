#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void push_num(vector<int>& arr,int num, int index, int m) {
        int k = m - index;
        for (k; k > 0; k--) {
            arr[index + k - 1] = arr[index + k - 2];
        }
        arr[index] = num;
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1 = 0; int i2 = 0;
        int len = m;
        while (i1 < (m + n)) {
            if (nums1[i1] <= nums2[i2] > nums1[i1 + 1]) {
                push_num(nums1, nums2[i2], i1 + 1, len);
                len++;
                i2++;
                i1++;
            }
        }
        
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1,3,5,0,0};
    vector<int> nums2 = {2,4};
    int m = 3; int n = 2;
    sol.merge(nums1, m, nums2, n);

    // sol.push_num(nums1, 3, 2, 4);
    for (int c : nums1) {
        cout << c << ", ";
    }
    cout << endl;

    // cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
