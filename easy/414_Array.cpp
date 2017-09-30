//
// Created by lh on 2017/9/30.
//
#include <vector>
#include <algorithm>

using std::vector;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        nums.erase(std::unique(nums.begin(),nums.end()),nums.end());
        int n = nums.size();
        if(n<3){
            return nums.back();
        } else{
            return nums[nums.size()-3];
        }
    }
};