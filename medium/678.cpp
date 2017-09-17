//
// Created by lh on 2017/9/17.
//
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    bool checkValidString(string s) {
        int res;
        int left = 0 ,right =s.size()-1;
        while (left <= right){
            if(s[left]=='*') {
                res += checkValidString(s.substr(left + 1, right - left));
                res += checkValidString(s.substr(left + 1,right-left -1));
            } else if(s[left] =='(' && s[right] ==')'){
                left ++;
                right --;
            }

            if(s[right])
        }
    }
};