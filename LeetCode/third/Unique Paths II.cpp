//
// Created by lihzz on 2018/7/12.
//
#include <vector>

using namespace std;
class Solution {
public:
    typedef vector<vector<int>> vec;
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.empty())
            return 0;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vec dp(m,vector<int>(n,0));

        for (int i = 0; i <m ; ++i) {
            if(obstacleGrid[i][0] == 1){
                break;
            }
            dp[i][0] = 1;
        }
        for (int j = 0; j < n ; ++j) {
            if(obstacleGrid[0][j] == 1){
                break;
            }
            dp[0][j] = 1;
        }
        for (int k = 1; k <m ; ++k) {
            for (int i = 1; i < n; ++i) {
                if(obstacleGrid[k][i] != 1){
                    dp[k][i] = dp[k-1][i] + dp[k][i-1];
                }
            }
        }
        return dp[m-1][n-1];
    }
};