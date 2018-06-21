//
// Created by lh on 2017/9/17.
//
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0,high = 0;
        for (int i = 0; i <s.length() ; ++i) {
            if(s[i] == '('){
                low ++;
                high ++;
            } else if(s[i] == ')'){
                low --;
                high --;
            } else{
                if(low > 0)
                    low --;
                high ++;
            }
        }
        if(high < 0)
            return false;
        return low == 0;
    }
};