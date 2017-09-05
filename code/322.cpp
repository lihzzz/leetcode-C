//
// Created by lh on 2017/9/4.
//
#include <vector>
#include <algorithm>

using namespace std;
class Solution{
public:
    int coinChange(vector<int>& coins,int amount){
        sort(coins.begin(),coins.end());
        int dp[amount+1]={};
        for (int l = 0; l <=amount ; ++l) {
            dp[l] = INT_MAX;
        }
        dp[0] = 0;

        for (int i = 1; i <= amount; ++i) {
            int size = 0;
            for (int j = 0; j <coins.size() ; ++j) {
                if(coins[j] > i) break;
                size ++ ;
            }
            if(size == 0)
                continue;
            for (int k = 1; k <=size ; ++k) {
                int rem = i - coins[k-1];
                if(dp[rem] == INT_MAX)
                    continue;
                dp[i] = min(dp[rem]+1,dp[i]);
            }
        }
        if(dp[amount] == INT_MAX)
            return -1;
        return dp[amount];
    }
};