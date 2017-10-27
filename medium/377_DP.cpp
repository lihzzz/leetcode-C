//
// Created by lll on 2017/10/27.
//
#include <vector>
using namespace std;
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int sum = 0,count = 0;
        for (int i = 0; i <nums.size() ; ++i) {
            sum = nums[i];
            helper(nums,target,sum,count);
        }
        return count;
    }

    void helper(vector<int> nums,int target,int sum,int& count){
        if(sum > target)
            return;
        else if(sum == target)
            count++;
        else{
            for (int i = 0; i <nums.size() ; ++i) {
                sum += nums[i];
                helper(nums,target,sum,count);
            }
        }
    }
};