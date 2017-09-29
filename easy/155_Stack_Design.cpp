//
// Created by lh on 2017/9/29.
//
#include <stack>
#include <set>
#include <iostream>
using std::stack;
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        s1.push(x);
        if(s2.empty() || x<=s2.top())
            s2.push(x);
    }

    void pop() {
        if(s1.top() == s2.top())s2.pop();
        s1.pop();
    }

    int top() {
        return s1.top();
    }

    int getMin() {
        return  s2.top();
    }

private:
    stack<int>s1,s2;
};