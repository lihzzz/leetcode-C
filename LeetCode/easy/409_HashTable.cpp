//
// Created by lh on 2017/9/20.
//
#include <string>
#include <unordered_map>
using std::string;
class Solution {
public:
    int longestPalindrome(string s) {
        if(s.empty())
            return 0;
        std::unordered_map<char,int>m;
        for(auto a:s)++m[a];
        int even = 0;
        for(auto a:m){
            if(a.second %2 == 0){
                even += a.second;
            } else
                even += a.second-1;
        }
        return even <s.length()?even+1:even;
    }
};