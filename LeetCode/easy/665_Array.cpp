//
// Created by lh on 2017/10/1.
//
#include <vector>
using std::vector;
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.empty() || nums.size()==1)
            return true;
        int n = nums.size(),diff = 0;
        for (int i = 1; i <n ; ++i) {
            if (nums[i] - nums[i-1] < 0) {
                if(i<2 || i>=2 && nums[i-2] < nums[i]){
                    nums[i-1] = nums[i];
                } else{
                    nums[i] = nums[i-1];
                }
                diff++;
            }
            if(diff >1)
                return false;
        }
        return diff<=1;
    }
};