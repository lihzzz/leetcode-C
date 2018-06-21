//
// Created by lh on 2017/12/4.
//
#include <vector>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)
            return 0;
        int pro = 1,res = 0,left = 0;
        for (int i = 0; i < nums.size(); ++i) {
            pro *= nums[i];
            while (pro >= k) pro/=nums[left++];
            res += i-left+1;
        }
        return res;
    }
};