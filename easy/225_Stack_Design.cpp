//
// Created by lh on 2017/9/28.
//
#include <queue>
using std::queue;
class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        queue<int> tmp;
        tmp.push(x);
        while (!q.empty()){
            int a = q.front();
            q.pop();
            tmp.push(a);
        }
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int a = q.front();
        q.pop();
        return a;
    }

    /** Get the top element. */
    int top() {
        return q.front();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }

private:
    queue<int> q;
};