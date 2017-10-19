//
// Created by lh on 2017/10/19.
//
#include <vector>
#include <unordered_map>
using namespace std;
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int S) {
//        int res = 0;
//        helper(nums,0,S,res);
//        return res;
//    }
//    void helper(vector<int> nums,int pos,int S,int& res){
//        if(pos >= nums.size()){
//            if(S==0) ++res;
//            return;
//        }
//        helper(nums,pos+1,S-nums[pos],res);
//        helper(nums,pos+1,S+nums[pos],res);
//    }
//};


class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        vector<unordered_map<int,int>>dp(nums.size());
        return helper(nums,S,0,dp);
    }
    int helper(vector<int>& nums,int sum,int start,vector<unordered_map<int,int>>&dp){
        if(start == nums.size()) return sum == 0;
        if(dp[start].count(sum)) return dp[start][sum];
        int cnt1 = helper(nums,sum-nums[start],start+1,dp);
        int cnt2 = helper(nums,sum+nums[start],start+1,dp);
        return dp[start][sum] = cnt1 + cnt2;
    }
};