//
// Created by lihzz on 2018/8/16.
//

#include "../common_header.h"

class Solution {
public:
    bool validPalindrome(string s) {
        int i = -1,j=s.length();

        while (++i < --j){
            if(s[i]!= s[j]){
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
            }
        }
        return true;
    }

    bool isPalindrome(string s,int i,int j){
        while (i<j){
            if(s[i++] != s[j--]){
                return false;
            }
        }
        return true;
    }
};