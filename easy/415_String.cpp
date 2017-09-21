//
// Created by lh on 2017/9/21.
//
#include <string>
using std::string;
class Solution {
public:
    string addStrings(string num1, string num2) {
        string res ="";
        int m = num1.size()-1,n = num2.size()-1,carry=0;
        while (m>=0 || n >= 0){
            int a = m>=0?num1[m--] - '0':0;
            int b = n>=0?num2[n--] - '0':0;
            int sum = a+b+carry;
            res.insert(res.begin(),sum%10 +'0');
            carry = sum/10;
        }
        return carry?'1' + res:res;
    }
};