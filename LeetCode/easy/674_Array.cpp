//
// Created by lh on 2017/9/21.
//
#include <vector>
using std::vector;
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int res = 1,cur = nums[0],tmp=1;
        for (int i = 1; i <nums.size() ; ++i) {
            if(nums[i] > cur){
                ++tmp;
                cur = nums[i];
            } else{
                cur = nums[i];
                tmp = 1;
            }
            if(tmp > res){
                res = tmp;
            }

        }
        return res;
    }
};