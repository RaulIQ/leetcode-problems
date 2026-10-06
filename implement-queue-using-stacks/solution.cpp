#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

class MyQueue {
private:
    vector<int> queue;

public:
    MyQueue() {}

    void push(int x) { this->queue.push_back(x); }

    int pop() {
        int r = this->queue[0];
        if (this->queue.size() > 1) {
            for (int i = 1; i < this->queue.size(); i++) {
                this->queue[i - 1] = this->queue[i];
            }
        }
        this->queue.pop_back();
        return r;
    }

    int peek() { return this->queue[0]; }

    bool empty() { return this->queue.size() == 0; }

    vector<int> get_queue() { return this->queue; }
};

int main() {
    MyQueue myQueue;
    myQueue.push(1);  // queue is: [1]
    vector<int> q = myQueue.get_queue();
    for (int n : q) {
        cout << n << ", ";
    }
    cout << endl;

    myQueue.push(2);  // queue is: [1, 2] (leftmost is front of the queue)
    q = myQueue.get_queue();
    for (int n : q) {
        cout << n << ", ";
    }
    cout << endl;

    int f = myQueue.peek();  // return 1
    cout << f << endl;
    f = myQueue.pop();
    q = myQueue.get_queue();
    for (int n : q) {
        cout << n << ", ";
    }
    cout << endl;

    myQueue.empty();  // return false

    return 0;
}
