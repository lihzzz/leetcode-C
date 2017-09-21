//
// Created by lh on 2017/9/21.
//
#include <string>
using std::string;
using std::to_string;
class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        string res = "";
        int positive = num>0?1:0;
        while (num!=0){
            res = to_string(abs(num % 7)) + res;
            num /= 7;
        }
        return positive?res:"-"+res;
    }
};