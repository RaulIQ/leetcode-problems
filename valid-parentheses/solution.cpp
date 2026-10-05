#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                char open = st.top();
                if ((c == ')' && open != '(') ||
                    (c == ']' && open != '[') ||
                    (c == '}' && open != '{')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};


int main() {
    Solution sol;

    string s = "({[]}))";

    bool n = sol.isValid(s);

    cout << n << endl;

    return 0;
}
