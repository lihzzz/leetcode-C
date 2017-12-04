//
// Created by lh on 2017/12/4.
//
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(),sum = 0;
        if(n<2)
            return false;
        for (int i = 0; i <n-1 ; ++i) {
            sum += nums[i];
            for (int j = i+1; j <n ; ++j) {
                sum+=nums[j];
                if(k==0) return sum==0;
                if(sum % k == 0) return true;
            }
        }
        return false;
    }
};