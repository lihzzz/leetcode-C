//
// Created by lihzz on 2018/7/6.
//
#include <vector>

using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int size = nums.size();
        vector<int> dp(size);
        int res = INT_MIN;
        for (int i = 0; i <size ; ++i) {
            dp[i] = 1;
            for (int j = 0; j < i; ++j) {
                if(nums[i] > nums[j]){
                    dp[i] =  max(dp[i],dp[j]+1);
                }
            }
            res = dp[i] > res? dp[i]:res;
        }
        return res;
    }
};