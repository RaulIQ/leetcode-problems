#include <bits/stdc++.h>

#include <stack>
#include <unordered_map>
using namespace std;

class MyQueue {
private:
    std::stack<int> in;
    std::stack<int> out;

public:
    MyQueue() {}

    void push(int x) { in.push(x); }

    int pop() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }

        int x = out.top();
        out.pop();
        return x;
    }

    int peek() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }

    bool empty() { return in.empty() && out.empty(); }
};

int main() {
    MyQueue myQueue;

    return 0;
}
