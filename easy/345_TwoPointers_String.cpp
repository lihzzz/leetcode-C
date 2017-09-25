//
// Created by lh on 2017/9/25.
//
#include <string>
using std::string;
class Solution {
public:
    string reverseVowels(string s) {
        int left = 0 ,right =s.length()-1;
        while (left<right){
            if(isVowel(s[left]) && isVowel(s[right])){
                char tmp = s[left];
                s[left] = s[right];
                s[right] = tmp;
            } else if(!isVowel(s[left]) && isVowel(s[right])){
                ++left;
                continue;
            } else if(isVowel(s[left]) && !isVowel(s[right])){
                --right;
                continue;
            }
            ++left;
            --right;
        }
        return s;
    }

    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};