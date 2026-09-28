#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for (char c : s) {
            if (c >= 'A' && c <= 'Z')
                result += c + ('a' - 'A');
            else if (c >= 'a' && c <= 'z')
                result += c;
            else if (c >= '0' && c <= '9')
                result += c;
        }

        int len = result.size();

        for (int i = 0; i < len; i++) {
            if (result[i] != result[len - i - 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;

    string s = "0P";
    auto result = sol.isPalindrome(s);

    cout << result << endl;

    return 0;
}
