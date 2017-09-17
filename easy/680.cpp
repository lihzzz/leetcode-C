//
// Created by lh on 2017/9/17.
//
#include <string>
#include <iostream>
using std::cout;
using std::string;

class Solution {
public:
    bool isvaild(string s){
        int left = 0,right = s.length()-1;
        while (left < right){
            if(s[left] != s[right]){
                return false;
            }
            left ++;
            right --;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0,right = s.length()-1;
        int res=0;
        while (left < right){
            if (s[left] != s[right]){
                if(s[left+1] == s[right] ){
                    res += isvaild(s.substr(left+1,right-left));
                }
                if( s[left] == s[right-1]){
                    res += isvaild(s.substr(left,right-left));
                }
                if(res)
                    return true;
                return false;
            }
            left ++;
            right --;
        }
        return true;
    }
};
