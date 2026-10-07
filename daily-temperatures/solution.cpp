#include <bits/stdc++.h>

#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> out(t.size());
        stack<pair<int, int>> mst;
        for (int i = 0; i < t.size(); i++) {
            while ((!mst.empty()) && (mst.top().first < t[i])) {
                out[mst.top().second] = i - mst.top().second;
                mst.pop();
            }
            mst.push({t[i], i});
        }

        return out;
    }
};

int main() {
    Solution sol;
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> out = sol.dailyTemperatures(temperatures);

    for (auto i : out) {
        cout << i << endl;
    }

    return 0;
}
