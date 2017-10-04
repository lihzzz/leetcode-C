//
// Created by lh on 2017/10/4.
//
#include <string>
#include <vector>
#include <mshtmlc.h>

using std::vector;
using std::string;
//class Solution {
//public:
//    int countSubstrings(string s) {
//        if(s.empty())
//            return 0;
//        int n = s.size();
//        vector<int>dp(n,1);
//        for (int i = 1; i <n ; ++i) {
//            dp[i] += dp[i-1];
//            for (int j = 0; j <i ; ++j) {
//                if(isPalindromic(s.substr(j,i-j+1)))
//                    dp[i]++;
//            }
//        }
//        return dp[n-1];
//    }
//    bool isPalindromic(string s){
//        int left = 0,right = s.size()-1;
//        while (left<right){
//            if(s[left] != s[right])
//                return false;
//            ++left;--right;
//        }
//        return true;
//    }
//};


class Solution {
public:
    int countSubstrings(string s) {
        if(s.empty())
            return 0;
        int n = s.size(),res = 0;
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        for (int i = n-1; i >=0; --i) {
            for (int j = i; j <n ; ++j) {
                dp[i][j] = (s[i] == s[j] && (j-i<=2 || dp[i+1][j-1]));
                if(dp[i][j])++res;
            }
        }
        return res;
    }
};
