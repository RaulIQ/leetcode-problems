#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {

        if ((x == 0) || (x == 1)) {
            return x;
        }
        int l = 0;
        int r = x / 2 + 1;

        while (l < r) {
            long n = (l + r) / 2;
            if (n * n > x) {
                r = n;
            } else if (n * n < x) {
                l = n + 1;
            } else {
                return n;
            }
        }

        return l - 1;
    }
};


int main() {
    Solution sol;

    int num = 15;
    auto result = sol.mySqrt(num);

    cout << result << endl;

    return 0;
}
