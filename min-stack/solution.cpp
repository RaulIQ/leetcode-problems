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
        int min_val = this->my_stack.empty()
                          ? value
                          : min(value, this->my_stack.top().second);
        this->my_stack.push({value, min_val});
    }

    void pop() { this->my_stack.pop(); }

    int top() { return this->my_stack.top().first; }

    int getMin() { return this->my_stack.top().second; }
};

int main() { return 0; }
