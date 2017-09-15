//
// Created by lh on 2017/9/14.
//
#include <string>
using std::string;
//class Solution {
//public:
//    int numDistinct(string s, string t) {
//        if(s.length() == 0){
//            return t.length() == 0?1:0;
//        }
//        if(t.length() == 0){
//            return 1;
//        }
//        int cnt = 0;
//        for (int i = 0; i <s.length() ; ++i) {
//            if(s[i] == t[0]){
//                cnt += numDistinct(s.substr(i+1),t.substr(1));
//            }
//        }
//        return cnt;
//    }
//};


class Solution {
public:
    int numDistinct(string s, string t) {
        int dp[t.length() + 1][s.length() + 1];
        for(int i = 0;i<=s.length();++i) dp[0][i] = 1;
        for (int j = 1; j <=t.length() ; ++j) {
            dp[j][0] = 0;
        }
        for (int k = 1; k <= t.length() ; ++k) {
            for (int i = 1; i <=s.length() ; ++i) {
                dp[k][i] = dp[k][i-1] + (t[k-1] == s[i-1]?dp[k-1][i-1]:0);
            }
        }

        return dp[t.length()][s.length()];
    }
};