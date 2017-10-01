//
// Created by lh on 2017/10/1.
//

#include <string>
#include <cctype>
using std::string;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0,right =s.size()-1;
        while (left<right){
            while (left<right && !isalnum(s[left])){
                left ++;
            }
            while(left<right&&!isalnum(s[right])){
                right--;
            }
            if((s[left]+32-'a')%32 == (s[right]+32-'a')%32){
                ++left;
                --right;
            } else
                return false;
        }
        return true;
    }
};