//
// Created by lh on 2017/9/2.
//
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cstring>
using namespace std;

class Solution{
public:
    bool is_find(string s,vector<string> wordDict){
        if(s.empty())
            return false;
        vector<string>::iterator it = find(wordDict.begin(),wordDict.end(),s);
        if(it!=wordDict.end())
            return true;
        return false;
    }
    bool wordBreak(string s,vector<string>& wordDict){
        if(wordDict.size() == 1 )
            return s == wordDict[0];
        int dp[s.length()+1] = {};
        dp[0] = 1;
        for (int i = 0; i <s.length() ; ++i) {
            for (int j = 0; j <=i ; ++j) {
                if(dp[j] && is_find(s.substr(j,i-j+1),wordDict)){
                    dp[i+1] = 1;
                    break;
                }
            }
        }
        return dp[s.length()];
    }
};