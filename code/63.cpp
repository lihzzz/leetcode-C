//
// Created by lh on 2017/9/8.
//
#include <vector>

using namespace std;
//class Solution {
//public:
//    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//        if(obstacleGrid.empty() || obstacleGrid[0].empty() || obstacleGrid[0][0] == 1)
//            return 0;
//        int height = obstacleGrid.size();
//        int weight = obstacleGrid[0].size();
//        vector<vector<int> > dp(height, vector<int>(weight, 0));
//        int flag = 0;
//        for (int i = 0; i < height; ++i){
//            if(obstacleGrid[i][0] != 0 || flag) {
//                flag = 1;
//                dp[i][0] = 0;
//            }
//            else
//                dp[i][0] = 1;
//        }
//        flag = 0;
//        for (int j = 0; j <weight ; ++j) {
//            if(obstacleGrid[0][j] != 0 || flag){
//                flag = 1;
//                dp[0][j] = 0;
//            }
//
//            else
//                dp[0][j] = 1;
//        }
//        for (int k = 1; k <height ; ++k) {
//            for (int i = 1; i <weight ; ++i) {
//                if(obstacleGrid[k][i] == 0){
//                    dp[k][i] = dp[k-1][i] + dp[k][i-1];
//                } else{
//                    dp[k][i] = 0;
//                }
//            }
//        }
//        return dp[height-1][weight-1];
//    }
//};


class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.empty() || obstacleGrid[0].empty() || obstacleGrid[0][0] == 1)
            return 0;
        int height = obstacleGrid.size();
        int weight = obstacleGrid[0].size();
        vector<vector<int> > dp(height, vector<int>(weight, 0));

        for (int i = 0; i <height ; ++i) {
            for (int j = 0; j <weight ; ++j) {
                if(obstacleGrid[i][j] == 1) dp[i][j] = 0;
                else if(i==0 && j==0) dp[i][j] = 1;
                else if(i==0 && j > 0){
                    dp[i][j] = dp[i][j-1];
                } else if(i>0 && j==0){
                    dp[i][j] = dp[i-1][j];
                }else{
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        return dp[height-1][weight-1];
    }
};