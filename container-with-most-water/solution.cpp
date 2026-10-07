#include <bits/stdc++.h>

#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int max_v = 0;

        while (i != j) {
            int l = j - i;
            if (height[i] >= height[j]) {
                int v = height[j] * l;
                max_v = max(max_v, v);
                j--;
            } else {
                int v = height[i] * l;
                max_v = max(max_v, v);
                i++;
            }
        }

        return max_v;
    }
};

int main() {
    Solution sol;
    vector<int> h = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int out = sol.maxArea(h);

    cout << out << endl;

    return 0;
}
