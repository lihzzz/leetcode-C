//
// Created by lihzz on 2018/7/3.
//
#include <stack>
using namespace std;
int getAndRemoveLastElement(stack<int> s){
    int result = s.top();
    s.pop();
    if(s.empty()){
        return result;
    }else{
        int last = getAndRemoveLastElement(s);
        s.push(result);
        return last;
    }
}


void reverse(stack<int> s){
    if(s.empty()){
        return;
    }
    int last = getAndRemoveLastElement(s);
    reverse(s);
    s.push(last);
}