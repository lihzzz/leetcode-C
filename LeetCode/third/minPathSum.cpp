//
// Created by lihzz on 2018/7/6.
//
#include <vector>

using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        if(m == 0)
            return 0;
        vector<vector<int>> dp(m,vector<int>(n,0));
        dp[0][0] = grid[0][0];
        for (int i = 1; i < n; ++i) {
            dp[0][i] = dp[0][i-1] + grid[0][i];
        }
        for (int j = 1; j < m; ++j) {
            dp[j][0] = dp[j-1][0] + grid[j][0];
        }

        for (int k = 1; k <m ; ++k) {
            for (int i = 1; i < n; ++i) {
                dp[k][i] = min(dp[k-1][i],dp[k][i-1]) + grid[k][i];
            }
        }
        return dp[m-1][n-1];
    }
};