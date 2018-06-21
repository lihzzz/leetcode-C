//
// Created by lh on 2017/10/25.
//
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.size(),n = s2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for (int i = 1; i <=n ; ++i) {
            dp[0][i] = dp[0][i-1]+s2[i-1];
        }
        for (int j = 1; j <=m ; ++j) {
            dp[j][0] = dp[j-1][0]+s1[j-1];
            for (int i = 1; i <=n ; ++i) {
                dp[j][i] = s1[j-1] == s2[i-1]?dp[j-1][i-1] :min(dp[j-1][i] + s1[j-1],dp[j][i-1]+s2[i-1]);
            }
        }

        return dp[m][n];
    }
};