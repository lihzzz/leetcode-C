//
// Created by lh on 2017/10/10.
//
#include <string>
#include <stack>
#include <sstream>
using namespace std;
class Solution {
public:
    string postfix(string expression) {
        stack<char> symbol;
        stack<string> value;
        string res = "",cur;
        for(int i = 0;i<expression.size();i++){
            while (expression[i]-'0'>=0 && expression[i]-'0' <10){
                cur += expression[i];
                i++;
            }
            if(!cur.empty()){
                value.push(cur);
                cur = "";
            }
            if(i == expression.size())
                break;
            char ss = expression[i];
            if(symbol.empty() || ss == '(')
                symbol.push(ss);
            else if(ss == ')'){
                while (symbol.top() != '('){
                    char cursym = symbol.top();
                    symbol.pop();
                    value.push(string(1,cursym));
                }
                symbol.pop();
            }
            else {
                while (!symbol.empty() && Priority(ss, symbol.top())) {
                    char cursym = symbol.top();
                    symbol.pop();
                    value.push(string(1,cursym));
                }
                symbol.push(ss);
            }
        }
        while (!symbol.empty()){
            char cursym = symbol.top();
            symbol.pop();
            value.push(string(1,cursym));
        }
        while (!value.empty()){
            res = value.top() + res;
            value.pop();
        }
        return res;
    }
    bool Priority(char a,char b){
        if(b== '(' || ((a=='*'|| a == '/') && (b=='-' || b=='+'))){
            return false;
        }
        return true;
    }
};