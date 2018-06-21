//
// Created by lh on 2017/9/20.
//
#include <vector>
#include <algorithm>
using std::sort;
using std::max;
using std::vector;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return max((nums[0]*nums[1]*nums[n-1]),(nums[n-1]*nums[n-2]*nums[n-3]));
    }
};