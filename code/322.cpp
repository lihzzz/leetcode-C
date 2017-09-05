//
// Created by lh on 2017/9/4.
//
#include <vector>
#include <algorithm>

using namespace std;
//class Solution{
//public:
//    int coinChange(vector<int>& coins,int amount){
//        sort(coins.begin(),coins.end());
//        int themax = amount + 1;
//        vector<int> dp(amount+1,themax);
//        dp[0] = 0;
//
//
//        for (int i = 1; i <= amount; ++i) {
//            int size = 0;
//            for (int j = 0; j <coins.size() ; ++j) {
//                if(coins[j] > i) break;
//                size ++ ;
//            }
//            if(size == 0)
//                continue;
//            for (int k = 1; k <=size ; ++k) {
//                int rem = i - coins[k-1];
//                if(dp[rem] == themax)
//                    continue;
//                dp[i] = min(dp[rem]+1,dp[i]);
//            }
//        }
//        if(dp[amount] == themax)
//            return -1;
//        return dp[amount];
//    }
//};


//class Solution{
//public:
//    int coinChange(vector<int>& coins,int amount){
//        int themax = amount + 1;
//        vector<int> dp(amount+1,themax);
//        dp[0] = 0;
//
//
//        for (int i = 1; i <= amount; ++i) {
//            for (int k = 0; k <coins.size(); ++k) {
//                if(coins[k] <= i){
//                    dp[i] = min(dp[i-coins[k]]+1,dp[i]);
//                }
//            }
//        }
//        if(dp[amount] == themax)
//            return -1;
//        return dp[amount];
//    }
//};


class Solution{
public:
    int coinChange(vector<int>& coins,int amount){
        vector<int> dp(amount+1,INT_MAX);
        dp[0] = 0;
        return coinsChangeDFS(coins,amount,dp);
    }

    int coinsChangeDFS(vector<int> &coins,int amount,vector<int>& dp){
        if(amount < 0 ) return -1;
        if(dp[amount] != INT_MAX) return dp[amount];
        for (int i = 0; i <coins.size() ; ++i) {
            int tmp = coinsChangeDFS(coins,amount-coins[i],dp);
            if(tmp >= 0) dp[amount] = min(dp[amount],tmp + 1);
        }
        return dp[amount] = dp[amount] == INT_MAX ? -1:dp[amount];
    }
};
