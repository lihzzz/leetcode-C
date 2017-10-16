//
// Created by lh on 2017/10/15.
//
#include <vector>
#include <numeric>
using namespace std;


class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        if(nums.empty() || k==1)
            return true;
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(k<= 0 || sum % k != 0) return false;
        vector<int> vis(nums.size(),0);
        return helper(nums,vis,0,k,0,0,sum/k);

    }
    bool helper(vector<int> nums,vector<int> vis,int start,int k,int cur_sum,int cur_num,int target){
        if(cur_sum > target) return false;
        if(k==1) return true;
        if(cur_sum == target && cur_num > 0) return helper(nums,vis,0,k-1,0,0,target);
        for (int i = start; i <nums.size() ; ++i) {
            if(vis[i]  == 0){
                vis[i] = 1;
                if(helper(nums,vis,i+1,k,cur_sum+nums[i],cur_num++,target)) return true;
                vis[i] = 0;
            }
        }
        return false;
    }
};