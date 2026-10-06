#include <bits/stdc++.h>

#include <stack>
#include <unordered_map>
using namespace std;

class MinStack {
private:
    stack<pair<int, int>> my_stack;

public:
    MinStack() {}

    void push(int value) {
        if (!this->my_stack.empty()) {
            auto& [old_val, old_minval] = this->my_stack.top();
            this->my_stack.push({value, min(value, old_minval)});
        } else {
            this->my_stack.push({value, value});
        }
    }

    void pop() { this->my_stack.pop(); }

    int top() { return this->my_stack.top().first; }

    int getMin() { return this->my_stack.top().second; }
};

int main() { return 0; }
