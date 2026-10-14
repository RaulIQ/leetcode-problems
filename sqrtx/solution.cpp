#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;

        while (l < r) {
            int n = (l + r) / 2;
            if (n * n < x) {
                l = n + 1;
            } else {
                r--;
            }
        }

        return l;
    }
};


int main() {
    Solution sol;

    int num = 8;
    auto result = sol.mySqrt(num);

    cout << result << endl;

    return 0;
}
