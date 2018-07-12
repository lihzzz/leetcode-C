//
// Created by lihzz on 2018/7/12.
//
#include <vector>

using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,0));
        for (int i = 0; i <m ; ++i) {
            dp[i][0] = 1;
        }
        for (int j = 0; j <n ; ++j) {
            dp[0][j] = 1;
        }
        for (int k = 1; k <m ; ++k) {
            for (int i = 1; i < n; ++i) {
                dp[k][i] = dp[k-1][i] + dp[k][i-1];
            }
        }
        return dp[m-1][n-1];

    }
};