//
// Created by lll on 2017/10/27.
//
#include <vector>
using namespace std;
//class Solution {
//public:
//    int combinationSum4(vector<int>& nums, int target) {
//        int count = 0;
//        helper(nums,target,count);
//        return count;
//    }
//
//    void helper(vector<int> nums,int target,int& count){
//        if(target == 0)
//            count++;
//        else{
//            for (int i = 0; i <nums.size() ; ++i) {
//                if(target-nums[i] < 0)
//                    continue;
//                helper(nums,target-nums[i],count);
//            }
//        }
//    }
//};


class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,0);
        dp[0] = 1;
        for (int i = 1; i <= target ; ++i) {
            for(auto a:nums)
                if(i>=a) dp[i] += dp[i-a];
        }
        return dp.back();
    }

};