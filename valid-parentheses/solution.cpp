#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class Stack {
private:
    string s;

public:
    Stack() {
        this->s = "";
    }

    void push_back(char c) {
        s.push_back(c);
    }

    char get_last() {
        if (this->is_empty()){
            return ' ';
        }
        return s[s.size() - 1];
    }

    void pop_back() {
        s.pop_back();
    }

    bool is_empty() {
        return s == "";
    }
};

class Solution {
public:
    bool isValid(string s) {
        Stack my_stack;
        for (char c : s) {
            char b = my_stack.get_last();
            if ((b == '(' && c == ')') |
                (b == '[' && c == ']') |
                (b == '{' && c == '}') 
            ) {
                my_stack.pop_back();
            } else {
                my_stack.push_back(c);
            }
        }

        return my_stack.is_empty();
    }   
};

int main() {
    Solution sol;

    string s = "({[]}))";

    bool n = sol.isValid(s);

    cout << n << endl;

    return 0;
}
