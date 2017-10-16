//
// Created by lh on 2017/10/16.
//
#include <vector>
#include <numeric>
using namespace std;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum & 1)
            return false;
        int target = sum / 2;
        vector<bool> dp(target+1,false);
        dp[0] = true;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = target; j >= nums[i] ; --j) {
                dp[j] = dp[j] || dp[j-nums[i]];
            }
        }
        return dp.back();
    }
};