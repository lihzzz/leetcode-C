//
// Created by lh on 2017/9/19.
//
#include <vector>
using std::vector;

/*result:m
 * n=nums.size()
 * x=equal number
 * sum + m*(n-1) = x * n
 * x = minnum + m
 *
 * m= sum - n* minnum
 * */
class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int minnum = nums[0],sum = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            minnum = minnum<nums[i]?minnum:nums[i];
            sum += nums[i];
        }
        return sum-nums.size()*minnum;
    }
};