//
// Created by lh on 2018/4/28.
//

#include <iostream>
#include <stack>

using namespace std;

bool isValid(const char* szInput){
    stack<char> s;
    if(szInput == nullptr)
        return false;

    while (szInput){
        char cur = *szInput++;
        switch (cur){
            case ')':
                while (true){
                    if(s.empty()){
                        return false;
                    }
                    if(s.top() == '('){
                        s.pop();
                        break;
                    }else if(s.top() == ')'){
                        return false;
                    }else{
                        s.pop();
                    }
                }
                break;
            default:
                s.push(cur);
        }
    }
    if(!s.empty()){
        return false;
    }
    return true;
}