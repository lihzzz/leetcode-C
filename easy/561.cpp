//
// Created by lh on 2017/9/17.
//
#include <vector>
#include <algorithm>
using std::sort;
using std::vector;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int res = 0;
        if(nums.empty())
            return res;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i+=2) {
            res += nums[i];
        }
        return res;
    }
};