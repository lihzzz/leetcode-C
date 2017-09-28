//
// Created by lh on 2017/9/28.
//

#include <string>
#include <stack>
using std::string;
using std::stack;

class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for (auto a:s) {
            if(a=='(' || a=='{' || a=='['){
                brackets.push(a);
            }else{
                if(brackets.empty())
                    return false;
                if(a=='}' && brackets.top()!='{' ||a==')' && brackets.top()!='(' || a==']' && brackets.top()!='[')
                    return false;
                else
                    brackets.pop();
            }
        }
        return brackets.empty();
    }
};