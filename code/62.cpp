//
// Created by lh on 2017/9/8.
//
#include <vector>

using namespace std;
//class Solution{
//public:
//    int backtrack(int r,int l,int m,int n){
//        if(r == m-1 && l == n-1){
//            return 1;
//        }
//        if(r >= m || l >= n)
//            return 0;
//        return backtrack(r+1,l,m,n)+backtrack(r,l+1,m,n);
//    }
//    int uniquePaths(int m,int n){
//        return backtrack(0,0,m,n);
//    }
//};
//
//class Solution{
//public:
//    int backtrack(int r,int l,int m,int n,vector<vector<int> > dp){
//        if( r == m-1 && l == n-1)
//            return 1;
//        if(r >= m || l>=n)
//            return 0;
//        if(dp[r+1][l] == -1)
//            dp[r+1][l] = backtrack(r+1,l,m,n,dp);
//        if(dp[r][l+1] == -1)
//            dp[r][l+1] = backtrack(r,l+1,m,n,dp);
//        return dp[r+1][l] + dp[r][l+1];
//
//    }
//    int uniquePaths(int m,int n){
//        vector<vector<int> > dp(m+1,vector<int>(n+1,-1));
//        return backtrack(0,0,m,n,dp);
//    }
//};





class Solution{
public:
    int uniquePaths(int m,int n){
        vector<vector<int> > dp(m,vector<int>(n,0));
        for (int j = 0; j <m ; ++j) {
            dp[j][0] = 1;
        }
        for (int k = 0; k < n ; ++k) {
            dp[0][k] = 1;
        }
        for (int i = 1; i <m ; ++i) {
            for (int j = 1; j <n ; ++j) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];

    }
};