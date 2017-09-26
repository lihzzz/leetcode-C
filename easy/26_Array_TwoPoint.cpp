//
// Created by lh on 2017/9/26.
//
#include <vector>
using std::vector;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)return n;
        int pre = nums[0];
        for (int i = 1; i <n ; ++i) {
            if(nums[i] == pre){
                --n;
            }
            pre = nums[i];
        }
        return n;
    }
};