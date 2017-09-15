//
// Created by lh on 2017/9/15.
//
#include <vector>
#include <string>
using std::vector;
using std::string;
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())
            return 0;
        int res= 0;
        int index = s.length()-1;
        while (s[index] == ' '){
            index--;
        }
        while (index>=0 && s[index] != ' '){
            res ++;
            index --;
        }
        return res;

    }
};