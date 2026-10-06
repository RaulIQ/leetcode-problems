#include <bits/stdc++.h>

#include <stack>
#include <unordered_map>
using namespace std;

class MyQueue {
private:
    stack<int> in;
    stack<int> out;

    void move() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
    }

public:
    MyQueue() {}

    void push(int x) { in.push(x); }

    int pop() {
        move();
        int x = out.top();
        out.pop();
        return x;
    }

    int peek() {
        move();
        return out.top();
    }

    bool empty() { return in.empty() && out.empty(); }
};

int main() {
    MyQueue myQueue;

    return 0;
}
