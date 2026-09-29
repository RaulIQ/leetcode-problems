#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm = prices[0];
        int max_dif = 0;

        for (int c : prices) {
            max_dif = max(max_dif, c - minm);
            minm = min(minm, c);
        }

        return max_dif;
    }
};

int main() {
    Solution sol;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int n = sol.maxProfit(prices);

    cout << n << endl;

    return 0;
}
