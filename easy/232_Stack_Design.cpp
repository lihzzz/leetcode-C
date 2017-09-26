//
// Created by lh on 2017/9/26.
//
#include <stack>
using std::stack;
class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        stack<int> tmp ;
        while (!s.empty()){
            int a =s.top();
            tmp.push(a);
            s.pop();
        }
        s.push(x);
        while (!tmp.empty()){
            int a = tmp.top();
            s.push(a);
            tmp.pop();
        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int a =s.top();
        s.pop();
        return a;
    }

    /** Get the front element. */
    int peek() {
        return s.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return s.empty();
    }

private:
    stack<int> s;
};